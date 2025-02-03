#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "include/buttons.h"

static uint32_t last_press_time = 0;
extern int counter;
extern bool update_display;

void button_irq(uint gpio, uint32_t events) {
    uint32_t current_time = to_ms_since_boot(get_absolute_time()); 
    if (current_time - last_press_time < 200) return;
    last_press_time = current_time;
    
    if (gpio == BUTTON_A) counter = (counter - 1 + 10) % 10;
    else if (gpio == BUTTON_B) counter = (counter + 1) % 10;
    
    update_display = true; 
}

void init_buttons(void) {
    gpio_init(BUTTON_A);              
    gpio_set_dir(BUTTON_A, GPIO_IN);  
    gpio_pull_up(BUTTON_A);            
    
    gpio_init(BUTTON_B);               
    gpio_set_dir(BUTTON_B, GPIO_IN);   
    gpio_pull_up(BUTTON_B);            
    
    gpio_set_irq_enabled_with_callback(BUTTON_A, GPIO_IRQ_EDGE_FALL, true, &button_irq);
    gpio_set_irq_enabled_with_callback(BUTTON_B, GPIO_IRQ_EDGE_FALL, true, &button_irq);
}