#include <stdio.h>
/*
    Lo siguiente que veremos sera la forma de crear funciones, que son 
    bloques de codigo que se identifican con una palabra en especifico, como
    por elemplo lo son el prinf() o el putchar(), que son funciones dadas 
    por la libreria estandar de c, que tienen una finalidad.
*/
int power(int m, int n);

int main() {
    int i;

    for(i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i , power(2,i), power(-3,i));
    }
    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = i; i <= n; ++i) {
        p = p * base;
        return p;
    }
}