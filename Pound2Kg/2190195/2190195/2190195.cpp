#include <stdio.h>

double pound2kg(double);

int main()
{
	printf("\n 13.54 pound = %f kg.\n", pound2kg(13.54));
}

double pound2kg(double lb)
{
	return 0.45 * lb;
}