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
    int n, max = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter score : ");
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < n; i++)
        if (scores[i] > max)
            max = scores[i];

    printf("score : %d\n", max);
    return 0;
}
