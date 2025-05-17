// Exercicio 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const float TAXA = 0.4;
    float valorProduto = 0, imposto = 0;

    printf("\n\tInsira o valor do produto:      ");
    scanf_s("\n\t%f", &valorProduto);

    imposto = valorProduto * TAXA;
    printf("\n\tO valor de imposto a pagar é %.2f euros.\n", imposto);
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
