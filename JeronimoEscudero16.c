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

- El siguiente programa lee un número entero positivo e imprime la suma de todos los factoriales desde 0 hasta el número ingresado
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función Factorial con un parámetro de tipo entero largo (numero) que calcula el factorial de un número
long long int Factorial( long long int numero )
{
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}

//Se crea la función SumaFactoriales con tres parámetros de tipo entero (inicio, final) y entero largo (acumulado) que calcula la suma de los factoriales de todos los números desde 0 hasta el número ingresado
long long int SumaFactoriales( int inicio, int final, long long int acumulado )
{
    if( inicio < final ){
        printf( "%lli + ", Factorial( inicio ) );
        ( SumaFactoriales( ( inicio + 1 ), final, ( acumulado + Factorial( inicio ) ) ) );
    }//de lo contrario
    else{
        printf( "%lli = %lli", Factorial( inicio ), ( acumulado + Factorial( inicio ) ) );
    }//fin del if
}

//se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   //se verifica si el numero es entero positivo
    if ( numero < 0 ) {
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//Se le asigna a la variable numero el nuevo valor ingresado por el usuario
        //Se realiza el llamado recursivo de la función ValidarNumero en caso de que este no sea entero positivo
        ValidarNumero( numero );
    }//de lo contrario
    else {
        //Se realiza el llamado de la función SumaFactoriales
        SumaFactoriales( 0, numero, 0 );
    }//fin del if
    
}

int main()
{
    int numero = 0; //Se inicializa la variable numero de tipo entero para almacenar el número que ingrese el usuario

    printf( "El siguiente programa lee un número entero, no negativo y muestra la suma de los\nfactoriales de todos los números desde 0 hasta el numero ingresado.\nIngrese por favor el numero: " );
    scanf( "%i", &numero );
    //Se llama a la función ValidarNumero para verificar si el numero es entero positivo
    ValidarNumero( numero );

    return 0;
}
