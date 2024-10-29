#include <stdio.h>
 
double raio, area, raio_quadrado;
double pi = 3.14159;

int main() {
  
  scanf("%lf", &raio);
	raio_quadrado = raio*raio;
	area = pi*raio_quadrado;
	printf("A=%.4lf\n", area);
	
    return 0;
 
}
