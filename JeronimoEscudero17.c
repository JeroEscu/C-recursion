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

- El siguiente programa genera las siguientes parejas de enteros:
0 1
1 1
2 2
3 2
4 3
5 3
6 4
7 4
8 5
9 5
*/

#include <stdio.h>

//Se crea la función ParejaEnteros con tres parámetros de tipo entero (fila1, fila2, contadorfila2) que genera las parejas de enteros
int ParejaEnteros( int fila1, int fila2, int contadorfila2 )
{
    if( fila1 <= 9 ){
        if ( contadorfila2 < 2 ){
            printf( "%i %i\n", fila1, fila2 );
            ParejaEnteros( fila1 + 1 , fila2 , contadorfila2 + 1 );
        }
        else{
            printf( "%i %i\n", fila1, fila2 );
            ParejaEnteros( fila1 + 1 , fila2 + 1 , contadorfila2 - 1 );
        }//fin del if 2
    }//fin del if 1

    return 0;
}

int  main()
{
    printf( "Parejas de enteros: \n" );
    //Se realiza el llamado de la función ParejaEnteros
    ParejaEnteros( 0, 1, 1 );

    return 0;
}
