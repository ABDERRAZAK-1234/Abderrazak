#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,p;
    printf("Saisir la valeur de x :\n");
    scanf("%f",&x);
    p = 3* pow(x,5)+2* pow(x,4)+ 5* pow(x,3)+ pow(x,2)+ 7*x-6;
    printf("La valeur de polynome est : %.2f",p);


    return 0;
}