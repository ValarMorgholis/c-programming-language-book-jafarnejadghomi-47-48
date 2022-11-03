/**
 * @file question_2.c
 * @author M.M.Mirzaie (mohamadmahdimirzaieii@gmail.com)
 * @brief Related on page 70, question 2.
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main()
{
    for (;;)
    {
        int number, sum = 0;
        char flag;

        printf("Enter the number : ");
        scanf("%d", &number);

        for (int i = 1; i < number; i++)
            if (number % i == 0)
                sum += i;

        if (sum == number)
            printf("%d is perfect\n", number);
        else
            printf("%d is not perfect\n", number);

        printf("Do you want to continue? [Y/n] ");
        scanf(" %c", &flag);

        if (flag == 'n')
            break;
    }

    return 0;
}