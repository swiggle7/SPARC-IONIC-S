/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include "blink_task.h"

/*
 * Keep app_main() focused on high-level orchestration by delegating work
 * to modules declared in include/ and implemented in src/.
 */
void app_main(void)
{
    blink_task_start();
}
