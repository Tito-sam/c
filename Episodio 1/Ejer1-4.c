#include <stdio.h>

/*
    Ejercicio 1-4 Escriba un programa que imprima la tabla correspondiente Celsius a Fahrenheit.
*/
int main()  {
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    cels = lower;
    
    printf("Celsius\tFahrenheit\n");
    while(cels <= upper) {
        fahr = cels*(9.0/5.0)+32.0;
        printf("%3.0f\t%6.1f\n", cels, fahr);
        cels = cels + step;
    }
}