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

- El siguiente programa presenta la serie de Catalán (C(n) = (2n)! / (n!(n+1)!), donde C(0) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función Factorial con un parámetro de tipo entero largo (debido a los números tan grandes que se manejan en el factorial) que se encarga de hacer el factorial de un número
long long int Factorial( long long int numero )
{
    if( numero == 0 ){
        return 1;
    }//de lo contrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}

//Se crea la función Catalan con un parámetro de tipo entero (numero) que se encarga de calcular el enésimo número de Catalan
int Catalan( int numero )
{
    return( Factorial( ( numero * 2 ) ) / ( ( Factorial( numero ) * Factorial( ( numero + 1 ) ) ) ) );
}

//Se crea la función SerieCatalan con dos parámetros de tipo entero (contador y terminosTotales) que imprime los terminos de la serie que indique el usuario
int SerieCatalan( int contador, int terminosTotales )
{   
    printf( "%i", Catalan( contador ) );
    
    if( contador < terminosTotales - 1 ){ //Se debe restar 1 a terminosTotales debido a que empezamos la serie con n=0
        printf( ", " );
        SerieCatalan ( ( contador + 1 ), terminosTotales );
    }//fin del if
}

int main(){

    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos de tipo entero para almacenar el número de términos que desea el usuario
    
    printf( "Este programa presenta la Serie de Catalán: Esta serie es una secuencia de números que\naparece en diversos problemas de conteo en matemáticas. Comienza con los números 1, 1\ny los siguientes términos se calculan como la suma de los productos de los términos\nanteriores. La fórmula para el enésimo número de Catalán es:\nC(n) = (2n)! / (n!(n+1)!), donde C(0) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Catalán son: ", cantidadDeTerminos );
    //Se llama la función SerieCatalan con 0 como valor inicial del contador y la cantidad de términos que desea el usuario
    SerieCatalan( 0, cantidadDeTerminos );

    return 0;
}
