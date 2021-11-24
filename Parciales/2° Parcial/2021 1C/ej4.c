/*		EJERCICIO 4
 * Se desea excribir una funcion que reciba un arreglo de n notas y devuelva la nota macima, la nota minima, el promedio de notas y la mediana de notas.
 * Explicar deyalladamente dos metodos distintos para ponder devolver estos 4 valores calculados. Escribir el protoripo de cada metodo
 *
 *
 * METODO 1: Devolver los valores a traves de un ppuntero a una estructura
 * Una posibilidad para devolver estos 4 valores es a traves de una puntero a una estructura que previamente debe de haber sido definida,
 * y enviada como un argumento de entrada a la funcion. En mi opinion es la mas practica y facil de implementar ya que una vez devuelto el puntero
 * podemos tomar cualquier valor de los 4 mediante una sintaxis familiar. Ejemplo:
 *
 * Una vez teniendo la estructura definida como un tipo de dato, el prototipo de la funcion debe de ser
 *
 * notas_t* my_fun (float notas[], notas_t estructura);
 *
 *  */
#include <stdio.h>

typedef struct
{
	float nota_max;
	float nota_min;
	float nota_promedio;
	float nota_mediana;
}notas_t;

notas_t* my_fun (float notas[], notas_t estructura);

int main (void)
{
	notas_t COMISION_K;
	notas_t* P_K = COMISION_K;

	P_K->nota_max = 10.0;

}


/*
 * METODO 2: Devolver las notas en un arreglo
 * Es muy parecido al metodo anterior, solo que en este caso se estarian devolviendo estos 4 valores en un arreglo de 4 floats, en los cuales se debera
 * de definir un orde, es decir, que el primer elemento sea la nota maxima, el segundo elemento la nota minima, etc. Para que no se pisen los valores.
 * Una vez cargado estos valores en el arreglo se debera de devolver un puntero a un arreglo de floats. El prototipo de la funcion seria
 *
 */

float* my_fun ( float notas[], float valores[]);
