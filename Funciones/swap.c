//Prototipo
void swap2( int *pa, int *pb);

//Invocacion:
swap2(&x, &y);  //Le paso a la funcion las direcciones de memoria de las variables x e y

//Funcion
void swap2( int *pa, int *pb)       // La funcion crea punteros en los cuales se guardaran las posiciones de memorias de las variables que entren
{
    int aux;        //pa= direccion de la variable x y pb= direccion de la variable y
    aux= *pa;       // aux toma el valor de la posicion de memoria de pa ya que aux= * pa, el * indica que tomara el dato de la posicion indicada
    *pa=*pb;
    *pb= aux;

}