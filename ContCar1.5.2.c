#include <stdio.h>
/*
    El siguiente programa contara caracteres y es parecido al 
    programa anterior
*/
int main() {
    long nc;

    nc = 0;
    while(getchar() != EOF) {
        /*
            Aqui vemos una nueva proposicion, el ++, significa un incremento
            de uno, es lo mismo que nc = nc + 1, pero es mas consizo el ++nc
            tambien esta el --, funciona igual pero para disminuir.
            Existen dos tipos, el prefijo (++nc), y el posfijo (nc++), que
            hacen en principio lo mismo, pero actuan en tiempos diferentes,
            eso se vera despues.
        */
        ++nc; 
    }
    printf("%ld\n",nc);
}