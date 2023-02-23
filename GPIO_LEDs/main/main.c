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
        for(int i = 1; i <= 8; i++){
			gpio_set_level(GPIO_NUM_19, (i == 1));
			gpio_set_level(GPIO_NUM_18, (i == 2));
			gpio_set_level(GPIO_NUM_5,  (i == 3));
			gpio_set_level(GPIO_NUM_17, (i == 4));
			vTaskDelay(10);
			gpio_set_level(GPIO_NUM_19, (i == 8));
			gpio_set_level(GPIO_NUM_18, (i == 7));
			gpio_set_level(GPIO_NUM_5,  (i == 6));
			gpio_set_level(GPIO_NUM_17, (i == 5));
			vTaskDelay(10);
        }
    }
}
