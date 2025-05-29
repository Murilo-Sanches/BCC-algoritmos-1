#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Um número perfeito é aquele cuja soma dos divisores próprios (excluindo ele mesmo) é igual ao próprio número.
 * Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6.
 */
void _1()
{
    int number, sum = 0;

    printf("Digite um número: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        printf("%d é um número perfeito.\n", number);
    }
    else
    {
        printf("%d não é um número perfeito.\n", number);
    }
}

void _2a()
{
    int userNumber, randomNumber;

    srand(time(NULL));
    randomNumber = rand() % 10 + 1;

    printf("Tente adivinhar o número (entre 1 e 10): ");
    scanf("%d", &userNumber);

    if (userNumber == randomNumber)
    {
        printf("Parabéns! Você acertou.\n");
    }
    else
    {
        printf("Você errou. O número era %d.\n", randomNumber);
    }
}

void _2b()
{
    int userGuess, target, attempts = 0;

    srand(time(NULL));
    target = rand() % 10 + 1;

    printf("Adivinhe o número entre 1 e 10.\n");

    do
    {
        printf("Digite seu palpite: ");
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess < target)
        {
            printf("O número sorteado é maior!\n");
        }
        else if (userGuess > target)
        {
            printf("O número sorteado é menor!\n");
        }
        else
        {
            printf("Parabéns! Você acertou em %d tentativa(s).\n", attempts);
        }

    } while (userGuess != target);
}

void _3()
{
    int sum = 0;

    for (int number = 26; number <= 200; number += 2) // Começa no 26, primeiro par > 25
    {
        sum += number;
    }

    printf("A soma dos números pares entre 25 e 200 é: %d\n", sum);
}

void _4()
{
    int age;
    int maxAge = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a idade do %dº atleta: ", i);
        scanf("%d", &age);

        if (age > maxAge)
        {
            maxAge = age;
        }
    }

    printf("A idade do atleta mais velho é: %d\n", maxAge);
}

void _5a()
{
    int code, age;
    int oldestAge = 0;
    int oldestCode = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o código do %dº atleta: ", i);
        scanf("%d", &code);

        printf("Digite a idade do %dº atleta: ", i);
        scanf("%d", &age);

        if (age > oldestAge)
        {
            oldestAge = age;
            oldestCode = code;
        }
    }

    printf("O código do atleta mais velho é: %d\n", oldestCode);
}

void _5b()
{
    int code, age;
    int oldestAge = 0;
    int oldestCode = 0;
    int sumAges = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o código do %dº atleta: ", i);
        scanf("%d", &code);

        printf("Digite a idade do %dº atleta: ", i);
        scanf("%d", &age);

        sumAges += age;

        if (age > oldestAge)
        {
            oldestAge = age;
            oldestCode = code;
        }
    }

    double averageAge = sumAges / 5.0;

    printf("O código do atleta mais velho é: %d\n", oldestCode);
    printf("A idade média dos atletas é: %.2lf\n", averageAge);
}

void _5c()
{
    int code, age;
    int oldestAge = 0;
    int oldestCode = 0;
    int sumAges = 0;
    int count = 0;
    int option;

    do
    {
        count++;

        printf("Digite o código do %dº atleta: ", count);
        scanf("%d", &code);

        printf("Digite a idade do %dº atleta: ", count);
        scanf("%d", &age);

        sumAges += age;

        if (age > oldestAge)
        {
            oldestAge = age;
            oldestCode = code;
        }

        printf("Deseja incluir outro atleta? (1 - Sim / 2 - Não): ");
        scanf("%d", &option);

    } while (option == 1);

    double averageAge = sumAges / (double)count;

    printf("O código do atleta mais velho é: %d\n", oldestCode);
    printf("A idade média dos atletas é: %.2lf\n", averageAge);
}

void _6()
{
    int number;

    do
    {
        printf("Digite um número que seja par, maior que 200 e múltiplo de 4: ");
        scanf("%d", &number);

        if (number <= 200 || number % 4 != 0)
        {
            printf("Número inválido! Tente novamente.\n");
        }

    } while (number <= 200 || number % 4 != 0);

    printf("Número válido digitado: %d\n", number);
}

/**
 * Um número primo é um número natural maior que 1 que só pode ser dividido exatamente por 1 e por ele mesmo.
 * 2 é primo, porque só pode ser dividido por 1 e 2.
 * 3 é primo, só dividido por 1 e 3.
 * 5 é primo (divisível só por 1 e 5).
 * 6 não é primo (divisível por 1, 2 e 4).
 */
void _7()
{
    int number;
    bool isPrime = true;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("%d não é um número primo.\n", number);
        return;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        printf("%d é um número primo.\n", number);
    }
    else
    {
        printf("%d não é um número primo.\n", number);
    }
}

int main()
{
    srand(time(NULL));

    printf("\n");
    _1();
    printf("\n");

    printf("\n");
    _2a();
    printf("\n");

    printf("\n");
    _2b();
    printf("\n");

    printf("\n");
    _3();
    printf("\n");

    printf("\n");
    _4();
    printf("\n");

    printf("\n");
    _5a();
    printf("\n");

    printf("\n");
    _5b();
    printf("\n");

    printf("\n");
    _5c();
    printf("\n");

    printf("\n");
    _6();
    printf("\n");

    printf("\n");
    _7();
    printf("\n");
}
