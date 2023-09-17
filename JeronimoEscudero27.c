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
        Z Z
       Z   Z
      Z     Z
     Z       Z
    Z         Z
   Z           Z
  Z             Z
 Z               Z
Z                 Z
*/

#include <stdio.h>

//Se crea la función ImprimirZ que imprime la letra Z 
int ImprimirZ( ) 
{
    printf( "Z" );
    return 0;
}

//Se crea la función ImprimirEspacio que imprime espacios recursivamente
int ImprimirEspacio( int inicio, int final ) 
{
    if ( inicio <= final ) {
        printf( " " );
        ImprimirEspacio( inicio + 1, final );
    }//fin del if

    return 0;
}

//Se crea la función SaltoDeLinea que imprime un salto de linea
int SaltoDeLinea() 
{
    printf( "\n" );
    return 0;
}

//Se crea la función ImprimirSecuencia que imprime recursivamente el diseño
int ImprimirSecuencia( int fila, int espacioInicial, int espacioMedio ) 
{
    if ( fila <= 10 ) {
        ImprimirEspacio( 1, espacioInicial );
        ImprimirZ();
        ImprimirEspacio( 1, espacioMedio);

        if ( fila != 1 ){
            ImprimirZ();
        }

        SaltoDeLinea();
        ImprimirSecuencia( fila + 1, espacioInicial - 1, espacioMedio + 2 );
    }//fin del if

    return 0;
}

int main() 
{
    //Se llama a la función ImprimirSecuencia con los valores iniciales de la fila = 1, el inicioEspacio = 1, el espacioInicial = 17 y el espacioInicial = 0
    ImprimirSecuencia( 1, 9, -1 );
    return 0;
}
