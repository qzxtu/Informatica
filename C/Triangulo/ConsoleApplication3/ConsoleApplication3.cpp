#include <iostream>

int lado, lado2, lado3;
int base = 0;
int altu = 0;
int per = 0;
int area = 0;
int main() {
	printf_s("Buenas\n");
	printf_s("Escribe uno de los lados del triangulo\n");
	scanf_s("%d/n", &lado);
	printf_s("Escribe el otro lado del triangulo\n");
	scanf_s("%d/n", &lado2);
	printf_s("Escribe el otro lado del triangulo\n");
	scanf_s("%d/n", &lado3);
	printf_s("Espere un momento...\n");
	int c, d;
		for (c = 1; c <= 32767 * 2; c++)
		for (d = 1; d <= 32767 * 2; d++)
		{
		}
	printf_s("El perimetro del triangulo es de:\n");per = lado + lado2 + lado3;
	printf_s("%d\n", per);
	for (c = 1; c <= 32767 * 2; c++)
		for (d = 1; d <= 32767 * 2; d++)
		{
		}
	printf_s("Escriba la base del triangulo\n");
	scanf_s("%d/n", &base);
	printf_s("Escriba la altura del triangulo\n");
	scanf_s("%d/n", &altu);
	printf_s("Espere un momento...\n");
		for (c = 1; c <= 32767 * 2; c++)
		for (d = 1; d <= 32767 * 2; d++)
		{
		}
	printf_s("El area del triangulo es de:\n"); area = (base * altu)/2; 
	printf_s("%d\n", area);

	return 0;
}
