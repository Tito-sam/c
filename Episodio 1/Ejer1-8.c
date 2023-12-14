#include <stdio.h>
/*
    Ejercicio 1-8 Escriba un programa que cuente espacios en blanco, tabuladores y nuevas líneas.
*/
int main() {
    long eb, tab, nl;
    int c;
    eb = 0;
    tab = 0;
    nl = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') ++eb;
        if (c == '\t') ++tab;
        if (c == '\n') ++nl;
    }
    printf("Espacios en blanco: %ld\n", eb);
    printf("Tabuladores: %ld\n", tab);
    printf("Nueva Linea: %ld\n", nl);
}