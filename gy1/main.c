#include <stdio.h>
#include <stdlib.h>

int dupla (int x) {
return 2*x;
}

int main()
{
    int a;
    printf("k�rek egy szamot: ");
    scanf("%d",&a);
    printf("%d",(dupla(a)));
    return 0;
}




