#include <stdio.h>
/*
    Esta vez vamos a escribir el codigo anterior de otra manera,
    esto se da muchas veces, en donde se pueden realizar de diferentes
    maneras los problemas propuestos, esto depende de cada persona.
*/
int main() {
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
};