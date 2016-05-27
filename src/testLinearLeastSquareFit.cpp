#include <iostream>
#include "numerical_algorithms.h"

int main()
{
	int n=6;
	double x[6] = { 1, 2, 4, 5, 10, 20};
	double y[6] = { 4, 6, 12, 15, 34, 68};

	double m,b,r;
	algorithm_fundamental::numerical_algorithms::linear_least_square_fit(6, x, y, &m, &b, &r);
	std::cout<< "m=" << m << ", b=" << b << ", r=" << r << std::endl;

	for (int i=0; i < 6; i++)
	{
		std::cout << "x[i]=" << x[i] << ", y[i]="<< y[i] << " mx+b=" << m*x[i]+b << std::endl;
	}

	return 0;
}