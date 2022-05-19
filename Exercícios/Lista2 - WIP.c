#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void exercicio01(); //pronto
void exercicio02(); //pronto
void exercicio03(); //pronto
void exercicio04(); //pronto
void exercicio05(); //pronto
void exercicio06();
void exercicio07();
void exercicio08();
void exercicio09();
void exercicio10();

//variáveis globais vão aqui

void menu()
{
    printf("Isabela Gontijo de Castro - Lista 2\n\nExercícios:\n\n");
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

void exercicio01() //pronto
{
    printf("Exercício 1:\n");
    printf("Fazer um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número e par ou ímpar.\n\n");

    int numero;

    printf("Digite um número:\n");
    scanf("%i", &numero);

    if (numero%2 == 0) {
        printf("O número é par.\n\n");
    }
    else {
        printf("O número é ímpar.\n\n");
    }
}

void exercicio02() //pronto
{
    printf("Exercício 2:\n");
    printf("Fazer um algoritmo que peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da média do aluno, uma mensagem de APROVADO, caso a média seja igual ou superior a 6, ou a mensagem de REPROVADO, caso contrário.\n\n");

    char nomeAluno[20];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno:\n");
        scanf("%s", &nomeAluno);
    printf("\nDigite a primeira nota:\n");
        scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
    printf("Digite a terceira nota:\n");
        scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    if (media >= 6) {
        printf("\nNotas: %.2f  %.2f  %.2f\nMédia: %.2f\n%s está APROVADO.\n\n", nota1, nota2, nota3, media, nomeAluno);
    }
    else {
        printf("\nNotas: %.2f  %.2f  %.2f\nMédia: %.2f\n%s está REPROVADO.\n\n", nota1, nota2, nota3, media, nomeAluno);
    }
}

void exercicio03() //pronto
{
    printf("Exercício 3:\n");
    printf("Fazer um algoritmo que leia a temperatura da água e mostre se está no estado sólido, líquido ou gasoso.\n\n");

    float temperatura;

    printf("Digite a temperatura da água (em Celsius):\n");
        scanf("%f", &temperatura);

    if (temperatura <= 0) {
        printf("\nCom a temperatura de %.2f°C, a água está no estado SÓLIDO.\n\n", temperatura);
    }
    else if (temperatura > 0 || temperatura <= 100) {
        printf("\nCom a temperatura de %.2f°C, a água está no estado LÍQUIDO.\n\n", temperatura);
    }
    else {
        printf("\nCom a temperatura de %.2f°C, a água está no estado GASOSO.", temperatura);
    }
}

void exercicio04() //pronto
{
    printf("Exercício 4:\n");
    printf("Leia um valor X e se ele for menor que 0 avalie Y = x²+ 4. Se ele for maior que 0 avalie x³-3 e se ele for igual a 0 de uma mensagem de erro.\n\n");

    float valorX, valorY;

    printf("\nDigite um valor para X:\n");
        scanf("%f", &valorX);

    if (valorX<0) {
        valorY = pow(valorX,2)+4;
        printf("\nY = %.2f\n\n", valorY);
    }
    else if (valorX>0) {
        valorY = pow(valorX,3)-3;
        printf("\nY = %.2f\n\n", valorY);
    }
    else {
        printf("\nERRO - O valor de X não deve ser 0.\n\n");
    }
}

void exercicio05() //pronto
{
    printf("Exercício 5:\n");
    printf("Construa um algoritmo que receba como entrada três valores (A, B e C). Após o processamento o menor valor deverá estar em A, o maior valor em C e o valor intermediário em B. Imprima A, B e C.\n\n");

    int A, B, C, menor, meio, maior;

//possibilidades: ABC,ACB,BAC,BCA,CAB,CBA

    printf("\nDigite o primeiro valor:\n");
        scanf("%i", &A);
    printf("Digite o segundo valor:\n");
        scanf("%i", &B);
    printf("Digite o terceiro valor:\n");
        scanf("%i", &C);

    if(A==B || A==C || B==C) {
        do {
            printf("Erro- Os valores não podem ser iguais.\n\nDigite o primeiro valor:\n");
                scanf("%i", &A);
            printf("Digite o segundo valor:\n");
                scanf("%i", &B);
            printf("Digite o terceiro valor:\n");
                scanf("%i", &C);
        } while (A==B || A==C || B==C);
    }

    if(A>B && A>C) {
        if(B>C) {
            maior = A;
            meio = B;
            menor = C;
        }
        if(C>B){
            maior = A;
            meio = C;
            menor = B;
        }
    }
    else if(B>A && B>C) {
        if(A>C){
            maior = B;
            meio = A;
            menor = C;
        }
        if(C>A) {
            maior = B;
            meio = C;
            menor = A;
        }
    }
    else if(C>A && C>B) {
        if(A>B) {
            maior = C;
            meio = A;
            menor = B;
        }
        if(B>A) {
            maior = C;
            meio = B;
            menor = A;
        }
    }

    A = menor;
    B = meio;
    C = maior;

    printf("\nA = %i\nB = %i\nC = %i\n\n", A, B, C);

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
