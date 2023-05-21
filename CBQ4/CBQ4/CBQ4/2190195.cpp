#include <stdio.h>
#include <cmath>


int main()
{
	struct complex {
		double r;
		double i;
		double pi = 3.142;
	};


	{
		struct complex I1 = { 3.0, -6.0 };
		struct complex I2 = { 9.0, 12.0 };
		struct complex I3 = { I1.r + I2.r, I1.i + I2.i };

		printf("\nI1 =%f + (%f)i\n", I1.r, I1.i);
		printf("I2 =%f + (%f)i\n", I2.r, I2.i);
		printf("I3 =%f + (%f)i\n", I3.r, I3.i);


		double mag1 = (I1.r * I1.r + I1.i * I1.i);

		printf("Magnitude of I1 = %f\n", mag1);

		struct complex conj2 = { I2.r, -I2.i };


		printf("Conjugate of I2 = %f + (%f)i\n", conj2.r, conj2.i);

	}
	
	}

