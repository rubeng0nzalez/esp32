#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h"
#include "freertos/freeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_19, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_18, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_5, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_17, GPIO_MODE_OUTPUT);

    printf("GPIO LEDs\n");

	while (true) {
        gpio_set_level(GPIO_NUM_19, 1);
        gpio_set_level(GPIO_NUM_18, 0);
        gpio_set_level(GPIO_NUM_5, 0);
        gpio_set_level(GPIO_NUM_17, 0);
        vTaskDelay(15);
        gpio_set_level(GPIO_NUM_19, 0);
        gpio_set_level(GPIO_NUM_18, 1);
        gpio_set_level(GPIO_NUM_5, 0);
        gpio_set_level(GPIO_NUM_17, 0);
        vTaskDelay(15);
        gpio_set_level(GPIO_NUM_19, 0);
        gpio_set_level(GPIO_NUM_18, 0);
        gpio_set_level(GPIO_NUM_5, 1);
        gpio_set_level(GPIO_NUM_17, 0);
        vTaskDelay(15);
        gpio_set_level(GPIO_NUM_19, 0);
        gpio_set_level(GPIO_NUM_18, 0);
        gpio_set_level(GPIO_NUM_5, 0);
        gpio_set_level(GPIO_NUM_17, 1);
        vTaskDelay(15);
    }
}
