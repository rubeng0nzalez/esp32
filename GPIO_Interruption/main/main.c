#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h"

void app_main(void)
{
    printf("This is a simple GPIO example!\n  ");
	gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
    int value = 0;
    gpio_set_level(GPIO_NUM_2, 0);

    while (true) {
    	if(value == 0){
    		gpio_set_level(GPIO_NUM_2, 1);
    		value = 1;
    	}
    	else
    	{
    		gpio_set_level(GPIO_NUM_2, 0);
    		value = 0;
    	}
        sleep(1);
    }
}
