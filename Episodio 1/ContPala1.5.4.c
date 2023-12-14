#include <stdio.h>

#define IN 1
#define OUT 0
/*
    Cuenta lineas, palabras y caracteres de la entrada
*/
int main() {
    /*
        En este caso, se utiliza, un contador para cada cosa mencionada
        anteriormente, y un state, que funciona para validar si esta o
        no enta el progrmama en una palabra.
    */    
    int c, nl, nw, nc, state;

    /*
        State se inicializa, en OUT, que es una constante simbolica creada, que 
        tiene como valor 0, tambien esta IN, que vale 1. Estos dos representan 
        cada condicion, OUT o 0 si no esta en una palabra, In o 1 si sí esta.
    */
    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;
        /*
            En este punto, el if valida si hay un espacio en blanco, un salto de linea
            o una tabulacion, ya que esto validaria que despues del caracter inicial, 
            no hay nada mas, por lo que por consiguiente al state le da el valor de OUT.
            Aqui se utilizo un nuevo operador, es un operador relacional, se conoce como OR
            y se escribe o representa el C como ||, este compara dos condiciones, y valida si
            alguna de las dos es verdadera, si esto es así, dara como verdadero el resultado.
        */
        if (c == ' ' || c == '\n' || c == '\t') state = OUT;
        /*
            Aqui, se utiliza el else if, el cual entra si el if anterior no es verdadero,
            y valida si la condicion actual es cierta para entrar, si no, el if tiene una
            estructura, en donde se puede poner un else, que representa, si todo lo anterior
            no funciona, realizara lo que haya dentro de el; Pero si no hay else, solo saltara
            el codigo y no lo ejecutara.

            En este caso, el else if, valida si anteriormente no habia palabras, con el state,
            si esto es verdad, querra decir que lo que se esta validando es una nueva palabra.
        */
        else if(state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}