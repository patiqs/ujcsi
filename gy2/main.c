#include <stdio.h>
#include <stdlib.h>

int ker (int x,int y) {
 return (x+y)*2;
}

int ter (int x, int y) {
 return x*y;
}

int main()
{



    int a,b;
    printf("T�glalap!\n");
    scanf("%d,%d",&a,&b);
    printf("A t�glalap ter�lte: %d\n",ter(a,b));
    printf("A t�glalap ker�lete: %d \n",ker(a,b));


    return 0;
}
