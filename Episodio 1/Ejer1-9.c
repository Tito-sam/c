#include <stdio.h>
/*
    Ejercicio 1-9 Escriba un programa que copie su entrada a la salida, reemplazando cada 
    cadena de uno o más blancos por un solo blanco.
*/
int main() {
    int c;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            putchar(' ');
        }
    }
}