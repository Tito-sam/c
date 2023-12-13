#include <stdio.h>
/*
    Estas son conocidas como constantes simbolicas, sirven para tener una
    forma parecida a las variables para tener datos importantes que 
    se pueden utilizar en todo el programa y que se puedan modificar 
    de manera sencilla, sin tener que ir a cada parte a cambiarlo.

    Se establecen asi:
    #define nombre valor

    Estos son diferentes a las variables, por lo que no tienen tipo ni ; 
    al final de la linea.
*/
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
};