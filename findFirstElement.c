#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	a = pow(-1, i) * 1 / (pow(i, 2) + pow(2, i));
	while (fabs(a) > eps)
	{
		a = pow(-1, i) * 1 / (pow(i, 2) + pow(2, i));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	}
	return ++i;
}
