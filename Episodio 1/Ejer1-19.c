#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */
int get_line(char line[], int maxline);
void reverse(char line[], int len, char newLine[]); // Funcion de reverse
void resetLine(char line[]); // funcion de resetear un array 

/* Escriba una función reverse(s) que invierta la cadena de caracte­res s. 
Usela para escribir un programa que invierta su entrada, línea a línea. */

int main() {

    int len; // Longitud actual de la linea
    char line[MAXLINE]; // Linea de entrada actual
    char newLine[MAXLINE]; // Linea de inverso
    
    while ((len = get_line(line,MAXLINE)) > 0) {
        if ((line[0] == '\t' || line[0] == '\n' || line[0] == ' ') && len == 1) {
            printf("La linea esta vacia.\n");
            continue;
        } else {
            printf("La linea es: %s", line);
            printf("Su longitud es: %d.\n", len);
            reverse(line,len, newLine);
            printf("La linea invertida es: %s.", newLine);
        }
    };
    return 0;
};

/* get_line: lee una linea en s, y regresa su longitud */

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
    resetLine: una funcion que tiene como fin recibir como argumento una array, 
    y esta se reinicia haciendo que todos los espacios que esten ocupados se les 
    asigne el valor nulo '\0'. 
*/

void resetLine(char l[]) {
    int i;
    for (i = 0; i < MAXLINE; ++i) {
        l[i] = '\0';
    }
}

/*
    reverse: esta funcion recibe 3 argumentos, la array que toca invertir, el tamaño de
    la array hasta donde hay informacion, y una array vacia para asignar la array invertida.
*/

void reverse(char l[], int len, char line[]) {
    int tam;
    int i = 0;
    resetLine(line);
    for(tam = len; tam >= 0; --tam) {
        if (l[tam] == '\n' || l[tam] == '\0') {
            continue;
        }
        line[i] = l[tam];
        i++;
    }
    line[i] = '\n';
}

