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

- El siguiente programa imprime la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000
*/

#include <stdio.h>

//Se crea la función SerieDeFibonacci con dos parámetros de tipo entero (primerValor y segundoValor) que imprime la serie de Fibonacci menores a 10,000
int SerieDeFibonacci( int primerValor, int segundoValor )
{
    printf( "%i", primerValor );
    
    if ( segundoValor < 10000 ){
        printf( ", " );
        SerieDeFibonacci( segundoValor, ( primerValor + segundoValor ) );
    }//fin del if
    
    return 0;
}

int main()
{
    printf( "Este programa presenta la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va\nsumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34.......\nPara este programa, se presentará la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n" );
    //Se llama la función SerieDeFibonacci con 0 y 1 como valores iniciales de la serie
    SerieDeFibonacci( 0, 1 );

    return 0;
}