/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "comparar.h"

int comparar_enteros (const void *p1, const void *p2)
{ 
    if( *(int*)p1 < *(int*)p2)
    {
	return -1;
    }
    else if( *(int*)p1 == *(int*)p2 )
    {
	return 0;
    }
    else if(*(int*)p1 > *(int*)p2) 
	return 1;
  
}


int comparar_letras (const void *p1, const void *p2)
{
    if( *(char*)p1 < *(char*)p2 )
    {
	return -1;
    }
    
    else if( *(char*)p1 == *(char*)p2 )
    {
	return 0;
    }
    
    else if(*(char*)p1 > *(char*)p2) 
	return 1;
    
}