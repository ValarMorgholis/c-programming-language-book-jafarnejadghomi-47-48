#include <stdio.h>

int main()
{
    int height, width;

    printf("Please enter the height : ");
    scanf("%d", &height);

    printf("Please enter the width : ");
    scanf("%d", &width);

    printf("Area : %d\n", height * width / 2);
    return 0;
}
