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
    int student_count, gpa, max = 0, university_student_number, scores[BUFSIZ];

    printf("How many student do you have? ");
    scanf("%d", &student_count);



    for (int i = 1; i <= student_count; i++)
    {
        printf("Enter the GPA of student %d : ", i);
        scanf("%d", &scores[i]);
        
        printf("Enter the university student number %d : ", i);
        scanf("%d", &university_student_number);
    }

    for (int i = 1; i <= student_count; i++)
        if (scores[i] > max)
            max = scores[i];

    printf("Maximum gpa is for student (university student number : %d) is %d\n", university_student_number, max);
    return 0;
}
