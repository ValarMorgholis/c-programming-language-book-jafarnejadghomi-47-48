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
    int student_count, gpa, max = 0, university_student_number, temp;

    printf("How many student do you have? ");
    scanf("%d", &student_count);

    for (int i = 1; i <= student_count; i++)
    {
    	printf("Enter the university student number %d : ", i);
        scanf("%d", &temp);
        
        printf("Enter the GPA of student %d (%d) : ", i, temp);
        scanf("%d", &gpa);
        
            
        if (gpa > max)
        {
            max = gpa;
            university_student_number = temp;
        }   
            
    }

    printf("Maximum gpa is for student (%d) is %d\n", university_student_number, max);
    return 0;
}
