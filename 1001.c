#include <stdio.h>
 
int main() {
	double raio, area;
	scanf("%f", &raio);
	area = 3.14159 * raio * raio;
	printf("A=%f\n",area);
	return 0;
}