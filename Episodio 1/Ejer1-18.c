#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */
int get_line(char line[], int maxline);
void deleteLine (char line[], int len);

/* Escriba un programa que elimine los blancos y los tabuladores
que estén al final de cada línea de entrada, y que borre completamente las líneas
en blanco. */
int main() {

    int len; // Longitud actual de la linea
    char line[MAXLINE]; // Linea de entrada actual
    
    while ((len = get_line(line,MAXLINE)) > 0) {
        if (line[0] != '\t') {
            printf("La linea es: %s.\n", line);
            printf("Su longitud es: %d.\n", len);
        } else if (len != 1) {
            printf("La linea es: %s.\n", line);
            printf("Su longitud es: %d.\n", len);
        }
    };
    return 0;
};

/* getline: lee una linea en s, y regresa su longitud */

int get_line(char s[], int lim) {
    int c,i;

    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    };
    s[i] = '\0';
    return i;
}

void deleteLine (char l[], int len) {
    int tam;

    for (tam = len; (l[tam] == ' ' && l[tam - 1] == ' ') || (l[tam] == '\t' && l[tam - 1] == '\t'); --tam) {

    }
}

