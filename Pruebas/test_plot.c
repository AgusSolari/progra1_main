#include <stdio.h>

void plot(double axis, double val); // declaro la funcion

int main (void) {
	
	for (int i = -20; i < 20; i++)
	{
		double x = i/10.0; // eje x
		double y = (x*x*x)-x;
		plot(x,y);
	}
	

	return 0;
}




#define RANGE	20

void plot(double axis, double val)  // defino la funcion
{
	printf("%+.1f |", axis);
	int spaces = RANGE + (int)(val*10.0f);
	for(; spaces > 0; spaces--)
	{
		if (axis==0.0 || axis==1.0 || axis==2.0 || axis==-1.0 || axis==-2.0)
			printf("-");		
		else
			printf(" ");
	}

	printf("%+.1f\n", val);

	// val == 0.0 ? printf("o\n") : printf("x\n");
}