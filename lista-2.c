#include <stdio.h>

// 1. Escreva um programa que ajuda os alunos a calcularem as notas desta disciplina. O programa deve perguntar as notas da primeira e da segunda prova, calcular a média aritmética entre elas, e exibir na tela.
void _1()
{
    float firstResult, secondResult, averageResult;

    printf("Qual foi a nota da primeira prova? \n");
    scanf("%f", &firstResult);

    printf("Qual foi a nota da segunda prova? \n");
    scanf("%f", &secondResult);

    averageResult = (firstResult + secondResult) / 2;
    printf("A média aritmética das suas notas foi: %.2f.\n", averageResult);
}

// 2. Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros).
void _2()
{
    float distanceTraveled, fuelUsed, averageResult;

    printf("Quantos km foram percorridos? \n");
    scanf("%f", &distanceTraveled);

    printf("Qual foi o volume de combustível usado para percorrer %.2fkm? \n", distanceTraveled);
    scanf("%f", &fuelUsed);

    averageResult = distanceTraveled / fuelUsed;
    printf("Para percorrer %.2fkm foi usado %.2fl de combustível, com uma média de consumo de %.2fkm/l.\n", distanceTraveled, fuelUsed, averageResult);
}

// 3. Em uma festa, homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens e quantas mulheres participaram da festa e calcula o valor total arrecadado com as entradas.
void _3()
{
    float maleTicketPrice = 20;
    float femaleTicketPrice = 17;

    float totalEarnings;

    int menCount, womenCount;

    printf("Quantos homens participaram da festa? \n");
    scanf("%d", &menCount);

    printf("Quantas mulheres participaram da festa? \n");
    scanf("%d", &womenCount);

    totalEarnings = menCount * maleTicketPrice + womenCount * femaleTicketPrice;
    printf("Compareceram %d homens (taxa de R$ %.2f) e %d mulheres (taxa de R$ %.2f), os ganhos totais foram: R$ %.2f.\n", menCount, maleTicketPrice, womenCount, femaleTicketPrice, totalEarnings);
}

// 4. Crie um programa que calcula o volume de um cilindro, solicitando que o usuário digite apenas a medida do raio e a altura do mesmo.
void _4()
{
    float radius, height, volume;

    printf("Quanto mede o raio do cilindro? \n");
    scanf("%f", &radius);

    printf("Quanto mede a altura do cilindro? \n");
    scanf("%f", &height);

    volume = 3.14 * (radius * radius) * height;
    printf("O volume do cilindro é: %.2f.\n", volume);
}

// 5. Fazer um algoritmo para ler os valores dos coeficientes A, B e C de uma equação quadrática. Calcular e imprimir o valor do discriminante (delta). Delta = B²– 4AC.
void _5()
{
    float a, b, c, delta;

    printf("Vai ser calculado o discriminante da equação quadrática.\n");
    printf("Coeficiente A: \n");
    scanf("%f", &a);

    printf("Coeficiente B: \n");
    scanf("%f", &b);

    printf("Coeficiente C: \n");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    printf("O discriminante da equação quadrática com os coeficientes A = %.2f, B = %.2f e C = %.2f é igual a %.2f.\n", a, b, c, delta);
}

// 6. Escreva um programa que solicita um número e então exibe 0 se o número for par, e 1 se o número for ímpar. (Não utilize o comando IF ainda).
void _6()
{
    int number;

    printf("Forneça um número para ser definido se é par (0) ou ímpar (1): \n");
    scanf("%d", &number);

    printf("Resultado para o seu número: %d.\n", number % 2);
}

// 7. Peça ao usuário para digitar uma temperatura em graus Celsius e, em seguida, exiba a temperatura equivalente em graus Fahrenheit.
void _7()
{
    float celsiusTemperature;

    printf("Forneça uma temperatura em Celsius para ser convertida em Fahrenheit: \n");
    scanf("%f", &celsiusTemperature);

    printf("A temperatura %.2f°C é igual a %.2f°F.\n", celsiusTemperature, (celsiusTemperature * 9 / 5) + 32);
}

// 8. Peça ao usuário para digitar três números float e, em seguida, calcule e exiba a média aritmética desses números."
void _8()
{
    float firstResult, secondResult, thirdResult, averageResult;

    printf("Qual foi a nota da primeira prova? \n");
    scanf("%f", &firstResult);

    printf("Qual foi a nota da segunda prova? \n");
    scanf("%f", &secondResult);

    printf("Qual foi a nota da terceira prova? \n");
    scanf("%f", &thirdResult);

    averageResult = (firstResult + secondResult + thirdResult) / 3;
    printf("A média aritmética das suas notas foi: %.2f.\n", averageResult);
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

    printf("\n");
    _8();
    printf("\n");
}
