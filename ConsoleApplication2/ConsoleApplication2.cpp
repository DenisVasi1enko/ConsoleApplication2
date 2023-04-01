#include<stdio.h>
#include<math.h>
int main(void) {
	int const x = 1;
	double const pi = 3.14;
	double res, t1, t2, t3, t4, t5;
	t1 = 2 * cos(x - pi / 6) + sqrt(2);
	t3 = pow(x, 2);
	t4 = sin(t3);
	t5 = pow(t4, 2);
	t2 = 1 / (2 * log(x)) + t5;
	res = (t1/t2)*exp(3*x);
	printf("%.2f", res);
	return 0;
}