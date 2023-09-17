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

- El siguiente programa genera las siguientes ternas de enteros:
1 1 1
2 1 2
3 1 3
4 2 1
5 2 2
6 2 3
7 3 1
8 3 2
9 3 3
*/

#include <stdio.h>

//Se crea la función Ternas con tres parámetros de tipo entero (fila1, fila2, fila3) que genera las ternas de enteros
int Ternas( int fila1, int fila2, int fila3 )
{   
    if( fila1 <= 9 ){
        if ( ( fila1 % 3 ) == 0 ){ 
            printf( "%i %i %i\n", fila1, fila2, fila3 );
            Ternas( ( fila1 + 1 ), ( fila2 + 1 ), 1 );
        }//de lo contrario
        else{
            printf( "%i %i %i\n", fila1, fila2, fila3 );
            Ternas( ( fila1 + 1 ), fila2, ( fila3 + 1 ) );
        }//fin del if 2
    }//fin del if 1
}

int  main()
{
    printf( "Ternas: \n" );
    //Se llama a la función Ternas con los valores iniciales de las Ternas 1, 1 y 1 como parámetros para iniciar la primera terna
    Ternas( 1, 1, 1 );

    return 0;
}
