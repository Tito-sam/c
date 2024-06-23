#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */
int get_line(char line[], int maxline);
void copy(char to[], char form[]);

/* Corrija la rutina principal del programa de la línea más larga de
modo que imprima correctamente la longitud de líneas de entrada arbitrariamente
largas, y tanto texto como sea posible. */
int main() {

    int len; // Longitud actual de la linea
    int max; // Maxima longitud vista hasta el momento
    char line[MAXLINE]; // Linea de entrada actual
    char longest[MAXLINE]; // La linea mas larga se guarda aqui

    max = 0;
    while ((len = get_line(line,MAXLINE)) > 0) {
        printf("Longitud de la linea : %d\n", len);
        printf("Linea: %s", line);
        if (len > max) {
            max = len;
            copy(longest, line);
        };
    };
    if (max > 0) {
        printf("\nLa linea mas larga es: %s", longest);
        printf("Con una longitud de %d\n", max);
    };
    return 0;
};

/* getline: lee una linea en s, y regresa su longitud */

int get_line(char s[], int lim) {
    int c,i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    };
    if (c == '\n') {
        s[i] = c;
        ++i;
    };
    s[i] = '\0';
    return i;
}

/* copy: copia 'from' en 'to'; se supone que to es suficientemente grande */

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    };
};