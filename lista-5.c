#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 1 - Sorteie um número de 1 a 100, exiba na tela e informe se é um número par ou ímpar.
void _1()
{
    int num = rand() % 100 + 1;
    printf("Número sorteado: %d\n", num);

    if (num % 2 == 0)
    {
        printf("O número é par.\n");
    }
    else
    {
        printf("O número é ímpar.\n");
    }
}

// 2 - Sorteie 3 números de 1 a 10, e aplique todas as coisas que fizemos com o programa sobre triângulos da lista passada, verificando se forma um triângulo e classificando o mesmo.
void _2()
{
    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    int c = rand() % 10 + 1;

    printf("Valores sorteados: %d, %d, %d\n", a, b, c);

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

// 3 - Escreva um programa que sorteia um número de 1 a 10 e dá duas chances para que o usuário acerte. O programa não deve alterar o número sorteado, e só deve pedir o segundo palpite, caso a pessoa erre sua primeira tentativa.
void _3()
{
    int num = rand() % 10 + 1;
    int palpite;

    printf("Tente adivinhar o número sorteado (1 a 10): ");
    scanf("%d", &palpite);

    if (palpite == num)
    {
        printf("Você acertou na primeira tentativa! O número era %d.\n", num);
    }
    else
    {
        printf("Errado! Você tem uma segunda chance.\n");
        printf("Tente novamente: ");
        scanf("%d", &palpite);

        if (palpite == num)
        {
            printf("Você acertou na segunda tentativa! O número era %d.\n", num);
        }
        else
        {
            printf("Você errou novamente. O número era %d.\n", num);
        }
    }
}

// 4 - Escreva um programa que sorteia um número de 1 a 10, dá duas chances para que o usuário acerte, mas dá uma pista após a primeira tentativa, dizendo se o número sorteado é maior ou menor que o primeiro palpite.
void _4()
{
    int num = rand() % 10 + 1;
    int palpite;

    printf("Tente adivinhar o número sorteado (1 a 10): ");
    scanf("%d", &palpite);

    if (palpite == num)
    {
        printf("Você acertou! O número era %d.\n", num);
    }
    else
    {
        if (palpite < num)
        {
            printf("O número sorteado é maior que %d.\n", palpite);
        }
        else
        {
            printf("O número sorteado é menor que %d.\n", palpite);
        }

        printf("Tente novamente: ");
        scanf("%d", &palpite);

        if (palpite == num)
        {
            printf("Você acertou na segunda tentativa! O número era %d.\n", num);
        }
        else
        {
            printf("Você errou novamente. O número era %d.\n", num);
        }
    }
}

// 5 - Sorteie dois números de 1 a 5 e peça que o usuário acerte os dois números de uma vez, não necessariamente na mesma ordem.
void _5()
{
    int num1 = rand() % 5 + 1;
    int num2 = rand() % 5 + 1;
    int palpite1, palpite2;

    printf("Tente adivinhar dois números sorteados (de 1 a 5), não necessariamente na mesma ordem.\n");
    printf("Primeiro palpite: ");
    scanf("%d", &palpite1);
    printf("Segundo palpite: ");
    scanf("%d", &palpite2);

    // Verifica se o usuário acertou os dois números
    if ((palpite1 == num1 && palpite2 == num2) || (palpite1 == num2 && palpite2 == num1))
    {
        printf("Você acertou os dois números! O número 1 era %d e o número 2 era %d.\n", num1, num2);
    }
    else
    {
        printf("Você errou. O número 1 era %d e o número 2 era %d.\n", num1, num2);
    }
}

// 6 - Sorteie dois números de 1 a 10. Informe quantos destes números estão entre 3 e 7 (inclusive). Extra: Pense em uma solução que seria facilmente expandida para 3, 4 ou 5 números sorteados.
void _6()
{
    // Sorteia dois números entre 1 e 10
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int count = 0;

    printf("Números sorteados: %d, %d\n", num1, num2);

    // Verifica quantos números estão entre 3 e 7
    if (num1 >= 3 && num1 <= 7)
    {
        count++;
    }
    if (num2 >= 3 && num2 <= 7)
    {
        count++;
    }

    printf("Existem %d números entre 3 e 7.\n", count);
}

// Desafio Jedi Master 7 - Escreva um programa que joga par ou ímpar com o usuário. Ele deve começar perguntando se o usuário escolhe 1 - Par ou 2 - Ímpar. (A escolha é informada digitando 1 ou 2).
void _7()
{
    int escolha, numero, computador;

    printf("Escolha: 1 - Par, 2 - Ímpar: ");
    scanf("%d", &escolha);

    printf("Escolha um número entre 1 e 10: ");
    scanf("%d", &numero);

    computador = rand() % 10 + 1;
    printf("Número sorteado pelo computador: %d\n", computador);

    int soma = numero + computador;

    if ((soma % 2 == 0 && escolha == 1) || (soma % 2 != 0 && escolha == 2))
    {
        printf("Você ganhou! A soma é %d e você escolheu %s.\n", soma, (escolha == 1) ? "Par" : "Ímpar");
    }
    else
    {
        printf("Você perdeu! A soma é %d e você escolheu %s.\n", soma, (escolha == 1) ? "Par" : "Ímpar");
    }
}

int main()
{
    srand(time(NULL));

    // switch (escolha)
    // {
    // case 1:
    //     _1();
    //     break;
    // case 2:
    //     _2();
    //     break;
    // case 3:
    //     _3();
    //     break;
    // case 4:
    //     _4();
    //     break;
    // case 5:
    //     _5();
    //     break;
    // case 6:
    //     _6();
    //     break;
    // case 7:
    //     _7();
    //     break;
    // default:
    //     printf("Escolha inválida!\n");
    //     break;
    // }

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
