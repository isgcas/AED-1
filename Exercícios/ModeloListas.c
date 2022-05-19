#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void exercicio01();
void exercicio02();
void exercicio03();
void exercicio04();
void exercicio05();
void exercicio06();
void exercicio07();
void exercicio08();
void exercicio09();
void exercicio10();

//variáveis globais vão aqui

void menu()
{
    printf("Isabela Gontijo de Castro - Lista x\n\nExercícios:\n\n");
    printf("1 - Exercício 01:\n");
    printf("2 - Exercício 02:\n");
    printf("3 - Exercício 03:\n");
    printf("4 - Exercício 04:\n");
    printf("5 - Exercício 05:\n");
    printf("6 - Exercício 06:\n");
    printf("7 - Exercício 07:\n");
    printf("8 - Exercício 08:\n");
    printf("9 - Exercício 09:\n");
    printf("10 - Exercício 10:\n");
    printf("0 - End\n");
    printf("\nEscolha:\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int op;

do /*menu*/ {
    menu();
    scanf("%i", &op);

    switch(op)
    {
    case 1:
        exercicio01();
        break;
    case 2:
        exercicio02();
        break;
    case 3:
        exercicio03();
        break;
    case 4:
        exercicio04();
        break;
    case 5:
        exercicio05();
        break;
    case 6:
        exercicio06();
        break;
    case 7:
        exercicio07();
        break;
    case 8:
        exercicio08();
        break;
    case 9:
        exercicio09();
        break;
    case 10:
        exercicio10();
        break;
    case 0:
        break;
    default:
        printf("\nInexistente. Digite outro número.\n");
    }
        if (op!=0) {
        system("PAUSE");
    }

}   while (op!=0);
    return 0;
}

void exercicio01()
{
    printf("Exercício 1:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio02()
{
    printf("Exercício 2:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio03()
{
    printf("Exercício 3:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio04()
{
    printf("Exercício 4:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio05()
{
    printf("Exercício 5:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio06()
{
    printf("Exercício 6:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio07()
{
    printf("Exercício 7:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio08()
{
    printf("Exercício 8:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio09()
{
    printf("Exercício 9:\n");
    printf("Enunciado.\n\n");

//exercicio

}

void exercicio10()
{
    printf("Exercício 10:\n");
    printf("Enunciado.\n\n");

//exercicio

}
