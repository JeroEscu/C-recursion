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

- El siguiente programa presenta la serie de Narayana (N(n) = N(n-1) + N(n-3), donde N(0) = 1, N(1) = 1 y N(2) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función SerieDeNarayana con cinco parámetros de tipo entero (primerNumero, segundoNumero, tercerNumero, contador y terminosTotales) que imprime los terminos de la serie que indique el usuario
int SerieDeNarayana( int primerNumero, int segundoNumero, int tercerNumero, int contador, int terminosTotales )
{
    printf( "%i", primerNumero );
    
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDeNarayana( segundoNumero, tercerNumero, ( primerNumero + tercerNumero ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main()
{
    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Esta serie comienza con los números 1, 1 y 1. Los siguientes términos\nse calculan como la suma del término anterior y el número de parejas de términos consecutivos anteriores\nque son diferentes. La fórmula para el enésimo número de Narayana es N(n) = N(n-1) + N(n-3), donde\nN(0) = 1, N(1) = 1 y N(2) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Narayana son: ", cantidadDeTerminos );
    //Se llama la función SerieDeNarayana con 1, 1 y 1 como valores iniciales de la serie, 1 como valor inicial del contador y la cantidad de términos que desea el usuario
    SerieDeNarayana( 1, 1, 1, 1, cantidadDeTerminos );

    return 0;
}
