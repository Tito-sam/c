#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */
int get_line(char line[], int maxline);
int TamWithoutFinalSpaces(char line[], int len);

/* Escriba un programa que elimine los blancos y los tabuladores
que estén al final de cada línea de entrada, y que borre completamente las líneas
en blanco. */
int main() {

    int len; // Longitud actual de la linea
    char line[MAXLINE]; // Linea de entrada actual
    
    while ((len = get_line(line,MAXLINE)) > 0) {
        if ((line[0] == '\t' || line[0] == '\n' || line[0] == ' ') && len == 1) {
            printf("La linea esta vacia.\n");
            continue;
        } else {
            printf("La linea es: %s", line);
            printf("Su longitud es: %d.\n", len);
            int newTam = TamWithoutFinalSpaces(line,len);
            printf("La linea sin espacios finales es: %s", line);
            printf("La nueva longitud de la linea es: %d.\n", newTam);
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
    if (c == '\n') {
        s[i] = c;
        ++i;
    };
    s[i] = '\0';
    return i;
}
/* 
    TamWithoutFinalSpaces: recibe un  arreglo de caracteres y su tamaño y devuelve la linea sin espacios
    finales y con su nueva longitud. 
*/

int TamWithoutFinalSpaces(char l[], int len) {
    int tam;
    for(tam = len - 2; (l[tam] == ' ' || l[tam] == '\t') && (l[tam-1] == ' ' || l[tam-1] == '\t') ; --tam) {
        l[tam] = '\0';
    }
    if (l[tam] == ' ' || l[tam] == '\t') {
        l[tam] = '\n';
    }
    return tam + 2;
}

