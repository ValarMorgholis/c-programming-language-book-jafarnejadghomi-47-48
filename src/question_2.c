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
        char yes_no;

        printf("Enter the number : ");
        scanf("%d", &number);

        for (int i = 1; i < number; i++)
            if (number % i == 0)
                sum += i;

        if (sum == number)
            printf("%d is a perfect number\n", number);
        else
            printf("%d is not a perfect number\n", number);

        printf("Do you want to continue? [Y/n] ");
        scanf(" %c", &yes_no);

        if (yes_no == 'n')
        {
            printf("Have a good day.");
            break;
        }
        else if (yes_no == 'y')
            continue;
        else
        {
            printf("You entered wrong input");
            break;
        }
    }
    return 0;
}
