#include <stdio.h>

int main()
{
    float x, y;

    printf("Please enter the x value : ");
    scanf("%f", &x);

    y = 1 / ((x * x) + x + 3);

    printf("y = %f\n", y);
    return 0;
}
