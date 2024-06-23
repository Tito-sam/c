#include <stdio.h>

int main() {
    int c,nl;

    nl = 0;
    /*
        En este caso usamos un while para validar
    */
    while((c = getchar()) != EOF) {
        /*
            Aqui utilizamos el if, y se valida si se da un salto de linea, si esto
            es asi, aumentara la variable de contar las lineas.
            El == valida si los dos valores son iguales.
            Distinga este del = simple, este es para la asignacion de valores.
        */
        if (c == '\n') {
            ++nl;
        }
    }
    printf("%d\n", nl);
}