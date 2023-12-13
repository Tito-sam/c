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

        Ahora se realizo un cambio, los datos referentes a los grados 
        se volvieron de tipo flotante, para tener mas exactitud en los resultados


    */
    float fahr, cels;
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

            Aqui se cambio la formula, ahora se utiliza mas natural, ya que si 
            se pone una constante con .0, se da a entender que es tipo 
            flotante, y no lo pondria como entero, que era lo que pasaba antes
            y por eso lo aproximaba, entonces tocaba ponerlo de otra manera.
        */
        cels = (5.0/9.0)*(fahr-32.0);
        /*
            Aqui se demuestra una de las funcionalidades de printf()
            La funcion principal es dar salida a pantalla o consola
            sobre informacion de diferentes formas u formatos.
            Por ejemplo, en este caso se pone %d, que es para dar salida
            a elementos tipo entero, por lo que se ponen dos, para mostrar
            los fahr y los cels, y ademas, se encuentra \t entre ellos que, 
            al igual que el \n, sirve para realizar movimientos dentro de la consola,
            y en este caso, es para hacer una tabulacion.

            El % da el formato, y se relaciona con el argumento dado, si hay varios
            se van dando de manera secuencial, el primero con el primer dato, el segundo con
            el segundo dato y asi sucesivamente. Eso si, tienen que ser el dato y tipo 
            correto al que se esta relacionando, o si no fallara.
            Por ahora esto es lo importante, mas adelante se profundizara en el tema.

            Ahora se cambio el %d por %f, eso hace que tome datos flotantes, y los numeros que 
            se ponen hacen referencia a la cantidad de digitos que puede mostrar, si es decimal 
            y trae numero que no sea 0, se mostraran ese numero de decimales del dato.
        */
        printf("%3.0f\t%6.1f\n", fahr, cels);
        /*
            Este paso es para ir aumentando los grados del fahrenheit, con el paso
            establecido, por eso dice, que a fahr se le sume el paso, y se vuelva a 
            guardar en la variable fahr. y que se vaya modificando para en algun punto
            terminar el ciclo.
        */
        fahr = fahr + step;
    }

}