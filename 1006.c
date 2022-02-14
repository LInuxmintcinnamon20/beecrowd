#include <stdio.h>

int main ()
{
	double a, b, c, m;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	
	m = (2.00 * a + 3.00 * b + 5.00 * c) / 10;
	printf("MEDIA = %.1lf\n",m);
	return 0;
}