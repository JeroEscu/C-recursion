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

-  El siguiente programa imprime en pantalla el siguiente diseño:
PPPPPPPPPPPPP
 NNNNNNNNNNN
  LLLLLLLLL
   JJJJJJJ
    HHHHH
     FFF
      D                                        
*/

#include <stdio.h>

//Se crea la función ImprimirLetras con dos parámetros de tipo entero (inicio y final) para imprimir las letras segun su codigo ASCII
int ImprimirLetras( int inicio, int final, int ascii )
{
    if ( inicio <= final ){
        printf( "%c", ( ascii - 2 ) );
        ImprimirLetras( ( inicio + 1 ), final, ascii );
    }//fin del if

    return 0;
}

//Se crea la función ImprimirLetras con dos parámetros de tipo entero (inicio y final) para imprimir los espacios al inicio de cada columna recursivamente
int ImprimirEspacios( int inicio, int final )
{
    if ( inicio <= final ){
        printf( " " );
        ImprimirEspacios( inicio, ( final - 1 ) );
    }//fin del if

    return 0;
}

//se crea la función ImprimirSecuencia con dos parámetros de tipo entero (fila y contador) para imprimir recursivamente el diseño 
int ImprimirSecuencia( int fila, int contador, int final, int cantidadLetras, int ascii )
{
    if ( fila <= 7 ){
        ImprimirEspacios( contador, final );
        ImprimirLetras( contador, cantidadLetras, ascii );
        printf( "\n" );
        ImprimirSecuencia( ( fila + 1 ), contador, ( final + 1 ), ( cantidadLetras - 2 ), ( ascii - 2 ) );
    }//fin del if

    return 0;
}

int  main()
{
    //Se llama a la función Imprimir con los valores iniciales de la fila = 1, el contador = 1, el final = 7, la cantidad de letras = 13 y el codigo ASCII de la letra = 82
    ImprimirSecuencia( 1, 1, 0, 13, 82 );
    return 0;
}
