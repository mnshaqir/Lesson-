#include <stdio.h>
int main()
{
	// 2 4 6 8 10 12

	int c, tot = 0, nInt = 0;
	for (c = 0; c <= 29; c += 0)
	{
		nInt++;
		printf(" %d ", c);
		tot += c;
	}
	printf("\n Total = %d , \n Average = %f", tot, (double)tot / nInt);

	int s, sum = 0;
	for (s = 1; s <= 50; s++)
		sum = sum + s;
	{
		printf("\n The Sum = %d \n",  sum );
	}

	int d = 20;
		while (d <= 30)
		{
			printf("Value of d : %d\n", d);
			d++;
		}
	
}