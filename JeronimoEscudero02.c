/*
- Fecha de publicación: 2023-03-09
- Hora: 2:30 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100
- Salvedad: Este programa no admite ingreso de datos
*/

#include <stdio.h>

//Se crea la función SerieDeFibonacci con tres parámetros de tipo entero (primerValor, segundoValor y sumaDeTerminos) que imprime la serie de Fibonacci menores a 100 y su suma
int SerieDeFibonacci( int primerValor, int segundoValor, int sumaDeTerminos )
{
    printf( "%i", primerValor );
    
    if ( segundoValor < 100 ){
        printf( ", " );
        SerieDeFibonacci( segundoValor, ( primerValor + segundoValor ), ( sumaDeTerminos + primerValor ) );
    }//de lo contrario
    else{
         printf ( " y su suma es: %i", ( sumaDeTerminos + primerValor ) );
    }//fin del if
    
    return 0;
}

int main()
{
    printf( "Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100. \nLos números a sumar son:\n" );
    //Se llama la función SerieDeFibonacci con 0 y 1 como valores iniciales de la serie y 0 como valor inicial de la suma
    SerieDeFibonacci( 0, 1, 0 );

    return 0;
}
