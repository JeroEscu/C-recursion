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

- El siguiente programa lee desde el teclado un número entero y lo imprime al revés.
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>
#include <math.h>

//Se crea la función InvertirNumeros con un parámetro de tipo entero (numero) que imprime el número ingresado por el usuario al revés
int InvertirNumeros( int numero )
{
    if( numero > 0 ){
        printf( "%i", ( numero % 10 ) );
        InvertirNumeros( floor( numero / 10 ) );
    }//fin del if
}

int main()
{
    int numero = 0; //Se inicializa la variable numero de tipo entero para almacenar el número que ingrese el usuario
    
    printf( "Este programa lee desde el teclado un número\nentero y lo imprime al revés.\nEntre el número: " );
    scanf( "%i", &numero );
    //Se llama la función InvertirNumeros con el número ingresado por el usuario como parámetro
    InvertirNumeros( numero );

    return 0;
}
