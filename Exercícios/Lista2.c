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
void exercicio06(); //pronto
void exercicio07(); //pronto
void exercicio08(); //pronto
void exercicio09(); //pronto
void exercicio10(); //pronto

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
    printf("\nExercício 1:\n");
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
    printf("\nExercício 2:\n");
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
    printf("\nExercício 3:\n");
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
    printf("\nExercício 4:\n");
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
    printf("\nExercício 5:\n");
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

void exercicio06() //pronto
{
    printf("\nExercício 6:\n");
    printf("Desenvolver um algoritmo que leia três números inteiros: X, Y, Z  e verifica se o número X é divisível por Y e por Z. O algoritmo deverá mostrar as possíveis mensagens:\n- O número é divisível por Y e Z.\n- O número é divisível por Y mas não por Z.\n- O número é divisível por Z mas não por Y.\n- O número não é divisível nem Y nem por Z.\n\n");

    int numX, numY, numZ;

    printf("\nDigite o valor de X:\n");
        scanf("%i", &numX);
    printf("\nDigite o valor de Y:\n");
        scanf("%i", &numY);
    printf("\nDigite o valor de Z:\n");
        scanf("%i", &numZ);

    if (numX%numY==0 && numX%numZ==0) {
        printf("\nX (%i) é divisível por Y (%i) e Z (%i).\n\n",numX,numY,numZ);
    }
    else if (numX%numY==0 && numX%numZ!=0) {
        printf("\nX (%i) é divisível por Y (%i) mas não por Z (%i)\n\n.",numX,numY,numZ);
    }
    else if (numX%numY!=0 && numX%numZ==0) {
        printf("\nX (%i) é divisível por Z (%i) mas não por Y (%i).\n\n",numX,numZ,numY);
    }
    else {
        printf("\nX (%i) não é divisível nem Y (%i) nem por Z (%i).\n\n",numX,numY,numZ);
    }
}

void exercicio07() //pronto
{
    printf("\nExercício 7:\n");
    printf("O número 3025 possui a seguinte característica:\n30+25=55\n55²=3025\nFazer um algoritmo que dado um número de 4 dígitos (verifique se o número pertence a faixa) calcula e escreve se ele possui ou não esta característica.\n\n");

    int numero, first2, last2, soma, potencia;

    printf("Digite um número de 4 digitos\n");
        scanf("%i",&numero);

    if (numero > 999 && numero <10000) {
        first2 = numero/100;
        last2 = numero % 100;

        soma = first2 + last2;
        potencia = pow(soma,2);

        if (potencia == numero) {
            printf("\nO número %i tem a característica descrita:\n%i+%i=%i\n%i²=%i\n\n", numero,first2,last2,soma,soma,potencia);
        }
        else {
            printf("\nO número %i não tem a característica descrita:\n%i+%i=%i\n%i²=%i\n\n",numero,first2,last2,soma,soma,potencia);
        }
    }
    else {
        printf("\nO número não se encontra na faixa desejada.\n\n");
}
}

void exercicio08() //pronto
{
    printf("\nExercício 8:\n");
    printf("Ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista:\n221: Bernardo\n211: Eustáquio\n311: Luiz\n312: Mário\n332: Artur\n\n");

    int codigo;

    printf("\nDigite o código:\n");
        scanf("%i", &codigo);

    switch(codigo){
        case 221:
            printf("%i: Bernardo.\n\n",codigo);
            break;
        case 211:
            printf("%i: Eustáquio.\n\n",codigo);
            break;
        case 311:
            printf("%i: Luiz.\n\n",codigo);
            break;
        case 312:
            printf("%i: Mário.\n\n",codigo);
            break;
        case 332:
            printf("%i: Artur.\n\n",codigo);
            break;
        default:
            printf("Não há um nome associado ao código %i.",codigo);
    }
}

void exercicio09() //pronto
{
    printf("\nExercício 9:\n");
    printf("Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplos: 929, 44, 97379.\nFazer um algoritmo que dado um número de 5 dígitos calcula e escreve se este é ou não palíndromo\n\n");

    int num0, num1, num2, num3, num4, num5, aux, invertido;

    printf("Digite um número de 5 dígitos:\n");
        scanf("%i", &num0);

    if (num0>9999 && num0<100000) {
        num1 = num0/10000;
        aux = num0%10000;

        num2 = aux/1000;
        aux = aux%1000;

        num3 = aux/100;
        aux = aux%100;

        num4 = aux/10;

        num5 = aux%10;

        invertido = (num5*10000)+(num4*1000)+(num3*100)+(num2*10)+(num1*1);

        if (num0==invertido) {
            printf("\nO número %i é palíndromo.\n\n", num0);
        }
        else {
            printf("\nO número %i não é palindromo.\n\n", num0);
        }

    }
    else {
        printf("Número inválido: Não tem o número de dígitos desejado.\n\n");
    }
}

void exercicio10() //pronto
{
    printf("\nExercício 10:\n");
    printf("Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do consumidor: Residencial, Comercial ou Industrial.\n\nA regra para calcular a conta é:\n• Residencial: R$75,00 de taxa + R$3,50 por m³ gastos;\n• Comercial: R$500,00 para os primeiros 80m³ gastos + R$5,50 por m³ gasto acima dos 80m³;\n• Industrial: R$800,00 para os primeiros 100m³ gastos + R$8,00 por m³ gasto acima dos 100m³;\n\nO algoritmo deverá ler a conta do cliente, seu tipo (residencial, comercial ou industrial) e o seu consumo de água em metros cúbicos. Como resultado deverá imprimir o valor a ser pago pelo cliente.\n\n");

    int consumidor;
    float taxa,preco,consumo,total;

    printf("Tipo de consumidor:\n\n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
        scanf("%i", &consumidor);

    switch (consumidor) {
        case 1:
            printf("\nCONSUMO RESIDENCIAL\n\n");
                taxa = 75.00;
                preco = 3.5;

            printf("Informe a quantidade de água consumida em m³:\n");
                scanf("%f",&consumo);

            total = taxa+(consumo*preco);
            printf("\nO total a pagar é: R$%.2f.\n\n", total);
            break;

        case 2:
            printf("\nCONSUMO COMERCIAL\n\n");
                taxa = 500.00;
                preco = 5.5;

            printf("Informe a quantidade de água consumida em m³:\n");
                scanf("%f",&consumo);

            if (consumo > 80.00) {
                total = taxa+ ((consumo-80.00)* preco);
                printf("\nO total a pagar é: R$%.2f.\n\n", total);
            }
            else {
                printf("\nO total a pagar é %.2f.\n\n", taxa);
            }
            break;

        case 3:
            printf("\nCONSUMO INDUSTRIAL\n\n");
                taxa = 800.00;
                preco = 8.00;

            printf("Informe a quantidade de água consumida em m³:\n");
                scanf("%f",&consumo);

            if (consumo > 100.00) {
                total = taxa+((consumo-100.00)*preco);
                printf("\nO total a pagar é: %.2f.\n\n", total);
            }
            else {
                printf("\nO total a pagar é: %.2f.\n\n", taxa);
            }
            break;
        default:
            printf("Opção inválida.\n");
    }
}
