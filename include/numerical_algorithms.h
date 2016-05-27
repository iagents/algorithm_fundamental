#ifndef _NUMERICAL_ALGORITHMS_H__
#define _NUMERICAL_ALGORITHMS_H__

#include <cmath>

namespace algorithm_fundamental
{
	/// \brief A simple solver for y = mx + b, (x,y)_{i=1,...,n}
	void linear_least_square_fit(int n, double x[], double y[], double * b, double * m, double * r);
}
#endif