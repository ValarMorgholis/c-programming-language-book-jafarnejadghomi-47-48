/**
 * @file question_12.c
 * @author M.M.Mirzaie (mohamadmahdimirzaieii@gmail.com)
 * @version 0.1
 * @date 2022-11-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define YEAR_PER_SECOND (double)31560000

int main()
{
    int age;

    printf("Please enter your age : ");
    scanf("%d", &age);

    printf("Your age per second : %e\n", age * YEAR_PER_SECOND);
    return 0;
}
