/**
 * @file question_10.c
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
    int height, width;

    printf("Please enter the height : ");
    scanf("%d", &height);

    printf("Please enter the width : ");
    scanf("%d", &width);

    printf("Area : %d\n", height * width / 2);
    return 0;
}
