#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "freertos/freeRTOS.h"

void app_main(void)
{
    while (true) {
        printf("Hello World from ESP32!\n");
        pritnf("This is just for testing purposes\n")
        vTaskDelay(1);
        //sleep(1);
    }
}
