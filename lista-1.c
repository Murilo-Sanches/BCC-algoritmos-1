#include <stdio.h>

void _1()
{
    printf("Bom dia!\n");
    printf("Estou aprendendo a programar\n");
    printf("Definitivamente não é \"muito\" difícil\n");
}

void _2()
{
    printf("Suas notas são %.2f e %.2f e sua média é %.2f", 5.5, 6.0, (5.5 + 6) / 2);
}

void _3()
{
    printf("Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar %d carros.", 359 % 4);
}

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
