#include <stdio.h>
#define MAXLINE 10000
#define NUMCOLUMN 10

char line[MAXLINE];
char newLine[MAXLINE];


int voidLine(char l[]);
int getLine(void);
int doubleLine(int numChar);
void resetLine(char l[]);

/*
Escriba un programa para “doblar” líneas grandes de entrada en
dos o más líneas más cortas después del último carácter no blanco que ocurra an-
tes de la n-ésima columna de entrada. Asegúrese de que su programa se comporte 
apropiadamente con líneas muy largas, y de que no hay blancos o tabuladores
antes de la columna especificada.
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
                    while (i <= (len / NUMCOLUMN)) {
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
    return numFinish;
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