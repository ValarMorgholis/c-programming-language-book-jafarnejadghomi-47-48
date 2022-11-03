/**
 * @file question_7.c
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
    int weight;

    printf("Please enter the weight per kg : ");
    scanf("%d", &weight);

    printf("The weight per gr : %d\n", weight * 1000);
    return 0;
}
