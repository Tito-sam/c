#include <stdio.h>
/*
    Ejercicio 1-10 Escriba un programa que copie su entrada a la salida, reemplazan­ do cada 
    tabulación por \t, cada retroceso por \b y cada diagonal invertida por \\. Esto hace que 
    las tabulaciones y los espacios sean visibles sin confusiones.
*/
int main() {
     int c;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            putchar('\t');
        }
        if(c == '\b') {
            putchar('\b');
        }
        if(c == '\\') {
            putchar('\\');
        }
    }
}