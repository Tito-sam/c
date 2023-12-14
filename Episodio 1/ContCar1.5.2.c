#include <stdio.h>
/*
    El siguiente programa contara caracteres y es parecido al 
    programa anterior
*/
int main() {
    /*
        En este caso, nc es de tipo long porque el int tiene un tamaño de 16 bit,
        lo que genera que solo pueda almacenar un valor maximo de 32767. Y los
        long son por lo menos de 32 bits.
    */
    long nc;

    nc = 0;
    while(getchar() != EOF) {
        /*
            Aqui vemos una nueva proposicion, el ++, significa un incremento
            de uno, es lo mismo que nc = nc + 1, pero es mas consizo el ++nc
            tambien esta el --, funciona igual pero para disminuir.
            Existen dos tipos, el prefijo (++nc), y el posfijo (nc++), que
            hacen en principio lo mismo, pero actuan en tiempos diferentes,
            eso se vera despues.
        */
        ++nc; 
    }
    printf("%ld\n",nc);

    /*
        Version de double y for
    */
    double nc2;
    /*
        Este es un for vacio, ya que en solo su iniciacion se realiza 
        la operacion necesaria de aumento.
    */
    for(nc2 = 0; getchar()!= EOF;++nc2) {;}
    // en este caso %f sirve tanto para float como para double
    // y como es double, se pone .0 de decimal
    printf("%.0f\n",nc2);

}