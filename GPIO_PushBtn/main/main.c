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

#define ESP_LED_PIN	GPIO_NUM_2
#define LED_PIN GPIO_NUM_32
#define PUSHBTN GPIO_NUM_36

void app_main(void)
{
    printf("This is a simple GPIO example using a push button!\n  ");

    //Set GPIO input/output mode for pins
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
	gpio_set_direction(ESP_LED_PIN, GPIO_MODE_OUTPUT);
	gpio_set_direction(PUSHBTN, GPIO_MODE_INPUT);//The push button is set to be an input pin


    while (true) {
    	printf("gpio_get_level(PUSHBTN) = %d\n", gpio_get_level(PUSHBTN));

    	if(gpio_get_level(PUSHBTN) == 0){//When button is pressed
    		gpio_set_level(LED_PIN, 1);//turn on the light
    		gpio_set_level(ESP_LED_PIN, 0);//turn off the ESP light
    	}
    	else
    	{
    		gpio_set_level(LED_PIN, 0);//turn off the light
    		gpio_set_level(ESP_LED_PIN, 1);//turn on the ESP light
    	}
        vTaskDelay(1);
    }
}
