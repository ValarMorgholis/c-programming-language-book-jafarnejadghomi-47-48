/**
 * @file question_1.c
 * @author M.M.Mirzaie (mohamadmahdimirzaieii@gmail.com)
 * @brief Related on page 70, question 1.
 * @version 0.1
 * @date 2022-11-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int n, gpa, max = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter your GPA : ");
        scanf("%d", &gpa);

        if (gpa > max)
            max = gpa;
    }

    printf("max : %d\n", max);
    return 0;
}
