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
