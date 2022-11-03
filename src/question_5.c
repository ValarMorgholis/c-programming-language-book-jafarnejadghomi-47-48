/**
 * @file question_5.c
 * @author M.M.Mirzaie (mohamadmahdimirzaieii@gmail.com)
 * @version 0.1
 * @date 2022-11-04
 *
 * @copyright Copyright (c) 2022
 *
 */

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
