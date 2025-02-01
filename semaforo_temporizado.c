#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define LED_RED 13
#define LED_GREEN 11

struct repeating_timer timer;

bool repeating_timer_callback(struct repeating_timer *t){
    if (!gpio_get(LED_RED))
    {
        gpio_put(LED_GREEN, false);
        gpio_put(LED_RED, true);
    }
    else if (gpio_get(LED_RED) && !gpio_get(LED_GREEN))
    {
        gpio_put(LED_GREEN, true);
    }
    else if (gpio_get(LED_GREEN))
    {
        gpio_put(LED_RED, false);
    }

    return true;    
}

int main()
{
    int tempo_passado = 0;
    stdio_init_all();

    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);
    while (true) {

        sleep_ms(1000);
        printf("Passou %d segundo(s)\n", tempo_passado++);
    }
}
