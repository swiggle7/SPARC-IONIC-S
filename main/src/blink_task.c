#include "blink_task.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "sdkconfig.h"

#include "led_driver.h"

#ifndef CONFIG_BLINK_TASK_STACK_SIZE
#define CONFIG_BLINK_TASK_STACK_SIZE 2048
#endif

#ifndef CONFIG_BLINK_TASK_PRIORITY
#define CONFIG_BLINK_TASK_PRIORITY 5
#endif

static const char *TAG = "blink_task";

static void blink_task(void *pv_parameters)
{
    while (true) {
        bool led_on = led_driver_toggle();
        ESP_LOGI(TAG, "Turning the LED %s!", led_on ? "ON" : "OFF");
        vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
    }
}

void blink_task_start(void)
{
    led_driver_init();
    xTaskCreate(
        blink_task,
        "blink_task",
        CONFIG_BLINK_TASK_STACK_SIZE,
        NULL,
        CONFIG_BLINK_TASK_PRIORITY,
        NULL);
}
