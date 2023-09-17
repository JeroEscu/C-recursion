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

- El siguiente programa lee desde el teclado un grupo de 75 números, diferentes a cero e imprime: Cantidad de números Mayores a 150. Número mayor y número menor encontrado en el grupo. Cantidad de Números negativos encontrados. Promedio de los Positivos Encontrados.
- Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función LeerNumeros, que recibe como parámetros los contadores de cada requisito y lee los números ingresados recursivamente
int LeerNumeros( int contador, int numeroMayor, int numeroMenor, int negativos, int positivos, int sumaPositivos, int mayores150 )
{
    int numero = 0; //Se inicializa la variable numero de tipo entero para almacenar el número que ingrese el usuario

    if( contador < 75 ){

        printf( "Ingrese un número: " );
        scanf( "%i", &numero );

        if( numero == 0 ){
            printf( "\nEl número no puede ser cero.\n\n" );
            //Se realiza el llamado recursivo de la función LeerNumeros con los contadores iguales para repetir el ingreso del número
            LeerNumeros( contador, numeroMayor, numeroMenor, negativos, positivos, sumaPositivos, mayores150 );
        }
        else{
            //Se realiza el llamado a la función VerificarResultados con los contadores de cada requisito y el número ingresado por el usuario
            VerificarResultados( numero, contador, numeroMayor, numeroMenor, negativos, positivos, sumaPositivos, mayores150 );
        }//fin del if 2
    }
    else{
        //Para finalizar, se realiza el llamado a la función ImprimirResultados con los contadores de cada requisito
        ImprimirResultados( numeroMayor, numeroMenor, negativos, positivos, sumaPositivos, mayores150 );
    }//fin del if 1

    return 0;
}

//Se crea la función VerificarResultados, que recibe como parámetros los contadores de cada requisito y realiza el conteo de cada uno de ellos
int VerificarResultados( int numero, int contador, int mayor, int menor, int negativos, int positivos, int sumaPositivos, int mayores150 )
{
    if( numero > 150 ){
        mayores150++;
    }
    if( numero > mayor ){
        mayor = numero;
    }
    if( numero < menor ){
        menor = numero;
    }
    if( numero < 0 ){
        negativos++;
    }
    if( numero > 0 ){
        positivos++;
    }
    if( numero > 0 ){
        sumaPositivos += numero;
    }
    //Se  realiza el llamado recursivo de la función LeerNumeros con los contadores actualizados
    LeerNumeros( ( contador + 1 ), mayor, menor, negativos, positivos, sumaPositivos, mayores150 );

    return 0;
}

//Se crea la función ImprimirResultados, que recibe como parámetros los contadores de cada requisito e imprime los resultados
int ImprimirResultados( int mayor, int menor, int negativos, int positivos, int sumaPositivos, int mayores150 )
{
    printf( "\nCantidad de números mayores a 150: %i", mayores150 );
    printf( "\nNúmero mayor: %i", mayor );
    printf( "\nNúmero menor: %i", menor );
    printf( "\nCantidad de números negativos: %i", negativos );
    printf( "\nPromedio de los números positivos: %f", ( sumaPositivos * 1.0 / positivos ) );

    return 0;
}


int main()
{   
    printf( "Este programa lee desde el teclado un grupo de 75 números, diferentes a cero e imprime:\n* Cantidad de números Mayores a 150\n* Número mayor y número menor encontrado en el grupo\n* Cantidad de Números negativos encontrados\n* Promedio de los Positivos Encontrados.\n\n" );
    //Se llama la función LeerNumeros con los contadores de cada requisito en 0
    LeerNumeros( 0, 0, 0, 0, 0, 0, 0);
    
    return 0;
}