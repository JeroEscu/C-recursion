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

- El siguiente programa lee un número entero positivo e imprime su factorial
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

//Se crea la función ValidarNumero con un parámetro de tipo entero (numero) que valida que el número ingresado por el usuario sea entero positivo
int ValidarNumero( int numero )
{   
    if ( numero < 0 ){
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//Se le asigna a la variable numero el nuevo valor ingresado por el usuario
        //Se realiza el llamado recursivo de la función ValidarNumero en caso de que este no sea entero positivo
        ValidarNumero( numero );
    }//de lo contrario
    else{
        printf( "El factorial de %i es: %lli", numero, Factorial( numero ) );
    }//fin del if

    return 0;
}

int main()
{
    int numero = 0; //Se inicializa la variable numero de tipo entero para almacenar el número que ingrese el usuario

    printf( "El siguiente programa lee un número entero positivo e imprime su factorial, siendo:\nN! = 1 x 2 x 3 x 4 x ... N\nN! = 1 si N = 0\nIngrese por favor el numero: " );
    scanf( "%i", &numero );
    //Se realiza el llamado de la función ValidarNumero
    ValidarNumero( numero );

    return 0;
}
