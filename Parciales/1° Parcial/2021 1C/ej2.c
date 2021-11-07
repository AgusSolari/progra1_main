/* 
EJERCICIO 2 
De las siguientes afirmaciones, determinar si son V o F y corregirlas

"arr" es un arreglo de 4 int y "pum" un puntero a int que apunta al 
segundo elemento de arr


a. El tamaño de pum depende del tipo de dato al que apunta. 
    FALSO: el tamaño del puntero depende de la arquitectura del 
    sistema en la que se este ejecutando el programa

b. Hacer *arr = 5; genera un error
    FALSO: al hacer eso de se le esta asignando al primer elemento
    del arreglo el valor de 5. Ya que *arr= arr[0]

c. *p++; incrementa el valor del segundo elemento del arreglo
    FALSO: *p++ = *(p++) = primero *p++ = *p y luego p=p+1, lo que hace es incrmentar el puntero en 1*ELSIZE

d. arr + 1 no es un lvalue
    VERDADERO: El valor de esta operacion es un puntero incrementado en ELSIZE

e. arr++; no es una operacion valida
    VERDADERO: No es posible hacer operaciones con los punteros, ya que son 
    solo de lectura

f. &pum devuelve la direccion del segundo elemento del arreglo
    FALSO: &pum devuelve la direccion de memoria de la variable puntero pum

g. (p+1)= 0; le asigna 0 al ultimo elemento del arreglo.
    FALSO: como p apunta al segundo elemento p[1], entonces (p+1) apuntaria
    al tercer elemento del arreglo, es decir el ante-ultimo

h. Para decrementar el primer elemento de arr mediante pum se debe de hacer --p[-1]
    VERDADERO: Segun el orden de presedencia se haria la siguiente operacion
        --p[-1] = --(p[-1]) = --(arr[0])--> y esto produce un decremento en el 
        primer elemento de arr
        Como p[0] = arr[1] -> p[-1] = arr[0]
    
*/