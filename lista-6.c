#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void _1()
{
    int number;

    printf("Digite um número entre 1 e 10 para ver a tabuada: ");
    scanf("%d", &number);

    if (number < 1 || number > 10)
    {
        printf("Número inválido! Por favor, digite um número entre 1 e 10.\n");
        return;
    }

    printf("Tabuada do %d:\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

void _2()
{
    for (int number = 1; number <= 20; number++)
    {
        int square = number * number;
        printf("%d - %d\n", number, square);
    }
}

void _3()
{
    int number;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("%d é par.\n", number);
        }
        else
        {
            printf("%d é ímpar.\n", number);
        }
    }
}

void _4()
{
    int number;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &number);
        sum += number;
    }

    printf("A soma dos 10 números é: %d\n", sum);
}

void _5()
{
    int sum = 0;

    for (int number = 1; number <= 100; number++)
    {
        sum += number;
    }

    // printf("A soma do período dos números de 1 a 100 é: %d\n", (100 * (100 + 1)) / 2);
    printf("A soma do período dos números de 1 a 100 é: %d\n", sum);
}

void _6()
{
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    printf("Divisores de %d:\n", number);

    for (int i = number; i >= 1; i--)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
    }
}

void _7()
{
    int number;

    do
    {
        printf("Digite um número entre 10 e 20: ");
        scanf("%d", &number);

        if (number < 10 || number > 20)
        {
            printf("Número inválido! Tente novamente.\n");
        }

    } while (number < 10 || number > 20);

    printf("Número válido digitado: %d\n", number);
}

int main()
{
    srand(time(NULL));

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

    printf("\n");
    _7();
    printf("\n");
}
