#include <stdio.h>
#include <cmath>


// This is equivalent to matrix
// | a b |
// | c d |
struct Matrix2x2 { double a, b, c, d;  };

int main()
{
	struct Matrix2x2 M = { 2, 6, 7, 1 };

	double det = M.a * M.d - M.b * M.c;

	printf("M = | %f %f |\n", M.a, M.b);
	printf("    | %f %f |\n", M.c, M.d);
	printf("Determinant = %f\n", det);

	struct Matrix2x2 trans = { M.a, M.c, M.b, M.d };
	printf("trans = | %f %f |\n", trans.a, trans.b);
	printf("        | %f %f |\n", trans.c, trans.d);




	struct vector30 { double i, j, k; };

	
	{
		struct vector30 v1 = { 2, -3, 1 };
		struct vector30 v2 = { 0, 10, -3 };
		struct vector30 v3 = { v1.i + v2.i, v1.j + v2.j, v1.k + v2.k };

		printf("\nv1 = (%f)i + (%f)j + (%f)k\n", v1.i, v1.j, v1.k);
		printf("v2 = (%f)i + (%f)j + (%f)k\n", v2.i, v2.j, v2.k);
		printf("v3 = (%f)i + (%f)j + (%f)k\n", v3.i, v3.j, v3.k);

		double v1DotV2 = v1.i * v2.i + v1.j * v2.j + v1.k * v2.k;

		printf("v1.v2 =%f\n", v1DotV2);
	}




   struct complex
   {
   double re;
   double im;
   };


	{
	   struct complex I1 = { 2, -5 };
	   struct complex I2 = { 4, 9 };
	   struct complex I3 = { I1.re + I2.re, I1.im + I2.im };

	   printf("\nI1 =%f + (%f)i\n", I1.re, I1.im);
	   printf("I2 =%f + (%f)i\n", I2.re, I2.im);
	   printf("I3 =%f + (%f)i\n", I3.re, I3.im);

	   double mag1 = sqrt(I1.re * I1.re + I1.im * I1.im);
	   printf("Magnitude of I1 = %f\n", mag1);

	   struct complex conj2 = { I2.re, -I2.im };
	   printf("Conjugate of I2 = %f + (%f)i\n", conj2.re, conj2.im);
	}

	



}