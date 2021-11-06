#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	while (i < n)
	{
		sum += pow(-1, i) * 1 / (pow(i, 2) + pow(2, i));
		++i;
	}

	return sum;
}
