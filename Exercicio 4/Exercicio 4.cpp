// Exercicio 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int anoNascimento, anoAtual, idadePessoa;

    printf("\n\tInsira o seu ano de nascimento:     ");
    scanf_s("%d", &anoNascimento);

    printf("\n\tInsira o ano atual:     ");
    scanf_s("%d", &anoAtual);

    idadePessoa = anoAtual - anoNascimento;
    printf("\n\tA sua idade � %d anos.", idadePessoa);

    printf("\n\n");
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
