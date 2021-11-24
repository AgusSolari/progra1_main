//
// Created by agussolari on 13/11/21.
//

#include <stdio.h>
int fsm (void);

int main (void)
{
		fsm();
		return 0;
}

int fsm (void)
{
	unsigned char status = 0;
	unsigned char event;
	while (1)
	{
	event = (getchar()- '0');
		enum events {S1 = 0, S2, S3};
		enum inputs {E1 = 0, E2, E3, E4, E5};

		switch (status)
		{
			case S1:
				if (event == E1)
				{
					status = S3;
					printf("status = S3\n");
				}
				else if (event == E3) {
					//F3();
					status = S2;
					printf("status = S2\n");

				}
				break;

			case S2:
				if (event == E4)
				{
					status = S2;
					printf("status = S2\n");

				}
				else if (event == E5)
				{
					status = S3;
					printf("status = S3\n");
					return 0;

				}
				break;

			case S3:
				if (event == E2)
				{
					status = S1;
					printf("status = S1\n");

				}
				break;

		}

	}
	return 0;
}


