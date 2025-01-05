#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("A 0 �s 1000 k�z�tti pr�m sz�mok:\n");
    for (int i = 0; i <= 1000; i++) {
        if (isPrime(i)) {
            printf("%5d ", i);
        }
    }
    printf("\n");
    return 0;
}
