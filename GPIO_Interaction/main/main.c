#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h"
#include "freertos/freeRTOS.h"
#include "freertos/task.h"

/*Good practice: Define before with a name the pins you will use and its purpose
 *
 * for instance:
 *
 * #define LED_PIN	GPIO_NUM_2
 *
 * */

#define ESP_LED_PIN GPIO_NUM_2

void app_main(void)
{
    printf("This is a simple GPIO example!\n  ");
	gpio_set_direction(ESP_LED_PIN, GPIO_MODE_OUTPUT);
    int value = 0;
    gpio_set_level(ESP_LED_PIN, 0);

    while (true) {
    	if(value == 0){
    		gpio_set_level(ESP_LED_PIN, 1);
    		value = 1;
    	}
    	else
    	{
    		gpio_set_level(ESP_LED_PIN, 0);
    		value = 0;
    	}
        vTaskDelay(1);
    }
}
