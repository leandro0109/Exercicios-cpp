// Exercicio 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>

int main()
{
	float base, altura, areaRetangulo, perimetroRetangulo, raio, areaCirculo, perimetroCirculo;

	setlocale(LC_ALL, "Portuguese");
	printf("\n\tDigite a base e a altura do retângulo:	 ");
	scanf_s("%f%f", &base, &altura);

	areaRetangulo = base * altura;
	perimetroRetangulo = 2 * (base + altura);
	printf("\n\tRetângulo: \n\tÁrea = %.2f\n\tPerímetro = %.2f", areaRetangulo, perimetroRetangulo);

	printf("\n\tDigite o raio do círculo:	");
	scanf_s("%f", &raio);
	areaCirculo = 3.14159 * raio * raio;
	perimetroCirculo = 2 * 3.14159 * raio;
	printf("\n\tRetângulo: \n\tÁrea = %.2f\n\tPerímetro = %.2f", areaCirculo, perimetroCirculo);

	printf("\n\n");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
