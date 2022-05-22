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
    printf("Isabela Gontijo de Castro - Lista 3\n\nExerc�cios:\n\n");
    printf("1 - Exerc�cio 01:\n");
    printf("2 - Exerc�cio 02:\n");
    printf("3 - Exerc�cio 03:\n");
    printf("4 - Exerc�cio 04:\n");
    printf("5 - Exerc�cio 05:\n");
    printf("6 - Exerc�cio 06:\n");
    printf("7 - Exerc�cio 07:\n");
    printf("8 - Exerc�cio 08:\n");
    printf("9 - Exerc�cio 09:\n");
    printf("10 - Exerc�cio 10:\n");
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
        printf("\nInexistente. Digite outro n�mero.\n");
    }
        if (op!=0) {
        system("PAUSE");
    }

}   while (op!=0);
    return 0;
}

void exercicio01() //pronto
{
    printf("\nExerc�cio 1:\n");
    printf("Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima a quantidade de n�meros pares (QPares) e a quantidade de n�meros �mpares (QImpares) lidos. Admita que o valor 9999 � utilizado como sentinela (FLAG) para fim de leitura.\nEx.:1, 2, 3, 4, 5, 9999 =>Pares=2 �mpares=3\n\n");

    int numero, QPar, QImpar;
        QPar = 0;
        QImpar = 0;

    while   (numero != 9999) {
        printf("Digite o n�mero:\n");
            scanf("%d", &numero);

        if (numero % 2 == 0) {
            QPar += 1;
        }
        else {
            QImpar += 1;
        }
    }

  printf("\nPares = %i\n�mpares = %i", QPar, QImpar);

}

void exercicio02() //pronto
{
    printf("\nExerc�cio 2:\n");
    printf("Fa�a um programa que leia um conjunto indeterminado de n�meros inteiros positivos e imprima o maior, o menor e a m�dia aritm�tica desse conjunto de dados. (Flag-1).\nExecute este programa para os seguintes valores:\n1:  1,2,3,-1\n2:  3,2,1,-1\n3:  1,3,2,-1\n\n");

    int maior, menor, count;
    float media=0, numero;

    printf("Digite um n�mero:\n");
        scanf("%f", &numero);

    count = 1;
    maior = numero;
    menor = numero;
    media += numero;

    while (numero!=-1) {
        printf("Digite um n�mero:\n");
            scanf("%f", &numero);
        media += numero;

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor && numero != -1) {
            menor = numero;
        }

        count++;
    }

    media /= count;
    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("M�dia: %.2f\n\n", media);

}

void exercicio03() //pronto
{
    printf("\nExerc�cio 3:\n");
    printf("Escrever um algoritmo para calcular e imprimir o fatorial de um n�mero lido do teclado.\nEx. Fatorial de 5! = 5x4x3x2x1 = 120\n\n");

    int num, fat;

    printf("Digite o n�mero:\n");
        scanf("%d", &num);

    if (num>0) {
        for (fat = 1; num > 1; num--) {
            fat *= num;
        }
        printf("\nFatorial: %d\n\n", fat);
    }
    else {
        printf("N�o h� fatorial de n�meros negativos.");
    }
}

void exercicio04() //pronto
{
    printf("\nExerc�cio 4:\n");
    printf("Calcule o valor da seguinte s�rie lida a quantidade de termos:\nS = 1 - (1/(3�)) + (1/(5�)) - (1/(7�)) + (1/(9�))...\n\n");

    int count=0, termos;
    float serie, denominador;

    serie = 1;

    printf("Quantidade de termos:\n");
        scanf("%d", &termos);

    denominador = pow((3 + (2 * count)), 3);

    for (count = 0; count <= termos; count++) {
        if (count % 2 == 0) {
            serie -= (1 / denominador);
        }
        else {
            serie += (1 / denominador);
        }
    }

    printf("O valor da s�rie �: %.2f\n\n", serie);
}

void exercicio05() //pronto
{
    printf("\nExerc�cio 5:\n");
    printf("A s�rie de fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...\nEscreva um algoritmo que pe�a um n�mero N maior que 2. Gere e imprima a s�rie at� este n-�simo termo.\n\n");

    int a1, a2, an, termos, i;
    a1 = 0;
    a2 = 1;
    an = 1;

    printf("\nDigite o n�mero de termos:\n");
        scanf("%d", &termos);

    if (termos > 2) {
        printf("%d %d ", a1, a2);

        for (i = 1; i <= termos; i++) {
            an = a2 + a1;
            a1 = a2;
            a2 = an;
            printf("%d ", an);
        }
    }
    else {
        printf("Necess�rio um n�mero maior que 2.");
    }
}

