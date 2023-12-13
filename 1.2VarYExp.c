#include <stdio.h>
/*
    El programa a realizar utiliza la formula de Cº = (5/9)*(Fº-32)
    Para pasar de Fahrenheit a Celsius.
    Comenzando des de 0 hasta 300 con un paso de 20
*/

int main()  {
    /* 
        Las variables son lugares de espacio de memoria, en donde se
        almacenan valores que se les asignan.
        Se pueden pensar como cajas ubicadas en una habitacion que
        tienen algo por dentro.
        
        Esta es la parte de inicializacion de variables;
        Es la parte donde se declaran las variables que se van a utilizar, y 
        se tienen declarar antes de utilizarlas, y normalmente se hace
        al inicio del programa, o en este caso, de la funcion main.

        
        Aqui se puede ver el tipo int, para declarar una variable 
        se tiene que especificar su tipo y el nombre que va a tener, asi:
        tipo nombre;
        En este caso es tipo int o entero.

        Hay varios tipos, en C algunos son:
        Int  Datos enteros
        Float  Datos Flotantes o con comilla
        char Datos de caracteres
        short Datos enteros de poco tamaño
        long  Datos enteros de gran tamaño
        double  datos flotantes de doble precision

    */
    int fahr, cels;
    int lower, upper, step;

    /*
        Este es el apartado de asignacion de valores a las variables
        todas las lineas de codigo tienen que terminar con ;
        en este caso, se le asigna un valor a la variable de tipo numerico entero
        ya que este es el tipo de variable que se establecio.
    */
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    /*
        Este es un ciclo o sentencia de iteracion o repeticion,
        se realiza para ejecutar un bloque de codigo hasta que se cumpla algo.
        En este caso se dice que hasta que el valor de fahrenheit llegue al 
        limite superior, se va a ejecutar las 3 lineas de codigos que hay.

        En el while se tiene que tener en cuenta la condicion, porque si no cambia
        eventualmente, se volvera un ciclo infinito.
    */
    while(fahr <= upper) {
        /*
            Esta linea de codigo es la operacion dada al inicio
            Simplemente es una linea de codigo en donde se le asigna 
            a la variable cels el resultado de la operacion que se plantea.
            El orden de las operaciones es el mismo al aritmetico.
        */
        cels = 5 * (fahr - 32) / 9;
        /*
        
        */
        printf("%d\t%d\n", fahr, cels);
        fahr = fahr + step;
    }

}