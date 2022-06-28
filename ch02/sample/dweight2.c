#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    printf("Input height:");
    scanf("%d", &height);

    printf("Input length:");
    scanf("%d", &length);

    printf("Input width:");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight: %d\n", weight);

    return 0;
}