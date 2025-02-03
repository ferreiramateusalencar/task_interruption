#ifndef MATRIZ_LED_H
#define MATRIZ_LED_H

#include "pico/stdlib.h"
#include "hardware/pio.h"

#define LED_COUNT 25
#define LED_PIN 7
#define BRIGTHNESS 0.2

typedef struct {
    uint8_t G, R, B;
} pixel_t;

typedef pixel_t npLED_t;

extern npLED_t leds[LED_COUNT];
extern volatile bool update_display;
extern volatile int counter;
extern const uint8_t numbers[10][25];

void np_init(unsigned int pin);
void np_clear(void);
void np_set_led(unsigned int index, uint8_t r, uint8_t g, uint8_t b);
void np_write(void);

#endif /* MATRIZ_LED_H */