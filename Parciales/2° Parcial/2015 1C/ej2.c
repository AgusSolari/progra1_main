//
// Created by agussolari on 13/11/21.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    union trennen
            {
        short int num; // Defino un entero de 4 bytes
        struct by4in4
				{
            unsigned a1:4; // a1 y a2 forman 1 byte
            unsigned a2:4;	//
            unsigned a3:4; // a3 y a4 forman 1 byte
            unsigned a4:4;
        } vier;
    };
	/*		a1 [    ]	numH
	 * 		a2 [    ]	numH
	 * 		a3 [    ] 	numL
	 * 		a4 [    ]	numL
	 *
	 */
    union trennen valu;
    valu.num=130;
	/*		a1 [  8  ]	numH
 	* 		a2 [  2  ]	numH
 	* 		a3 [  0  ] 	numL
 	* 		a4 [  0  ]	numL
 */

    printf("\n %u-%u-%u-%u\n",valu.vier.a4,valu.vier.a3,valu.vier.a2,valu.vier.a1);
}

//Imprime : 0-0-8-2