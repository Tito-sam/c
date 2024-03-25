#include <stdio.h>

/*
    Ejercicio 1-15 Hacer el programa de conversion de temperatura, en una funcion
*/

float FahrenheitCels(float fahr);
int main()  {
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper) {
        printf("%3.0f\t\t%6.1f\n", fahr, FahrenheitCels(fahr));
        fahr = fahr + step;
    }
}
float FahrenheitCels(float fahr) {
    float cels;
    cels = (5.0/9.0)*(fahr-32.0);
    return cels;
};

