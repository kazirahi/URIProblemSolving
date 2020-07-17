#include<stdio.h>
#define pie 3.14159
int main()
{
    float a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf ("%f %f %f", &a, &b, &c);
    TRIANGULO =((a*c)/2);
    CIRCULO =(pie*(c*c));
    TRAPEZIO = ((a+b)*c)/2;
    QUADRADO = (b*b);
    RETANGULO = (a*b);
    printf ("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
}
