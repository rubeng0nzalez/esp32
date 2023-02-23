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

    int init = 0;
    printf("GPIO LEDs\n");

	while (true) {

		for(int i = (1 + init); i <= 4; i++){

			if(init == 1 && i == 2)
				vTaskDelay(25);
			else
				vTaskDelay(50);

			gpio_set_level(GPIO_NUM_19, (i == 1));

			gpio_set_level(GPIO_NUM_18, (i == 2));
			gpio_set_level(GPIO_NUM_5,  (i == 3));
			gpio_set_level(GPIO_NUM_17, (i == 4));
			init = 1;
        }

        for(int i = 1; i <= 4; i++){
        	gpio_set_level(GPIO_NUM_19, (i == 4));
			gpio_set_level(GPIO_NUM_18, (i == 3));
			gpio_set_level(GPIO_NUM_5,  (i == 2));
			gpio_set_level(GPIO_NUM_17, (i == 1));

			if(i == 4)
				vTaskDelay(25);
			else
				vTaskDelay(50);
        }
	}
}
