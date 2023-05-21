#include <stdio.h>
int main()
{
	// -66, -71, -76, -81, -86, -91, -96, -101, -106

	int c, sum = 0;
	for (c = -66; c >= -106; c -= 5)
	{
		
		printf(" %d ", c);
		sum = sum + c;
	}
	printf("\n The summation of the number are %d", sum);
}