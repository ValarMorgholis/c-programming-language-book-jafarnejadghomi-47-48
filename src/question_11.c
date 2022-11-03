/**
 * @file question_11.c
 * @author M.M.Mirzaie (mohamadmahdimirzaieii@gmail.com)
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    const double mpgr = 3 * pow(10, -23);
    float wpl;

    printf("Please enter the water weight per Litre : ");
    scanf("%f", &wpl);

    printf("There is %e molecule in %f Litre water\n", wpl * 950 / mpgr, wpl);
    return 0;
}