void exercicio06() //pronto
{
    printf("\nExerc�cio 6:\n");
    printf("Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N dever� se lido do teclado.\nS = + (1/N) - (2/N-1) + (3/n-2) - (4/n-3)+ ...(N/1)\n\n");

    int count;
    float S, N, numerador, denominador;

    printf("Digite um n�mero:\n");
        scanf("%f", &N);
    count = 1;
    numerador = 1;
    denominador = N;

    while (denominador >= 1) {
        if (count % 2 == 1) {
            S += numerador / denominador;
        }
        else {
            S -= numerador / denominador;
        }
        numerador++;
        denominador--;
        count++;
    }
    printf("S = %.2f\n\n", S);

}

void exercicio07() //pronto
{
    printf("\nExerc�cio 7:\n");
    printf("N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplo: 929, 44, 97379.\nFazer um algoritmo que imprima todos os n�meros pal�ndromos de 10000 a 99999.\n\n");

    int dig1, dig2, dig3, dig4, dig5, numero, A, inverter, i, count;

    for (i = 10000; i <= 99999; i++) {
        numero = i;

        dig1 = numero / 10000;
        A = numero % 10000;

        dig2 = A / 1000;
        A = A % 1000;

        dig3 = A / 100;
        A = A % 100;

        dig4 = A / 10;

        dig5 = A % 10;

        inverter = (dig5 * 10000) + (dig4 * 1000) + (dig3 * 100) + (dig2 * 10) + dig1;

        if (numero == inverter) {
            printf("%d ", numero);
        count++;
        }
    }
    printf("\nQuantidade de n�meros pal�dromos: %d\n\n", count);
}

void exercicio08() //pronto
{
    printf("\nExerc�cio 8:\n");
    printf("O n�mero 3025 possui a seguinte caracter�stica:\n30 + 25 = 55\n55� = 3025\nQuantos e quais s�o os n�meros de 4 d�gitos possuem essa caracter�stica?\n\n");

    int numero, parte1, parte2, parte3, parte4, auxiliar, primeiraParte, segundaParte, soma, calculo, count;
        count = 0;

    for (int i = 1000; i <= 9999; i++) {
        numero = i;

        parte1 = numero / 1000;
        auxiliar = numero % 1000;

        parte2 = auxiliar / 100;
        auxiliar = auxiliar % 100;

        parte3 = auxiliar / 10;
        parte4 = auxiliar % 10;

        primeiraParte = (parte1 * 10) + parte2;
        segundaParte = (parte3 * 10) + parte4;

        soma = primeiraParte + segundaParte;
        calculo = pow(soma, 2);

        if (calculo == numero) {
            printf("%d ", numero);
            count++;
        }
    }

    printf("\n\nQuantidade de n�meros com a caracter�stica descrita: %d\n\n", count);

}

void exercicio09() //pronto
{
    printf("\nExerc�cio 9:\n");
    printf("Fa�a um programa para jogo de cara ou coroa.\nNeste caso, o jogador escolhe coroa (0 - cara e 1 - coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.\n\n");

    int num, aleatorio, count;
    count = 0;

    printf("Escolha 0 para cara ou 1 para coroa:\n");
        scanf("%i",&num);

    srand(time(NULL));

    for (int n = 0; n < 10; n++ ) {
        aleatorio = (rand() % 2);
            if (num ==  aleatorio){
                count++;
            }
    }

    printf("Ganhou %i vezes!\n\n", count);

}

void exercicio10() //pronto
{
    printf("\nExerc�cio 10:\n");
    printf("Fa�a um programa para adivinhar um n�mero escolhido pelo usu�rio, entre 1 e 1023.\nIndique ao final quantas tentativas foram necess�rias. O programa dever� localizar o n�mero escolhido pelo usu�rio em no m�ximo 10 tentativas!\nUtilize a seguinte proposta. Pegue o valor intermedi�rio e pergunte ao usu�rio se o n�mero � igual(=), maior(>) ou menor(<) que o que foi escolhido.\nSe for (=) implica que acertou! Se for maior escolha agora o n�mero intermedi�rio entre o que foi perguntado e o �ltimo, caso contr�rio escolha o intermedi�rio entre o primeiro e o que foi perguntado, seguindo assim at� acertar!\nVerifique que voc� conseguir� acertar qualquer n�mero em no m�ximo 10 tentativas!!!\n\n");

    int aleatorio, ultimo, primeiro, tentativas;
    char resp;
        ultimo=1023;
        primeiro=1;
        tentativas=0;

    do {
        aleatorio = primeiro + (ultimo-primeiro) /2;
        tentativas ++;
        printf("\nTentativa n�mero: %d\nO n�mero que voc� escolheu � maior (>), menor (<) ou igual (=) a %d?:\n", tentativas, aleatorio);
            scanf(" %c",&resp);
        switch (resp){
            case '=':
               printf("\nSucesso! O n�mero era: %d", aleatorio);
               break;
            case '>':
               primeiro = aleatorio + 1;
               break;
            case '<':
               ultimo = aleatorio - 1;
               break;
        }
    } while(resp != '=');
}
