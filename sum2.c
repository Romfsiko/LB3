#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a =  pow(-1, i) * 1 / (pow(i, 2) + pow(2, i));
	for (i = 0; fabs(a) > eps; i++)
	{
		a = pow(-1, i) * 1 / (pow(i, 2) + pow(2, i));
		sum += a;

	}
	return sum;
}
