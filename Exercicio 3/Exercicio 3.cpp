// Exercicio 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int num1, num2, aux;
    printf("\n\tInsira o primeiro valor inteiro:    ");
    scanf_s("%d", &num1);

    printf("\n\tInsira o segundo valor inteiro:    ");
    scanf_s("%d", &num2);

    printf("\n\tValores Inseridos: \n\tPrimeiro valor -> %d \n\tSegundo valor -> %d\n", num1, num2);

    aux = num1;     // Vari�vel auxiliar para armazenar o valor que ser� trocado
    num1 = num2;
    num2 = aux;

    printf("\n\tValores trocados: \n\tPrimeiro valor -> %d \n\tSegundo valor -> %d", num1, num2);
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
