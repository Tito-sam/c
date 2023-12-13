#include <stdio.h>
/*
    Aqui se va a evaluar la entrada y salida de caracteres con dos funciones de 
    la biblioteca estandar.
    Se va a realizar una entrada de caracter y se va a imprimir esa entrada.
*/
int main() {
    /*
        Se establece int para la variable, aunque se puede poner tambien char
        porque al final, se esta almacenando un conjunto de bits. Normalmente
        se pondria tipo char, pero en este caso se utilizo int.
    */
    int c;
    /*
        En este caso se utiliza la funcion getchar(), para obtener la entrada del
        caracter, y se lo asigna a la variable c. Es de tipo entero para poderlo 
        comparar con el EOF, o end of file, que es cuando no hay más a la entrada, 
        un valor que no puede ser confundido con ningún otro carácter. 
        Ademas el != sirve para evaluar que un dato sea diferente de otro.
    */
    c = getchar();
    while(c != EOF) {
        /*
            Aqui se utiliza el putchar(), que tiene como funcion, devolver el caracter
            almacenado en la variable c.
        */
        putchar(c);
        c = getchar();
    }
}