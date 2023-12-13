#include <stdio.h>

/*
    Ejercicio 1-3 Modifique el programa de conversión de temperaturas de modo que escriba un encabezado 
    sobre la tabla.
*/
int main()  {
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper) {
        cels = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}