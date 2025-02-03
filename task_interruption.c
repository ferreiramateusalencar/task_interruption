#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "include/matriz_led.h"
#include "include/led_red.h"
#include "include/buttons.h"

int main() {
    stdio_init_all();
    init_buttons();
    init_red();
    np_init(LED_PIN);

    absolute_time_t next_blink = get_absolute_time();
    bool led_state = false;

    while (true) {
        if (absolute_time_diff_us(next_blink, get_absolute_time()) >= 100000) {
            led_state = !led_state;
            gpio_put(LED_R, led_state);
            next_blink = make_timeout_time_ms(3);
        }
        
        if (update_display) {
            np_clear();
            for (int i = 0; i < LED_COUNT; i++) {
                if (numbers[counter][i])
                    np_set_led(i, 20, 0, 0);
            }
            np_write();
            update_display = false;
        }
    }
}
