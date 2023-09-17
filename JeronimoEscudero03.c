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

- El siguiente programa presenta la serie de Lucas L(n) = L(n-1) + L(n-2), donde L(0) = 2 y L(1) = 1. hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función SerieDeLucas con cuatro parámetros de tipo entero (primerNumero, segundoNumero, contador y terminosTotales) que imprime los terminos de la serie que indique el usuario
int SerieDeLucas( int primerNumero, int segundoNumero, int contador, int terminosTotales )
{
    printf( "%i", primerNumero );
    
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDeLucas( segundoNumero, ( primerNumero + segundoNumero ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main(){

    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Este programa presenta la Serie de Lucas: Es similar a la serie de Fibonacci, pero comienza\ncon los números 2 y 1 en lugar de 0 y 1. Es decir, los dos primeros términos de la serie son\n2 y 1, y los siguientes términos se calculan como la suma de los dos términos anteriores.\nLa fórmula para el enésimo número de Lucas es:\nL(n) = L(n-1) + L(n-2), donde L(0) = 2 y L(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Lucas son: ", cantidadDeTerminos );
    //Se llama la función SerieDeLucas con 2 y 1 como valores iniciales de la serie, 1 como valor inicial del contador y la cantidad de términos que desea el usuario
    SerieDeLucas( 2, 1, 1, cantidadDeTerminos );

    return 0;
}
