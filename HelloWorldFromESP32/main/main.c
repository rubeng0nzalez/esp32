#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void app_main(void)
{
    while (true) {
        printf("Hello World from ESP32!\n");
        sleep(1);
    }
}
