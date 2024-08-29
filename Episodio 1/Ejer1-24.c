#include <stdio.h>
#define MAXLINE 100000
#define NUMCOLUMN 50



char line[MAXLINE];
char newLine[MAXLINE];
char lines[ MAXLINE/NUMCOLUMN][MAXLINE];
int Parentesis = 0;
int Llaves = 0;
int Corchetes = 0;
int comment = 0;


int voidLine(char l[]);
void doubleLine(void);
int getLine(void);
void resetLine(char l[]);
void revisarParentesis(void);
int contarPares(int ci, int cf);
void revisarLlaves(void);
void revisarCorchetes(void);
void deleteComments(void);

/*
Escriba un programa para revisar los errores de sintaxis rudimentarios 
de un programa en C, como paréntesis, llaves y corchetes no alineados. No
olvide las comillas ni los apóstrofos, las secuencias de escape y los comentarios.
(Este programa es difícil si se hace completamente general.)
*/


int main() {
    int len, chars, i, dato;

    while((len = getLine()) != 0) {
        dato = voidLine(line);
        if (dato == 1) {
            deleteComments();                
            if (len > NUMCOLUMN) {
                doubleLine(); 
                for (int j = 0; j < MAXLINE / NUMCOLUMN ; i++) {
                    printf("%s", lines[j]);
                    j++;
                }
            } else {
                printf("%s", newLine);        
            }
            revisarParentesis();
            revisarLlaves();
            revisarCorchetes();
        }
    }

    return 0;
}

int getLine() {
    int c,i;

    resetLine(line);
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF; ++i) {
        line[i] = c;
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

void deleteComments() {
    int i, j;
    i = 0;
    resetLine(newLine);
    j = 0;
    while(line[i] != '\0') {
        if (comment == 0) {
            if(line[i] == '/' && line[i+1] == '*') {
                comment = 1;
                i += 2;
                while (line[i] != '*' && line[i+1] != '/' && line[i] != '\0') {
                    i++;
                }
                if (line[i] == '*' && line[i+1] == '/') {
                    comment = 0;
                    i += 2;
                }
            }
            if (line[i] != '\0') {
                newLine[j] = line[i];
                i++;
                j++;
            } else {
                break;
            } 
        } else {
            while (line[i] != '*' && line[i+1] != '/' && line[i] != '\0') {
                i++;
            }
            if (line[i] == '*' && line[i+1] == '/') {
                comment = 0;
                i += 2;
            }
            if (line[i] != '\0') {
                newLine[j] = line[i];
                i++;
                j++;
            } else {
                break;
            } 
        }
    }
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

int contarPares(int ci, int cf) {
    int i, count = 0;
    i = 0;
    while (newLine[i] != '\0') {
        if (newLine[i] == ci) {
            count++;
        } else if (newLine[i] == cf) {
            count--;
        }
        i++;
    }
    return count;
}

void revisarParentesis() {
    Parentesis = contarPares('(', ')');
    if (Parentesis == 0) {
        printf("No hay Errores de Parentesis.\n");
    } else if (Parentesis >= 1) {
        printf("%d",Parentesis);
        printf("Hay Errores de Parentesis, en especifico hay %d '(' extra.\n", Parentesis);
    } else {
        printf("Hay Errores de Parentesis, en especifico hay %d ')' extra.\n", Parentesis*-1);
    }
}


void revisarLlaves() {
    Llaves = contarPares('[', ']');
    if (Llaves == 0) {
        printf("No hay Errores de Llaves.\n");
    } else if (Llaves >= 1) {
        printf("Hay Errores de llaves, en especifico hay %d '[' extra.\n", Llaves);
    } else {
        printf("Hay Errores de llaves, en especifico hay %d ']' extra.\n", Llaves*-1);
    }
}


void revisarCorchetes() {
    Corchetes = contarPares('{', '}');
    if (Corchetes == 0) {
        printf("No hay Errores de corchetes.\n");
    } else if (Corchetes >= 1) {
        printf("Hay Errores de corchetes, en especifico hay %d '{' extra.\n", Corchetes);
    } else {
        printf("Hay Errores de corchetes, en especifico hay %d '}' extra.\n", Corchetes*-1);
    }
}

