#include <stdio.h>

/*
    Verifique que la expresión getchar ( ) != EOF es 0 o 1
*/
int main() {
    int c;
    c = getchar() != EOF;
    printf("%d",c);
}