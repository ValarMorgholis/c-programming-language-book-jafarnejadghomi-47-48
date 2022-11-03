#include <stdio.h>

#define YEAR_PER_SECOND (double)31560000

int main()
{
    int age;

    printf("Please enter your age : ");
    scanf("%d", &age);

    printf("your age per second is : %e\n", age * YEAR_PER_SECOND);
    return 0;
}