//
// EJERCICIO 1
// 	Explicar el uso de las palabras reservadas static y const en el siguiente ejemplo.
// ¿Que cambia si no lo estuviesen?
//


#include <stdio.h>

static char str[] = "COVID- 19";

/*
 * La palabra staitic en este caso nos sirve para privartizar el arreglo con respecto a otros archivos. Es decir, si nosotros queremos acceder
 * a este arreglo "str" desde otro archivo, no podriamos ya que esta "Privatizada" con respecto a otros archivos
 */
char* const p = str +5;


/*
 * En este caso, la palabra "const" nos sirve para proteger alguna variabel sobre cambios, en este caso, la palabra reservada estaria
 * protegiendo a lo que apunta dejandonos modificar el contenido a lo que apunta, pero no al puntero de por si
 */

int main (void)
{



	return 0;
}
