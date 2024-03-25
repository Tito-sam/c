#include <stdio.h>
/*
    Lo siguiente que veremos sera la forma de crear funciones, que son 
    bloques de codigo que se identifican con una palabra en especifico, como
    por elemplo lo son el prinf() o el putchar(), que son funciones dadas 
    por la libreria estandar de c, que tienen una finalidad.
*/

/*
    Aqui se puede observar como se define una funcion, es como declarar una variable,
    No tiene nada para hacer todavia, pero se crea con la siguiente forma:
        Tipo-retorno NombreFuncion (Parametros si tiene);

        Tipo-retorno hace referencia al tipo de dato que va a devolver, en el caso de 
        power, es int ya que la funcion devolvera un dato numerico entero.

        NombreFuncion hace referencia al nombre o identificador de la funcion.

        Parametros hace referencia a los datos que necesita y se les dara para que 
        pueda funcionar. 
*/
int power(int m, int n);

int main() {
    int i;

    for(i = 0; i < 10; ++i) {
        /*
            En este caso, podemos ver como se utiliza power en la funcion principal.
            Cuando se le da un valor a una funcion, estos son conocidos como argumentos,
            y hacen referencia a los parametros que se le asignaron al momento de crear la funcion 
        */
        printf("%d %d %d\n", i , power(2,i), power(-3,i));
    }
    return 0;
};
/*
    Aqui podemos observar como se crea una funcion, o como se le agrega la funcionalidad que va a tener,
    En este caso, tomara dos parametros, uno es la base, y el otro es la potencia, y generara una forma 
    funcion en donde retornara el valor de esa base elevada a la potencia dada.
    Al final de la funcion se encuentra el return, este hace referencia al dato que retornara o devolvera
    la funcion luego de ser ejecutada.
*/
int power(int base, int n) {
    /*
        Para generar la funcionalidad, se utiliza un iterador y una variable p que hace referencia a el
        el valor de retorno en cada potencia.
        Para generar la potencia se utiliza un ciclo for, en donde dura n veces, y en cada una, va a 
        multiplicar por la base la p.
    */
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
};