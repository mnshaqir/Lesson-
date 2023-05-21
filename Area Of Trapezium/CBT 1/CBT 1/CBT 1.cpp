#include <stdio.h>

double CubicFunc(double, double, double, double, double);

int main()
{
	double initial = -6;
	double end = 1;
	double width = 0.001;
	double leftside, rightside, areaofTrapezium;
	double totalArea = 0;
	double h;

	// integration for ax^3 + bx^2 + cx + d from -6 to 1, where a = -5, b = -10, c = 9 and d =23.
	for (h = initial; h < end - width; h += width)
	{
		leftside = CubicFunc(h, -5, -10, 9, 23);
		rightside = CubicFunc(h + width, -5, -10, 9, 23);
		areaofTrapezium = 1.0 / 2.0 * (leftside + rightside) * width;
		totalArea += areaofTrapezium;

		printf(" x = %f , Area = %f , Total = %f \n ", h, areaofTrapezium, totalArea);
	}
	printf(" x = %f , Area = %f , Total = %f \n ", h, areaofTrapezium, totalArea);
}

double CubicFunc(double x, double a, double b, double c, double d)
{
	
	return a * (x * x * x) + b * (x * x) + c * x + d;
}