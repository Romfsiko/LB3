#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	do
	{
		a = pow(-1, i) * i / (pow(i, 2) + pow(2, i));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	} while (fabs(a) > eps);
	return ++i;
}
