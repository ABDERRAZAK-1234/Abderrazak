#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,b,c,p,d,t;
    printf("Entrez le montant du pret : ");
    scanf("%f",&m);
    printf("Entrez le taux d'interet : ");
    scanf("%f",&b);
    b=b/100/12;
    printf("Entrez le paiment mensuel : ");
    scanf("%f",&c);
    p=((m*b)+m)-c;
    printf("Solde restant apres le permier paiment : %.2f$\n",p);
    d=((p*b)+p)-c;
    printf("Solde restant apres le deuxieme paiment : %.2f$\n",d);
    t=((d*b)+d)-c;
    printf("Solde restant apres le troisieme paiment : %.2f $\n",t);

    
    return 0;
}
