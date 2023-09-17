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

- El siguiente programa genera la suma de la serie de Taylor para senh(x)
- Salvedad: El programa admite números enteros y de punto flotante, para valores fuera de este rango no garantizamos su resultado
*/

#include <stdio.h>
#include <math.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    if( numero == 0 ){
        return 1;
    }//de lo contrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if

}

//Se crea la función SerieSenoHiperbolico 
float SerieSenoHiperbolico( int n, float x )
{
    if( n == 0 ){
        return x;
    }//de lo contrario
    else{
        return ( ( pow( x, ( ( 2 * n ) + 1 ) ) ) / Factorial( ( ( 2 * n ) + 1 ) ) ) + SerieSenoHiperbolico( ( n - 1 ), x );
    }//fin del if

}

int main()
{
    float x = 0;//Se inicializa la variable x de tipo flotante en donde se almacenará el valor de x ingresado por el usuario
    int n = 0;//Se inicializa la variable n de tipo entero en donde se almacenará el número de términos de la serie

    printf( "Ingrese el valor de x: " );
    scanf( "%f", &x );
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );
    
    //Se llama a la función SerieSenoHiperbolico con los valores de n - 1 (debido a que la serie termina en n = 0) y x como parámetros
    printf( "El valor de senh(%f) es igual a: %f", x, SerieSenoHiperbolico( n - 1, x ) );
    
    return 0;
}
