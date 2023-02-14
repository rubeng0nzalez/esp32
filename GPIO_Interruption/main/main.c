#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void app_main(void)
{
    while (true) {
        printf("This example allows the use of a GPIO Interruption!\n");
        sleep(1);
    }
}
