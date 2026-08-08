#include <reg52.h>

sbit HEATER = P1^0;

#define TARGET_TEMP 30
#define LOWER_LIMIT 29

// Simulated temperature reading
int read_temperature(void)
{
    // Replace this with the actual temperature sensor code.
    return 28;
}

void delay_ms(unsigned int ms)
{
    unsigned int i, j;

    for (i = 0; i < ms; i++)
        for (j = 0; j < 120; j++);
}

void main(void)
{
    int temperature;

    HEATER = 0;

    while (1)
    {
        temperature = read_temperature();

        // Turn the heater on when the temperature is too low.
        if (temperature < LOWER_LIMIT)
        {
            HEATER = 1;
        }
        // Turn the heater off when the target temperature is reached.
        else if (temperature >= TARGET_TEMP)
        {
            HEATER = 0;
        }

        delay_ms(500);
    }
}


