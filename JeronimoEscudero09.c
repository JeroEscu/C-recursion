/* 
- Fecha de publicación: 2023-03-09
- Hora: 2:30 p.m

- Versión de su código: 1.1
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa presenta la serie de Bell sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado, ademas se realizó un cambio en la formula mostrada en el contrato, en su lugar se utilizo la siguiente formula: B(termino de la serie) = 1/e * sumatoria desde k=0 de k^n / k! ( entre el numero final de la sumatoria sea mayor, mas aproximado estara el termino resultante)
*/

#include <stdio.h>
#include <math.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un numero
float Factorial( float numero )
{
    if( numero == 0 ){
        return 1;
    }//de lo contrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}

//Se crea la función SumatoriaDeBell con dos parámetros de tipo flotante (k, n) que realiza la sumatoria necesaria para hallar cada termino de la serie de Bell
float SumatoriaDeBell( float k, float n )
{
    if( k == 1 ){
        return 1;
    }//de lo contrario
    else{
        return ( ( pow( k, n ) / Factorial( k ) ) + SumatoriaDeBell( ( k - 1 ), n ) );
    }//fin del if
}

//Se crea la función SerieDeBell con dos parámetros de tipo entero (termino y terminosTotales) que imprime la cantidad de terminos ingresados por el usuario
int SerieDeBell( int termino, int terminosTotales )
{
    //Se imprime el resultado de la sumatoria del termino multiplicado por 1/e 
    printf( "%.0lf", round( SumatoriaDeBell( 100, termino ) * ( 1 / 2.718281828459045235 ) ) );

    if( termino < terminosTotales - 1 ){ //Se debe restar 1 a terminosTotales debido a que empezamos la serie con n=0
        printf( ", " );
        SerieDeBell( ( termino + 1 ), terminosTotales );
    }//fin del if

    return 0;
    
}

int main(){

    int cantidadDeTerminos = 0; //Se inicializa la variable cantidadDeTerminos, que indica el numero de terminos que desea ver el usuario
    
    printf( "Este programa presenta la Serie de Bell: Esta serie comienza con los números 1 y 1.\nLos siguientes términos se calculan como la suma de los términos anteriores multiplicados\npor los números naturales consecutivos. La fórmula para el enésimo número de Padovan es:\nB(n) = 1/e * sumatoria desde k=0 de k^n / k!, donde k = termino de la sumatoria,\nentre mas numeros se usen en la sumatoria mas preciso sera el numero resultante." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//Se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Bell son: ", cantidadDeTerminos );
    SerieDeBell( 0, cantidadDeTerminos );//Se llama a la función SerieDeBell con los valores iniciales de la serie, 0 para iniciar el contador y cantidadDeTerminos como parámetros

    return 0;
}
