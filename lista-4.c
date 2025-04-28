#include <stdio.h>

// 1 - Escreva um programa solicita um numero e exibe a mensagem "SENAC" se este número for 14, 24, 23, 32 ou 33.
void _1()
{
    int number;

    printf("Forneça um número: \n");
    scanf("%d", &number);

    if (number == 14 || number == 24 || number == 23 || number == 32 || number == 33)
    {
        printf("SENAC.\n");
    }
}

// 2 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).
void _2()
{
    int number;

    printf("Forneça um número: \n");
    scanf("%d", &number);

    if ((number >= 15 && number <= 25) || (number >= 45 && number <= 50))
    {
        printf("Não é permitido o número fornecido ser entre 15 e 25 ou entre 45 e 50.\n");
    }
}

// 3 - Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor que 25 ou igual a 40.
void _3()
{
    int number;

    printf("Forneça um número: \n");
    scanf("%d", &number);

    if (number > 80 || number < 25 || number == 40)
    {
        printf("Não é permitido o número fornecido ser maior que 80, menor que 25 ou igual a 40.\n");
    }
}

/**
 * 4 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo.
 * Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
 */
void _4()
{
    int a, b, c;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Os valores formam um triângulo.\n");
    }
    else
    {
        printf("Os valores não formam um triângulo.\n");
    }
}

// 5 - Incremente o exercício anterior, para o caso das medidas formarem um triângulo válido, informar qual o tipo de triângulo que eles formam: equilátero, isósceles ou escaleno.
void _5()
{
    int a, b, c;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Os valores formam um triângulo.\n");

        if (a == b && b == c)
        {
            printf("Tipo: Equilátero\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Tipo: Isósceles\n");
        }
        else
        {
            printf("Tipo: Escaleno\n");
        }
    }
    else
    {
        printf("Os valores não formam um triângulo.\n");
    }
}

// 6 - Incremente o exercício anterior, agora informando se este é também um triângulo retângulo.
void _6()
{
    int a, b, c;
    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Os valores formam um triângulo.\n");

        if (a == b && b == c)
        {
            printf("Tipo: Equilátero\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Tipo: Isósceles\n");
        }
        else
        {
            printf("Tipo: Escaleno\n");
        }

        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            printf("O triângulo é também retângulo.\n");
        }
    }
    else
    {
        printf("Os valores não formam um triângulo.\n");
    }
}

// 7 - Crie um programa que desafia o usuário digitar um número maior que 40, que seja múltiplo de 5 e 7. Se ele conseguir, deve receber uma mensagem de parabéns.
void _7()
{
    int num;

    printf("Digite um número maior que 40 que seja múltiplo de 5 e 7: ");

    while (1)
    {
        scanf("%d", &num);
        if (num > 40 && num % 5 == 0 && num % 7 == 0)
        {
            printf("Parabéns! Você conseguiu.\n");
            break;
        }
        else
        {
            printf("Tente novamente: ");
        }
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

    printf("\n");
    _7();
    printf("\n");
}
