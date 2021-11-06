#include <math.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;

	for (i; ; i++)
	{
		a = pow(-1, i) * i / (pow(i, 2) + pow(2, i));
		if (fabs(a) <= eps && a < 0)
		{
			return ++i;
		}
	}

}
