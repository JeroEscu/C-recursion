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

- El siguiente programa presenta la serie de Padovan (P(n) = P(n-2) + P(n-3), donde P(0) = 1, P(1) = 0 y P(2) = 0.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función SerieDePadovan con cuatro parámetros de tipo entero (primerNumero, segundoNumero, tercerNumero, contador y terminosTotales) que imprime los terminos de la serie que indique el usuario
int SerieDePadovan( int primerNumero, int segundoNumero, int tercerNumero, int contador, int terminosTotales )
{
    printf( "%i", primerNumero );
    
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDePadovan( segundoNumero, tercerNumero, ( primerNumero + segundoNumero ), ( contador + 1 ), terminosTotales );
    }//fin del if

    return 0;
    
}

int main(){

    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Este programa presenta la Serie de Padovan: Esta serie comienza con los números 1, 0 y 0.\nLos siguientes términos se calculan como la suma de los dos términos anteriores y el\ntercer término anterior. La fórmula para el enésimo número de Padovan es:\nP(n) = P(n-2) + P(n-3), donde P(0) = 1, P(1) = 0 y P(2) = 0." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Padovan son: ", cantidadDeTerminos );
    //Se llama la función SerieDePadovan con 1, 0 y 0 como valores iniciales de la serie, 1 como valor inicial del contador y la cantidad de términos que desea el usuario
    SerieDePadovan( 1, 0, 0, 1, cantidadDeTerminos );

    return 0;
}
