#include <stdio.h>

/**
 * 1 - Escreva um programa que exibe a mensagem:
 * Bom dia!
 * Estou aprendendo a programar
 * Definitivamente não é "muito" difícil
 */
void _1()
{
    printf("Bom dia!\n");
    printf("Estou aprendendo a programar\n");
    printf("Definitivamente não é \"muito\" difícil\n");
}

/**
 * 2 - Escreva um programa que exibe na tela a seguinte mensagem:
 * Suas notas são ___ e ____ e sua média é ____
 * (substituindo a parte sublinhada por três valores, sendo que o último é calculado).
 */
void _2()
{
    printf("Suas notas são %.2f e %.2f e sua média é %.2f", 5.5, 6.0, (5.5 + 6) / 2);
}

/**
 * 3 - Escreva um programa que realiza este cálculo e exibe o valor correto com a mensagem na tela:
 * Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar ___ carros.
 */
void _3()
{
    printf("Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar %d carros.", 359 % 4);
}

/**
 * 4 - Exiba as seguintes mensagens na tela, fazendo os cálculos necessários pelo programa:
 * Eu tenho um círculo de raio 5.
 * Portanto o diâmetro é ___
 * A área é ___
 * E a medida da circunferência é ___
 */
void _4()
{
    printf("Eu tenho um círculo de raio 5.\n");
    printf("Portanto o diâmetro é %f.\n", 2.0 * 5);
    printf("A área é %f.\n", 3.14 * (5 * 5));
    printf("E a medida da circunferência é %f.\n", 2 * 3.14 * 5);
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
}
