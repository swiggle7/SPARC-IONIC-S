#pragma once

/**
 * @brief Creates the FreeRTOS task responsible for blinking the LED.
 *
 * Wrap additional application startup from app_main() by calling this
 * function (and any other module initializers) to keep main.c focused on
 * orchestration instead of implementation details.
 */
void blink_task_start(void);
