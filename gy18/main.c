#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
     if((a==b)&&(b==c)) {
        printf("H�rom egyforma van k�zt�k \n");
     }
     else if ((a==b)||(b==c)||(a==c)) {
        printf("k�t egyforma van k�zt�k \n");
     }
     else {
        printf("Nincs k�zt�k egyforma \n");

     }
    return 0;
}
