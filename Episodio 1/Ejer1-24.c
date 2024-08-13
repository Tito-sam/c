#include <stdio.h>
#define MAXLINE 10000
#define NUMCOLUMN 50



char line[MAXLINE];
char newLine[MAXLINE];
char lines[ MAXLINE/NUMCOLUMN][MAXLINE];
int iPartentesis = 0;
int fPartentesis = 0;
int iLlaves = 0;
int fLlaves = 0;
int iCorchetes = 0;
int fCorchetes = 0;


int voidLine(char l[]);
int getLine(void);
void resetLine(char l[]);
void doubleLine();
int revisarParentesis();
int revisarLlaves();
int revisarCorchetes();

/*
Escriba un programa para revisar los errores de sintaxis rudimentarios 
de un programa en C, como paréntesis, llaves y corchetes no alineados. No
olvide las comillas ni los apóstrofos, las secuencias de escape y los comentarios.
(Este programa es difícil si se hace completamente general.)
*/


int main() {
    int len, chars, i, dato;

    while((len = getLine()) != 0) {
        if ((line[0] == '\t' || line[0] == '\n' || line[0] == ' ') && len == 1) {
            printf("\n");
            continue;
        } else {
            dato = voidLine(line);
            if (dato == 1) {
                if (len > NUMCOLUMN) {
                    doubleLine(); 
                    for (int j = 0; j < MAXLINE / NUMCOLUMN ; i++) {
                        printf("%s", lines[j]);
                        j++;
                    }
                } else {
                    printf("%s", newLine);
                
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

void doubleLine() {
    int numFinish;
    
    int i = 0;
    numFinish = 0;
    for(int j = 0; j < MAXLINE/NUMCOLUMN; j++) {
        resetLine(lines[j]);
    }

    for(int j = 0; j < MAXLINE/NUMCOLUMN; j++) {
        i = 0;
        while(i < NUMCOLUMN) {
            lines[j][i] = newLine[numFinish];
            i++;
            numFinish++;
        }
        lines[j][i] = '\n';
    }
}


int revisarParentesis() {

}


int revisarLlaves() {

}


int revisarCorchetes() {

}