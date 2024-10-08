#include <stdio.h>
#define MAXLINE 1000
#define TAMTAB 8

char line[MAXLINE];
char newLine[MAXLINE];

int getLine(void);
int detab();
void resetLine(char l[]);

/*  Escriba un programa detab que reemplace tabuladores de la en­trada
    con el número apropiado de blancos para espaciar hasta el siguiente paro
    de tabulación. Considere un conjunto fijo de paros de tabulación, digamos cada
    n columnas. ¿Debe ser n una variable o un parámetro simbólico? 
*/

int main() {
    int len, newLen;
    extern char line[];
    extern char nweLine[];

    while((len = getLine()) != 0) {
        if ((line[0] == '\t' || line[0] == '\n' || line[0] == ' ') && len == 1) {
            printf("La linea esta vacia.\n");
            continue;
        } else {
            printf("La linea con tabuladores tiene como longitud es: %d\n", len);
            newLen = detab();
            printf("La nueva linea con espacios es: \n");
            printf("%s", newLine);
            printf("Y su longitud es: %d\n", newLen);
        }
    }

    return 0;
}

int getLine() {
    int c,i;
    extern char line[];

    resetLine(line);

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void resetLine(char l[]) {
    int i;
    for (i = 0; i < MAXLINE; ++i) {
        l[i] = '\0';
    }
}

int detab() {
    int numTab, numSpaces, i;
    extern char line[];
    extern char newLine[];

    i = 0;
    numTab = 0;
    resetLine(newLine);

    while(line[i] == '\t') {
        numTab++;
        i++;
    }
    numSpaces = numTab * TAMTAB;

    for (i = 0; i < numSpaces; ++i) {
        newLine[i] = ' ';
    }
    for (i = numTab; line[i] != '\0'; ++i) {
        newLine[numSpaces - numTab + i] = line[i];
    }
    return i + numSpaces - numTab;
}