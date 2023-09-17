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

- El siguiente programa imprime las tablas de multiplicar del 1 al 10.
*/

#include <stdio.h>

//Se crea la función TablasMultiplicar con dos parámetros de tipo entero (filas y columnas) que imprime las tablas de multiplicar del 1 al 10
int TablasMultiplicar( int filas, int columnas )
{
    if( filas <= 10 ){

        if ( columnas <= 10 ){
            printf( "%i x %i = %i\n", filas, columnas, filas*columnas );
            TablasMultiplicar( filas, columnas + 1 );
        }
        else{
            printf( "\n" );
            TablasMultiplicar( filas + 1, 1 );
        }//fin del if 2

    }//fin del if 1

    return 0;
}

int main()
{
    printf( "Tablas de multiplicar: \n" );
    //Se llama la función TablasMultiplicar con 1 y 1 como valores iniciales de las filas y columnas
    TablasMultiplicar( 1, 1 );

    return 0;
}
