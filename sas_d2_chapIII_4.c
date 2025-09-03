#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrez une note numerique : ");
    scanf("%d",&n);
    if(n>=90 && n<=100)
        n=1;
    else  if(n>=80 && n<=89)
        n=2;
    else  if(n>=70 && n<=79)
        n=3;
    else if(n>=60 && n<=69)
        n=4;
    else if(n>=0 && n<=59)
        n=5;
    switch(n){
        case 1: {

            printf("Note litterale : A");
            break;
        }
        case 2: {

            printf("Note litterale : B");
            break;
        }
        case 3: {

            printf("Note litterale : C");
            break;
        }
        case 4: {

            printf("Note litterale : D");
            break;
        }case 5: {

            printf("Note litterale : F");
            break;
        }default:
            printf("Error");
    }
    return 0;
}
