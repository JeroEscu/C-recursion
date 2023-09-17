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

- El siguiente programa presenta la serie Triangular hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función SerieTriangular con cuatro parámetros de tipo entero (primerNumero, segundoNumero, contador y terminosTotales) que imprime los terminos de la serie que indique el usuario
int SerieTriangular( int primerNumero, int segundoNumero, int contador, int terminosTotales )
{
    printf( "%i", primerNumero );
    
    if( contador < terminosTotales ){
        printf( ", " );
        SerieTriangular( segundoNumero, ( ( segundoNumero - primerNumero ) + ( segundoNumero + 1 ) ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main()
{
    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Este programa imprime la serie de Triangular: Esta serie cuenta el número de puntos en una retícula triangular de\nlado n. Comienza con el número 1 y los siguientes términos se calculan como la suma de los términos\nanteriores y el número de puntos en la diagonal de la retícula de lado n-1. La fórmula para el enésimo\nnúmero de la serie triangular es T(n) = T(n-1) + (n-1)T(n-2), donde T(0) = 1." );
    printf( "\nIngrese la cantidad de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Triangular son: ", cantidadDeTerminos );
    //Se llama la función SerieTriangular con 1 y 3 como valores iniciales de la serie, 1 como valor inicial del contador y la cantidad de términos que desea el usuario
    SerieTriangular( 1, 3, 1, cantidadDeTerminos );

    return 0;
}
