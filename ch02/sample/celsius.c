/* Convert a Fahrenheit temperature to Celsius */
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTORE (5.0f / 9.0f)

int main(void)
{
    float f, c;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &f);
    c = (f - FREEZING_PT) * SCALE_FACTORE;
    printf("Celsius equivalent: %.1f\n", c);

    return 0;
}