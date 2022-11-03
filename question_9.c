#include <stdio.h>

int main()
{
    double ppen, pa4, infl, price;

    printf("Please enter the price of pen : ");
    scanf("%lf", &ppen);

    printf("Please enter the price of A4 : ");
    scanf("%lf", &pa4);

    printf("Please enter the inflation percent : ");
    scanf("%lf", &infl);

    price = (pa4 * 50) + (ppen * 150);

    printf("The expenses of company is :  %lf\n", (infl / 100 * price) + price);

    return 0;
}
