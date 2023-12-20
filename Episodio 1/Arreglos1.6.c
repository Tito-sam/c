#include <stdio.h>

/*
    cuenta digitos, espacios blancos y otros.
*/

int main() {
    int c, i, nwhite, nother;

    /*
        ndigit es un arreglo, un arreglo es un tipo de variable, que funciona para
        guardar mas variables dentro de él.
        En este caso se le dice que sea de tipo entero, por lo que almacenara
        datos de tipo entero.
        Los [], determinas que es un arreglo, y se inicializa en 0.
    */
    int ndigit[0];

    nwhite = nother = 0;

    /*
        Aqui en este for se inicializa los 10 espacios que va a tener el arreglo,
        y se les asigna el valor de 0 a cada uno, para eso se utiliza el for.
        Lo que hay dentro de los [], se llama el sub indice, es por decir
        la referencia al dato que se esta guardando dentro, comienza en el 0, y
        aumenta de forma ascendente, tiene que ser un valor entero.
    */
    for(i = 0;i < 10; ++i) {
        ndigit[i] = 0;
    }
    while((c = getchar()) != EOF) {
        /*
            En este if, se valida si es un numero lo que se esta recibiendo,
            si es asi, se aumenta el valor en la posicion donde va el valor.
            Si no revisa si es un salto de linea, una tabulacion, un espacio, 
            u otro caracter.
            En este caso se utilizo en AND (&&), que funciona para validar al
            igual que el OR, pero este solo devuelve verdadero si ambas condiciones
            son verdaderas, por lo que si alguna es falsa, retornara falso.
        */
        if (c >= '0' && c <= '9') ++ndigit[c-'0'];
        else if(c == ' ' || c == '\n' || c == '\t') ++nwhite;
        else ++nother;
    }
    /*
        Por ultimo en esta parte del codigo, se imprimen todos los valores en orden,
        primeros los digitos, del 0 al 9, luego los espacios en blanco, y por ultimo
        otros.
        En este caso, al igual que para inicializar el arreglo, se utilizo un for para
        imprimirlo en pantalla, y se utiliza los [i], para identificar a cada valor que hay
        dentro del arreglo.
    */
    printf("digitos =");
    for (i = 0;i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", espacios blancos = %d, otros = %d\n", nwhite, nother);

}