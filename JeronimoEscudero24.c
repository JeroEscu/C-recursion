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
                           A     A
                           AA   AA
                           AAA AAA
                           AAAAAAA
                           AAA AAA
                           AA   AA
                           A     A
*/

#include <stdio.h>

//Se crea la funcion ImprimirA con dos parámetros de tipo entero (inicio y final) para imprimir la letra A recursivamente
int ImprimirA( int inicio, int final )
{
    if ( inicio <= final ){
        printf( "A" );
        ImprimirA( ( inicio + 1 ), final );
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

//Se crea la función SaltoDeLinea que imprime un salto de linea
int SaltoDeLinea()
{
    printf( "\n" );
    return 0;
}

//Se crea la función ImprimirSecuencia con cinco parámetros de tipo entero (fila, contador, final, cantidadEspacios) para imprimir recursivamente el diseño
int ImprimirSecuencia( int fila, int contador, int final, int cantidadEspacios )
{
    if ( fila <= 3 ){ //3 primeras columnas
        ImprimirEspacios( 1, 27 );
        ImprimirA( contador, final );
        ImprimirEspacios( contador, cantidadEspacios );
        ImprimirA( contador, final );
        SaltoDeLinea();
        ImprimirSecuencia( ( fila + 1 ), contador, ( final + 1 ), ( cantidadEspacios - 2 ) );
    }//de lo contrario
    else if ( fila <= 4 ){//Columna 4
        ImprimirEspacios( 1, 27 );
        ImprimirA( 1, 7 );
        SaltoDeLinea();
        ImprimirSecuencia( ( fila + 1 ), contador, ( final - 1 ), ( cantidadEspacios + 2 ) );
    }//de lo contrario
    else if( fila <= 7 ){//3 ultimas columnas
        ImprimirEspacios( 1, 27 );
        ImprimirA( contador, final );
        ImprimirEspacios( contador, cantidadEspacios );
        ImprimirA( contador, final );
        SaltoDeLinea();
        ImprimirSecuencia( ( fila + 1 ), contador, ( final - 1 ), ( cantidadEspacios + 2 ) );
    }//fin del if

    return 0;
}

int  main()
{
    //Se llama a la función ImprimirSecuencia con los valores iniciales de la fila = 1, el contador = 1, el final = 1 y la cantidad de espacios = 5
    ImprimirSecuencia( 1, 1, 1, 5 );
    return 0;
}
