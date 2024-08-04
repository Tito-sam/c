#include <stdio.h>
#define MAXLINE 1000
#define TAMTAB 8

char line[MAXLINE];
char newLine[MAXLINE];

int getLine(void);
int entab();
void resetLine(char l[]);

/*  Escriba un programa entab que reemplace cadenas de blancos
por el mínimo número de tabuladores y blancos para obtener el mismo espaciado.
Considere los paros de tabulación de igual manera que para detab . Cuando un
tabulador o un simple espacio en blanco fuese suficiente para alcanzar un paro
de tabulación, ¿a cuál se le debe dar preferencia?
*/

int main() {
    int len, newLen;
    extern char line[];
    extern char newLine[];

    while((len = getLine()) != 0) {
        if ((line[0] == '\t' || line[0] == '\n' || line[0] == ' ') && len == 1) {
            printf("La linea esta vacia.\n");
            continue;
        } else {
            printf("La linea con espacios tiene como longitud es: %d\n", len);
            newLen = entab();
            printf("La nueva linea con las tabs y los espacios es: \n");
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

int entab() {
    int numSpaces, numNewSpaces, i;
    int numTabs;
    extern char line[];
    extern char newLine[];

    i = 0;
    numSpaces = 0;
    resetLine(newLine);

    while(line[i] == ' ') {
        numSpaces++;
        i++;
    }
    numTabs = numSpaces / TAMTAB;
    numNewSpaces = numSpaces % TAMTAB;

    for (i = 0; i < numTabs; ++i) {
        newLine[i] = '\t';
    }
    for (i = numTabs; i < (numTabs + numNewSpaces); i++) {   
        newLine[i] = ' ';
    }
    
    for (i = numSpaces; line[i] != '\0'; ++i) {
        newLine[numTabs + numNewSpaces - numSpaces + i] = line[i];
    }
    return i + numTabs + numNewSpaces - numSpaces;
}