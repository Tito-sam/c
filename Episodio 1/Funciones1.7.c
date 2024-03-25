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
        */
        printf("%d %d %d\n", i , power(2,i), power(-3,i));
    }
    return 0;
};

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = i; i <= n; ++i) {
        p = p * base;
        return p;
    }
};