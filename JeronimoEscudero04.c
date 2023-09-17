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

- El siguiente programa presenta la serie de Pell (P(n) = 2P(n-1) + P(n-2), donde P(0) = 0 y P(1) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función SerieDePell con cuatro parámetros de tipo entero (primerNumero, segundoNumero, contador y terminosTotales) que imprime los terminos de la serie que indique el usuario
int SerieDePell( int primerNumero, int segundoNumero, int contador, int terminosTotales )
{
    printf( "%i", primerNumero );
    
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDePell( segundoNumero, ( primerNumero + ( segundoNumero * 2 ) ), ( contador + 1 ), terminosTotales );
    }//fin del if

    return 0;
    
}

int main(){

    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Este programa imprime la serie de Pell: Esta serie comienza con los números 0 y 1, y los siguientes términos se\ncalculan como 2 veces el término anterior más el término anterior al anterior. La fórmula para el enésimo\nnúmero de Pell es P(n) = 2P(n-1) + P(n-2), donde P(0) = 0 y P(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Pell son: ", cantidadDeTerminos );
    //Se llama la función SerieDePell con 0 y 1 como valores iniciales de la serie, 1 como valor inicial del contador y la cantidad de términos que desea el usuario
    SerieDePell( 0, 1, 1, cantidadDeTerminos );

    return 0;
}
