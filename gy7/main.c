#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("K�rek egy sz�mot: ");
    scanf("%d",&a);
    //scanf(&b);
    printf("K�rek egy m�sik sz�mot: ");
    scanf("%d",&b);
    printf("%s",(a>b)?"A a nagyobb":"B a nagyobb");
    return 0;
}
