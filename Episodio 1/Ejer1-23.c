#include <stdio.h>
#define MAXLINE 10000
#define NUMCOLUMN 50

char line[MAXLINE];
char newLine[MAXLINE];

int voidLine(char l[]);
int getLine(void);
void resetLine(char l[]);
void deleteComments(void);

/*
Escriba un programa para eliminar todos los comentarios de un
programa en C. No olvide manejar apropiadamente las cadenas entre comillas y
las constantes de carácter. Los comentarios de C no se anidan.
*/


int main() {
    int len, chars, i, dato;

    while((len = getLine()) != 0) {
        if ((line[0] == '\t' || line[0] == '\n' || line[0] == ' ') && len == 1) {
            printf("La linea esta vacia.\n");
            continue;
        } else {
            dato = voidLine(line);

            if (dato == 1) {
                if (len > NUMCOLUMN) {
                    i = 0;
                    chars = 0;
                    while (i <= (len / 50)) {
                        chars = doubleLine(chars);
                        printf("%s", newLine);
                        i++;
                    }
                }
            }
        }
    }

    return 0;
}


int getLine() {
    int c,i;

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

int voidLine(char line[]) {
    int i;
    int datos;
    
    datos = 0;
    i = 0;

    while(line[i] != '\0') {
        if (line[i] != '\t' && line[i] != ' ' && line[i] != '\n') {
            datos = 1;
        }
        i++;
    }
    return datos;
}

int doubleLine(int n) {
    int numFinish;
    
    int i = 0;
    numFinish = n;
    resetLine(newLine);

    while(numFinish < (NUMCOLUMN + n)) {
        newLine[i] = line[numFinish];
        i++;
        numFinish++;
    }
    newLine[i] = '\n';
    return numFinish + 1;
}

void deleteComments() {
    int i;
    i = 0;

    while(line[i] != '\0') {
        if(line[i] == "/" && line[i+1] == "*") {
            
        }
    }
}