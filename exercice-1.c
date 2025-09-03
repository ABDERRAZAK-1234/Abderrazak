#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,a,A,b,B,c,C,d,D;
    printf("Saisir un montant : ");
    scanf("%d",&m);
    a=m/20;
    A=m%20;
    printf("Billets de 20$ : %d\n",a);

    b=A/10;
    B=A%10;
    printf("Billets de 10$ : %d\n",b);

    c=B/5;
    C=B%5;
    printf("Billets de 5$ : %d\n",c);

    d=C/1;
    printf("Billets de 1$ : %d\n",d);

    return 0;
}
