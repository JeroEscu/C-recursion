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
         Z
        ZZZ
       ZZZZZ
      ZZZZZZZ
       ZZZZZ
        ZZZ
         Z
*/

#include <stdio.h>

//Se crea la función ImprimirEspacio que imprime espacios recursivamente
int ImprimirEspacio( int contador )
{
    if( contador > 0 )
    {
        printf( " " );
        ImprimirEspacio( contador - 1 );
    }

    return 0;
}

//Se crea la función ImprimirZ que imprime la letra Z
int ImprimirZ( int contador )
{
    if( contador > 0 )
    {
        printf( "Z" );
        ImprimirZ( contador - 1 );
    }

    return 0;
}

//Se crea la función ImprimirSaltoDeLinea que imprime un salto de linea
int ImprimirSaltoDeLinea()
{
    printf( "\n" );
    return 0;
}

//Se crea la función ImprimirEfecto que imprime recursivamente el efecto de la letra Z
int ImprimirEfecto( int contador, int espacioInicial, int zInicial, int espacioFinal, int zFinal )
{
    if( contador >= 4 ){
        ImprimirEspacio( espacioInicial );
        ImprimirZ( zInicial );
        ImprimirSaltoDeLinea();
        ImprimirEfecto( (contador - 1), ( espacioInicial - 1 ), ( zInicial + 2 ), espacioFinal, zFinal );
    }
    else if( contador > 0 ){
        ImprimirEspacio( espacioFinal );
        ImprimirZ( zFinal );
        ImprimirSaltoDeLinea();
        ImprimirEfecto( (contador - 1), espacioInicial, zInicial, ( espacioFinal + 1 ), ( zFinal - 2 ) );
    }
}

int main()
{
    //Se llama a la función ImprimirEfecto con los valores iniciales
    ImprimirEfecto( 7, 9, 1, 7, 5 );
    return 0;
}