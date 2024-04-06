#include <stdio.h>
#define MAXLINE 1000 
int getline(char line[], int maxline);
void copy(char to[], char form[]);

/*
    Escriba un programa que imprima todas las líneas de entrada que
    sean mayores de 80 caracteres.
*/
int main() {
    int len; // Longitud actual de la linea
    char line[MAXLINE]; // Linea de entrada actual

    while (len = getline(line,MAXLINE) > 80) {
        printf("Longitud de la linea : %d\n", len);
        printf("Linea: %s", line);
    };
    return 0;
};


/* getline: lee una linea en s, y regresa su longitud */

int getline(char s[], int lim) {
    int c,i;

    for (i=0; i < lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i) {
        s[i] = c;
    };
    if (c =='\n') {
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
    while((to[i] = from[i])!= '\0') {
        ++i;
    };
};