#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"
#include "pico/bootrom.h"

#define LED_RED 13
#define LED_GREEN 11
#define JOY_STICK 22

volatile uint32_t last_time = 0;
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
// Função de interrupção com debouncing
void gpio_irq_handler(uint gpio, uint32_t events)
{
    // Obtém o tempo atual em microssegundos
    uint32_t current_time = to_us_since_boot(get_absolute_time());
    // Verifica se passou tempo suficiente desde o último evento
    if (current_time - last_time > 200000) // 200 ms de debouncing
    {
        if (gpio == JOY_STICK)
        {
            reset_usb_boot(0, 0);
        }
        last_time = current_time; // Atualiza o tempo do último evento        
    }
}

int main()
{
    int tempo_passado = 0;
    stdio_init_all();

    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_init(JOY_STICK);
    gpio_set_dir(JOY_STICK, GPIO_IN);
    gpio_pull_up(JOY_STICK);
    
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);
    gpio_set_irq_enabled_with_callback(JOY_STICK, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);
    while (true) {

        sleep_ms(1000);
        printf("Passou %d segundo(s)\n", tempo_passado++);
    }
}
