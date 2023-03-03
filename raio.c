#include <stdio.h>
#define PI 3.1415
int main() {
    double area,perimetro,raio;
    printf ("digite o raio da circuferencia: ");
    scanf ("%lf", & raio);
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
    printf("valor da area: %5.3lf \n", area);
    printf("valor do perimetro: %5.3lf \n",perimetro);
    return 0;
}
