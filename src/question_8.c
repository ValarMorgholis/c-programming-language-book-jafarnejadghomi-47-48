/**
 * @file question_8.c
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
    float xperc;

    printf("Please enter how many persent do you want increase the salary : ");
    scanf("%f", &xperc);

    printf(" The extra salary you sould pay per year : %f\n", (750000 / 100 * xperc) * 2 * 12);
    return 0;
}
