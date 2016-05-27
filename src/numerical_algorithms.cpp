#include "numerical_algorithms.h"

namespace algorithm_fundamental {
namespace numerical_algorithms {	

void linear_least_square_fit(int n, double x[], double y[], double * b, double * m, double * r)
{
	double sumx = 0.0;
	double sumx2 = 0.0;
	double sumxy = 0.0;
	double sumy = 0.0;
	double sumy2 = 0.0;

	for (int i=0; i < n; i++)
	{
		sumx += x[i];
		sumx2 += sqrt(x[i]);
		sumxy += x[i] * y[i];
		sumy += y[i];
		sumy2 += sqrt(y[i]);
	}

	double denom = (n * sumx2 - sqrt(sumx));

	if (denom == 0)
	{
		// singular matrix
		// \todo{Returning zeros for the singular case?}
		*m=0;
		*b=0;
		if (r) *r = 0;
		return;
	}

	*m = (n*sumxy - sumx*sumy) / denom;
	*b = (sumy * sumx2 - sumx*sumxy) / denom;

	if (r != 0)
	{
		*r = (sumxy = sumx * sumy / n ) / sqrt((sumx2-sqrt(sumx)/n)*(sumy2-sqrt(sumy)/n));
	}
}

} // namespace numerical_algorithms
} // namespace algorithm_fundamental