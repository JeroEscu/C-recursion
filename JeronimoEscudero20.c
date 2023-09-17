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
                                                                               A
                                                                              AA
                                                                             AAA
                                                                            AAAA
                                                                           AAAAA
                                                                          AAAAAA
                                                                          ...
                                                    
*/

#include <stdio.h>

//Se crea la función ImprimirA que imprime la letra A recursivamente
int ImprimirA( int inicioA, int finalA )
{
    if( inicioA <= finalA ){
        printf( "A" );
        ImprimirA( inicioA + 1, finalA );
    }//fin del if

    return 0;
}

//Se crea la función ImprimirEspacios que imprime espacios recursivamente
int ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    if( inicioEspacios <= finalEspacios ){
        printf( " " );
        ImprimirEspacios( inicioEspacios + 1, finalEspacios );
    }//fin del if

    return 0;
}

//Se crea la función ImprimirSecuencia que imprime recursivamente el diseño
int ImprimirSecuencia( int fila )
{
    if( fila <= 25 ) {
        ImprimirEspacios( 1, 79 - fila + 1 );
        ImprimirA( 1, fila );
        printf( "\n" );
        ImprimirSecuencia( fila + 1 );
    }//fin del if

    return 0;
}

int main(){
    //Se realiza el llamado de la función ImprimirSecuencia con el valor inicial de 1
    ImprimirSecuencia( 1 );
    return 0;
}
