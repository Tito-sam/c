#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */
int getline(char line[], int maxline);
void copy(char to[], char form[]);

/* imprime la línea de entrada más larga */
int main() {

    int len; // Longitud actual de la linea
    int max; // Maxima longitud vista hasta el momento
    char line[MAXLINE]; // Linea de entrada actual
    char longest[MAXLINE]; // La linea mas larga se guarda aqui

    max = 0;
    while (len = getline(line,MAXLINE) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        };
    };
    if (max > 0) {
        printf("%s",longest);
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