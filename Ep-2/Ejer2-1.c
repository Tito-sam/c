#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
Escriba un programa para determinar los rangos de variables char, short, int y long, 
tanto signed como unsigned, imprimiendo los valores apropiados de los headers estándar 
y por cálculo directo. Es más difícil si los calcula: determine los rangos de los 
varios tipos de punto flotante.
*/

int main() {
    printf("Los Rangos de las variables son:\n");
    printf("Numero de bits en una variable char: %d\n" , CHAR_BIT);
    printf("Numero de valores minimos en una variable signed char: %d\n" , SCHAR_MIN);
    printf("Numero de valores maximos en una variable signed char: %d\n" , SCHAR_MAX);
    printf("Numero de valor minimo en una variable unsigned char: %d\n" , 0);
    printf("Numero de valores maximos en una variable unsigned char: %d\n" , UCHAR_MAX);
    printf("Numero de valores minimos en una variable signed short int: %d\n" , SHRT_MIN);
    printf("Numero de valores maximos en una variable signed short int: %d\n" , SHRT_MAX);
    printf("Numero de valor minimo en una variable unsigned short int: %d\n" , 0);
    printf("Numero de valores maximos en una variable unsigned short int: %d\n" , UCHAR_MAX);
    printf("Numero de valores minimos en una variable signed int: %d\n" , INT_MIN);
    printf("Numero de valores maximos en una variable signed int: %d\n" , INT_MAX);
    printf("Numero de valor minimo en una variable unsigned int: %d\n" , 0);
    printf("Numero de valores maximos en una variable unsigned int: %d\n" , UINT_MAX);
    printf("Numero de valores minimos en una variable signed long int: %ld\n" , LONG_MIN);
    printf("Numero de valores maximos en una variable signed long int: %ld\n" , LONG_MAX);
    printf("Numero de valor minimo en una variable unsigned long int: %d\n" , 0);
    printf("Numero de valores maximos en una variable unsigned long int: %ld\n" , ULONG_MAX);
    printf("Numero de valores minimos en una variable float: %f\n" , FLT_MIN);
    printf("Numero de valores maximos en una variable float: %f\n" , FLT_MAX);
    printf("Numero de valores minimos en una variable double: %lf\n" , DBL_MIN);
    printf("Numero de valores maximos en una variable double: %lf\n" , DBL_MAX);
    printf("Numero de valores minimos en una variable long double: %Lf\n" , LDBL_MIN);
    printf("Numero de valores maximos en una variable long double: %Lf\n" , LDBL_MAX);

}