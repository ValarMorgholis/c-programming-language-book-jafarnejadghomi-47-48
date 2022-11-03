#include <stdio.h>

int main()
{
    int weight;

    printf("Please enter the weight per kg : ");
    scanf("%d", &weight);

    printf("The weight per gr : %d\n", weight * 1000);
    return 0;
}
