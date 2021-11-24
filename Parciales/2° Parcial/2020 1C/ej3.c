//	EJERCICIO 3
//  Marcar y correjir errores
//
/*
#include <stdio.h>

typedef union reg_t
{
	uint16_t word;
	uint8_t lo;
	uint_t hi;
};

int main (void)
{
	reg_t r1 = {0x1234};
	reg_t r2 = {0x56, 0x78};

	printf("%d\n", r2);
	printf("%d\n", r1);
	printf("%d\n", r1);


}
*/

//RTA

#include <stdio.h>
#include <stdint.h>

typedef union
{
	uint16_t word;
	struct
	{
		uint8_t lo;
		uint8_t hi;
	};
}reg_t;

int main (void)
{
	reg_t r1 = { .word = 0x1234};
	//reg_t r2 = {.hi=0x56, .lo= 0x78};
	reg_t r2;
	r2.hi=0x56;
	r2.lo= 0x78;


	printf("%x\n", r1);
	printf("%x\n", r2.hi);
	printf("%x\n", r2.lo);



}