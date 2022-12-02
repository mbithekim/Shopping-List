#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  cost1,cost2,quantity1,quantity2;
    char item1[50],item2[50];
    printf("menu\n");
    printf("1. Maize flour - KES 200\n");
    printf("2. Sugar - KES 150\n");
    printf("3. Cooking oil - KES 400\n");
    printf("4. Lentils - KES 300\n");
    printf("5. Soap - KES 150\n");
    printf("item 1:");
    scanf("%s",&item1);
    printf("quantity:");
    scanf("%lf",&quantity1);
    printf("cost:");
    scanf("%lf",&cost1);
    printf("item 1 total cost: %.2lf\n",quantity1*cost1);

    printf("item 2:");
    scanf("%s",&item2);
    printf("quantity:");
    scanf("%lf",&quantity2);
    printf("cost:");
    scanf("%lf",&cost2);
    printf("item 2 total cost: %.2lf\n",quantity2*cost2);
    printf("total cost: %.2lf\n",quantity1*cost1+quantity2*cost2);

    printf("items bought\n");
    printf("%.0lf  %s\n",quantity1,item1);
    printf("%.0lf  %s\n",quantity2,item2);

    return 0;
}
