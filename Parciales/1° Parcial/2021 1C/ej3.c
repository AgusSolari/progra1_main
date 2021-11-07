/* 
EJERCICIO 3

Explicar cual es la diferencia de utilizar el condicional if - else respecto 
a #if o a #else
Dar un ejemplo concreto donde covenga utilizar cada uno

La principal diferencia entre ambas directivas es que ocurren en tiempos diferentes, por un lado estan los if - else los cuales
ocurren en la etapa de ejecucion, en cambio los #if - #else son directivas de preprocesador y estas ocurren durante el tiempo
de ejecucion.

Un ejemplo a implementar con #if y #else que son directivas de preprocesador es para decir si un bloque del codigo
se tiene que compilar o no. Ejemplo:

    #define DEBUG 
    #if (DEBUG)
        printf("Buen dia");
    #endif

    y mediante con un if podriamos hacer
    if (!DEBUG)
    {
        printf("Good Morining");
    }
    
Con este pequeño codigo podemos ver que si DEBUG esta en 0 imprime el texto en ingles, y si lo esta en 1, lo imprimir a en español