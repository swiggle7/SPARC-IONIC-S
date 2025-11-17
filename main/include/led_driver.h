#pragma once

#include <stdbool.h>

/**
 * @brief Initializes the LED hardware selected through menuconfig.
 *
 * Call once at startup before using any other led_driver functions.
 */
void led_driver_init(void);

/**
 * @brief Forces the LED on or off.
 *
 * @param on Desired LED state.
 */
void led_driver_set(bool on);

/**
 * @brief Toggles the LED and returns the new state.
 */
bool led_driver_toggle(void);

/**
 * @brief Returns the most recent LED state tracked by the driver.
 */
bool led_driver_state(void);
