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

- El siguiente programa presenta la serie de Motzkin (M(n) = (3(n-1) * M(n-2) + (2n + 1) * M(n-1) ) / n + 2, donde M(0) =1 y M(1) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función SerieDeMotzkin con cuatro parámetros de tipo entero (primerNumero, segundoNumero, n y numeroDeTerminos) que imprime los terminos de la serie que indique el usuario
int SerieDeMotzkin( int primerNumero, int segundoNumero, int n, int numeroDeTerminos )
{
    printf( "%i", primerNumero );
    
    if( n <= numeroDeTerminos ){
        printf( ", " );
        SerieDeMotzkin( segundoNumero, ( ( ( ( 3 * ( n - 1 )  ) * primerNumero ) + ( ( ( 2 * n ) + 1 ) * segundoNumero ) ) / ( n + 2 ) ), ( n + 1 ), numeroDeTerminos );
    }//fin del if

    return 0;
    
}

int main()
{
    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Esta serie cuenta el número de caminos no cruzados de longitud n en\nuna retícula tridimensional. Comienza con los números 1, 1 y los siguientes términos se calculan como la\nsuma de los términos anteriores y la suma de los términos anteriores menos el tercer término anterior. La\nfórmula para el enésimo número de Motzkin es M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) =1 y M(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Motzkin son: ", cantidadDeTerminos );
    //Se llama la función SerieDeMotzkin con 1 y 1 como valores iniciales de la serie, 2 como valor inicial de n (debido a que se requieren los valores de M(n-1) y M(n-2)) y la cantidad de términos que desea el usuario 
    SerieDeMotzkin( 1, 1, 2, cantidadDeTerminos );

    return 0;
}