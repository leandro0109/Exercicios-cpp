// Exercicio 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valorBananas, valorMacas, valorVendas, valorPoupanca;

    printf("\n\tInsira o peso das bananas (em kg):      ");
    scanf_s("%f", &valorBananas);
    valorBananas = valorBananas * 1.20;

    printf("\n\tInsira o peso das macas (em kg):      ");
    scanf_s("%f", &valorMacas);
    valorMacas = valorMacas * 1.50;

    valorVendas = valorBananas + valorMacas;
    printf("\n\tValor de vendas total = %.3f euros   \n\t\tValor venda de bananas -> %.3f euros \n\t\tValor venda de maças -> %.3f euros\n", valorVendas, valorBananas, valorMacas);

    valorPoupanca = valorVendas / 10;
    printf("\n\tValor de poupança (10%% do total faturado) = %.3f\n", valorPoupanca);

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
