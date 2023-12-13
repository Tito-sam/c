#include <stdio.h>
/*
    Ejercicio 1-5 Modifique el programa de conversión de temperaturas de manera que escriba 
    la tabla en orden inverso, esto es, desde 300 grados hasta 0.
*/
int main() {
    int fahr;
    for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
};