#include <stdio.h>

void _1()
{
    float number;

    printf("Forneça um número para verificar se é maior do que 10: \n");
    scanf("%f", &number);

    if (number > 10)
    {
        printf("Sim.\n");
    }
}

void _2()
{
    int number;

    printf("Forneça um número para ser definido se é par ou ímpar: \n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("O número fornecido é par.\n");
    }
    else
    {
        printf("O número fornecido é ímpar.\n");
    }
}

void _3()
{
    int fistNumber, secondNumber;

    printf("Forneça dois número para ser identificado qual é o maior: \n");
    scanf("%d %d", &fistNumber, &secondNumber);

    if (fistNumber > secondNumber)
    {
        printf("O primeiro número digitado é maior do que o segundo.\n");
    }
    else
    {
        printf("O segundo número digitado é maior do que o primeiro.\n");
    }
}

void _4()
{
    int fistNumber, secondNumber;

    printf("Forneça dois números para ser identificado qual é o maior: \n");
    scanf("%d %d", &fistNumber, &secondNumber);

    if (fistNumber == secondNumber)
    {
        printf("Os números fornecidos devem ser distintos.\n");
    }
    else if (fistNumber > secondNumber)
    {
        printf("O primeiro número fornecido é maior do que o segundo.\n");
    }
    else
    {
        printf("O segundo número fornecido é maior do que o primeiro.\n");
    }
}

void _5()
{
    int number;

    printf("Forneça um número para ser definido se é múltiplo de 10: \n");
    scanf("%d", &number);

    if (number % 10 == 0)
    {
        printf("O número fornecido é múltiplo de 10.\n");
    }
    else
    {
        printf("O número fornecido não é múltiplo de 10.\n");
    }
}

void _6()
{
    int fistNumber, secondNumber;

    printf("Forneça dois números para ser identificado se os dois são maiores do que 10: \n");
    scanf("%d %d", &fistNumber, &secondNumber);

    if (fistNumber > 10 && secondNumber > 10)
    {
        printf("Ambos números fornecidos são maiores do que 10.\n");
    }
}

int main()
{
    printf("\n");
    _1();
    printf("\n");

    printf("\n");
    _2();
    printf("\n");

    printf("\n");
    _3();
    printf("\n");

    printf("\n");
    _4();
    printf("\n");

    printf("\n");
    _5();
    printf("\n");

    printf("\n");
    _6();
    printf("\n");
}
