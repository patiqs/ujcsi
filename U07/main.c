#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=1;i<=1000;i++){
        if ((i%2!=0)&&(i%3==0)){
            printf("%d ",i);
        }
    }
    return 0;
}
