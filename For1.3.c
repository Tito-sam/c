#include <stdio.h>
/*
    Esta vez vamos a escribir el codigo anterior de otra manera,
    esto se da muchas veces, en donde se pueden realizar de diferentes
    maneras los problemas propuestos, esto depende de cada persona.
*/
int main() {
    // En este caso solo se necesita una variable, la de los fahrenheit
    int fahr;
    /*
        El for es un tipo de ciclo tambien, al igual de el while, pero es 
        diferente, ya que su estructura cambia totalmente, aunque la 
        logica sea la misma. 
        Su estructura es la siguiente:
        for(asignacion iterador; Condicion; aumento o iteracion){
            Bloque de codigo
        }
        La funcion principal es realizar lo que esta dentro del bloque
        de codigo, la cantidad de veces que se dan dependiendo del aumento
        y de la condicion, ya que normalmente es un aumento o disminucion 
        de un valor entero, y casi siempre es una condicion de numeros.
        el iterador es ese elemento que va a describir la cantidad de veces que 
        entra al ciclo en relacion a la iteracion y la condicion.
        Lo principal de este ciclo es que toca decir desde el inicio cuanto va 
        durar y como va a ser, o como se dice normalmente, icicializar el ciclo.
    */
    for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
        /*
            Aqui estamos aplicando lo que se explico en el subcapitulo anterior,
            utilizando la toma de datos con el %, utilizando el tipo int (d) y
            float (f), en este caso tambien se ve que se pueden poner expresiones
            aritmeticas, sin tener que asignarla a una variable.
        */
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
};