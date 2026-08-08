#include <reg52.h>

#define LED_PORT P1

void delay_ms(unsigned int ms)
{
    unsigned int i, j;

    for (i = 0; i < ms; i++)
        for (j = 0; j < 120; j++);
}

void main(void)
{
    unsigned char led = 0x01;

    while (1)
    {
        LED_PORT = ~led;
        delay_ms(150);

        led <<= 1;

        if (led == 0x00)
            led = 0x01;
    }
}
