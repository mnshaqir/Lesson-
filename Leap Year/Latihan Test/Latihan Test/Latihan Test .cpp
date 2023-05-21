#include <stdio.h>

int main()
{
	double Ri = 3.55;
	double mass = 1.0 * Ri;
		printf(" \n mass = %lf \n ", mass );


	printf("--\n * ***\n--\n * ***\n");

	for (int c = 10; c < 20; c += 2)
	{
		printf("%d ", c % 5);
	}

	int x = 6;
	int y = 7;
	int p = (x > 3) ? 4 : 0;
	int q = (x > y) ? x : p;
	int r = p + q;

	printf(" \n r = %d \n", r);

	int a = 0;
	for (int c = 0; c < 10; c++) {
		switch (c) {
		case  0: a++;    break;
			printf(" \nthe value of a = %d\n", a);
		case  1: a--;    break;
			printf(" \nthe value of a = %d\n", a);
		case  2: a += 2; break;
			printf(" \nthe value of a = %d\n", a);
		case  3: a -= 2; break;
			printf(" \nthe value of a = %d\n", a);
		case  4: a += 3; break;
			printf(" \nthe value of a = %d\n", a);
		case  5: a *= 3; break;
			printf(" \nthe value of a = %d\n", a);
		default: a += c; break;
		}
		printf(" \nthe value of a = %d\n", a);


		//20, 30, 40, 50, 60, 70

		int h, tot = 0;
			for (h = 20; h <= 70; h += 10)
			{
				printf("   %d  ",h);
				tot += h;
		}
		

		for (int cf = 2; cf < 100; cf *= cf) {
			printf("%d ", cf);
		}


		int TotOdd = 0;
		for (int c = 1; c <= 20; c++) {
			if ((c % 2) > 0) TotOdd += c;
		}
		printf("\n TotOdd = %d\n", TotOdd);

		int year ;

		if ((year % 400) == 0) {
			printf("Divisible by 400,");
			scanf ( "year %d is leap year.",  &year);
		}
		else if ((year % 100) == 0) {
			printf("Divisible by 100, year %d is not leap year.", year);
			scanf("year %d is leap year.", &year);
		}
		else if ((year % 4) == 0) {
			printf("Divisible by 4, year %d is leap year.", year);
		}
		else {
			printf("Not divisible by 4, year %d is not leap year.", year);
		}

		
		}

}
