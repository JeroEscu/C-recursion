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
 PPPPPPPPPPP
  PPPPPPPPP
   PPPPPPP
    PPPPP
     PPP
      P
*/

#include <stdio.h>

//Se crea la función ImprimirP con dos parámetros de tipo entero (inicio y final) para imprimir la letra P recursivamente
int ImprimirP( int inicioP, int finalP )
{
    if ( inicioP <= finalP ){
        printf( "P" );
        ImprimirP( ( inicioP + 1 ), finalP );
    }//fin del if

    return 0;
}

//Se crea la función ImprimirEspacios con dos parámetros de tipo entero (inicio y final) para imprimir los espacios al inicio de cada columna recursivamente
int ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    if ( inicioEspacios <= finalEspacios ){
        printf( " " );
        ImprimirEspacios( inicioEspacios, ( finalEspacios - 1 ) );
    }//fin del if

    return 0;
}

//Se crea la funcion Impesecuencia con cuatro parámetros de tipo entero (fila, contador, final y cantidadLetra) para imprimir recursivamente el diseño
int ImprimirSecuencia( int fila, int contador, int final, int cantidadLetra )
{
    if ( fila <= 7 ){
        ImprimirEspacios( contador, final );
        ImprimirP( contador, cantidadLetra );
        printf( "\n" );
        ImprimirSecuencia( ( fila + 1 ), contador, ( final + 1 ), ( cantidadLetra - 2 )  );
    }//fin del if

    return 0;
}

int main(){
    //Se llama a la función ImprimirSecuencia con los valores iniciales de la fila = 1, el contador = 1, el final = 0 y la cantidad de letras = 13
    ImprimirSecuencia( 1, 1, 0, 13 );
    return 0;
}
