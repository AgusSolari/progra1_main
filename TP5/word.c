#include <stdio.h>

#define BUFFERSIZE 64

int comparar (char *p1, int size1, char *p2, int size2);
int getstring (char*);
char mayuscula (char);
void copystring (char *from , char *to , int size);


int main (void)
{
	char buffer [BUFFERSIZE];		// Creo un array de BUFFER en el cual se almacenara el string ingresado por el stdin
	int size1 = getstring (buffer);		// Esta funcion guarda la palabra ingresada en el BUFFER y devuelve size que es el tamaño de la palabra

	char string1[size1];

	printf("BUFFER1: %s \nSIZE: %d \n", buffer, size1);
	copystring(buffer, string1, size1); 
	printf("STRING1: %s \n", string1);


	int size2 = getstring(buffer) -1;
	char string2[size2];

	printf("BUFFER2: %s \n", buffer);
	copystring(buffer, string2, size2); 
	printf("STRING2: %s \n", string2);



	 
	//char charr2[] = {'e','s','p','o','n','j','a'};
	

	/*

	int rta = comparar(buffer, sizeof(charr1) , charr2, sizeof(charr2));

	if (rta == 1 )
	{
		printf(" La palabra %s se puede formar con las letras de %s  \n", charr2, charr1);
	}

	else
	{
		printf("La palabra no puede ser formada\n");
	}
	*/
	return 0;
}
// Funcion que crea una arreglo de la palabra ingresada por el buffer
void copystring (char *from , char *to , int size)
{
	for( int i = 0 ; i < size ; i++)
	{
		to[i]= from[i];
	}
}


// la funcion recibe de parametro un puntero al buffer y devuelve el tamaño de la palabra
int getstring (char *buff)
{
char letter;
int i = 0;
	do
	{
        letter = getchar();
		if (letter >= 'a' && letter <= 'z' )
		{
       	 	letter = mayuscula (letter);
		}
        if (letter < 'A' || letter > 'Z')    
        {
            if ( letter != '\n')
            {
                printf("error pa\n");
                return 0;
            }
        break;
        }
        buff [i] = letter;
        i++;    
    }
	while (i < BUFFERSIZE);

	return i;		// Devuelve el tamaño de la palabra ingresada
}

// Funcion que convierte el caracter a mayuscula
char mayuscula (char y)
{
	y = (y - 'a'+'A'); 
	return y;    
}

// Funcion que se encarga de comparar
int comparar (char *p1, int size1, char *p2, int size2)
{
	int a;    //incrementador del arreglo de la segunda palabra
	int b;    //incrementador del arreglo de la primera palabra
	int contador = 0;    //contador de letras iguales encontradas

	for(a=0; a < size2; a++)
	{
		for(b=0; b<size1 ; b++)
		{
			if ( *(p2 +a) == *(p1 +b) )    //si encuentro una letra de la segunda palabra en la primera
			{
				contador++;        //incremento contador de letras encontradas
				*(p1+b) = 0;    //borro el contenido de esa posicion ya que se tomo la letra como valida
				break;            //salgo del loop para que no se sigan busacando letras
			}
		}
	}
	if (contador == size2)    // si el contador de letras encontradas es igual a la cantidad de letras de la segunda palabra, significa que se puede formar con la segunda letra
	{
		return 1;
	}
	else 
		return 0;
}