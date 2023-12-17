#include <stdio.h>
/*
    Ejercicio 1-11 ¿Cómo probaría el programa para contar palabras? ¿Qué clase de entrada es la 
    más conveniente para descubrir errores si éstos existen? 
*/
#define IN 1
#define OUT 0


int main() {
    /*
        La forma mas conveniente de probarlo es poniendo frases y borrando frases, para analizar
        si toma todas las palabras y analizar si no cuenta mas o menos. Además, el sistema cuenta 
        como palabras, caracteres que estan unidos si tener que ser una palabra como tal.
        Con esto en cuenta, ya se tiene un margen de error, analizando las palabras ingresadas.
    */
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') state = OUT;
        else if(state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}