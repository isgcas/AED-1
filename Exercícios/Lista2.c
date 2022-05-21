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
    printf("Isabela Gontijo de Castro - Lista 2\n\nExerc�cios:\n\n");
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
    printf("Fazer um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero e par ou �mpar.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero%2 == 0) {
        printf("O n�mero � par.\n\n");
    }
    else {
        printf("O n�mero � �mpar.\n\n");
    }
}

void exercicio02() //pronto
{
    printf("\nExerc�cio 2:\n");
    printf("Fazer um algoritmo que pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da m�dia do aluno, uma mensagem de APROVADO, caso a m�dia seja igual ou superior a 6, ou a mensagem de REPROVADO, caso contr�rio.\n\n");

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
        printf("\nNotas: %.2f  %.2f  %.2f\nM�dia: %.2f\n%s est� APROVADO.\n\n", nota1, nota2, nota3, media, nomeAluno);
    }
    else {
        printf("\nNotas: %.2f  %.2f  %.2f\nM�dia: %.2f\n%s est� REPROVADO.\n\n", nota1, nota2, nota3, media, nomeAluno);
    }
}

void exercicio03() //pronto
{
    printf("\nExerc�cio 3:\n");
    printf("Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado s�lido, l�quido ou gasoso.\n\n");

    float temperatura;

    printf("Digite a temperatura da �gua (em Celsius):\n");
        scanf("%f", &temperatura);

    if (temperatura <= 0) {
        printf("\nCom a temperatura de %.2f�C, a �gua est� no estado S�LIDO.\n\n", temperatura);
    }
    else if (temperatura > 0 || temperatura <= 100) {
        printf("\nCom a temperatura de %.2f�C, a �gua est� no estado L�QUIDO.\n\n", temperatura);
    }
    else {
        printf("\nCom a temperatura de %.2f�C, a �gua est� no estado GASOSO.", temperatura);
    }
}

void exercicio04() //pronto
{
    printf("\nExerc�cio 4:\n");
    printf("Leia um valor X e se ele for menor que 0 avalie Y = x�+ 4. Se ele for maior que 0 avalie x�-3 e se ele for igual a 0 de uma mensagem de erro.\n\n");

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
        printf("\nERRO - O valor de X n�o deve ser 0.\n\n");
    }
}

void exercicio05() //pronto
{
    printf("\nExerc�cio 5:\n");
    printf("Construa um algoritmo que receba como entrada tr�s valores (A, B e C). Ap�s o processamento o menor valor dever� estar em A, o maior valor em C e o valor intermedi�rio em B. Imprima A, B e C.\n\n");

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
            printf("Erro- Os valores n�o podem ser iguais.\n\nDigite o primeiro valor:\n");
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
    printf("\nExerc�cio 6:\n");
    printf("Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z  e verifica se o n�mero X � divis�vel por Y e por Z. O algoritmo dever� mostrar as poss�veis mensagens:\n- O n�mero � divis�vel por Y e Z.\n- O n�mero � divis�vel por Y mas n�o por Z.\n- O n�mero � divis�vel por Z mas n�o por Y.\n- O n�mero n�o � divis�vel nem Y nem por Z.\n\n");

    int numX, numY, numZ;

    printf("\nDigite o valor de X:\n");
        scanf("%i", &numX);
    printf("\nDigite o valor de Y:\n");
        scanf("%i", &numY);
    printf("\nDigite o valor de Z:\n");
        scanf("%i", &numZ);

    if (numX%numY==0 && numX%numZ==0) {
        printf("\nX (%i) � divis�vel por Y (%i) e Z (%i).\n\n",numX,numY,numZ);
    }
    else if (numX%numY==0 && numX%numZ!=0) {
        printf("\nX (%i) � divis�vel por Y (%i) mas n�o por Z (%i)\n\n.",numX,numY,numZ);
    }
    else if (numX%numY!=0 && numX%numZ==0) {
        printf("\nX (%i) � divis�vel por Z (%i) mas n�o por Y (%i).\n\n",numX,numZ,numY);
    }
    else {
        printf("\nX (%i) n�o � divis�vel nem Y (%i) nem por Z (%i).\n\n",numX,numY,numZ);
    }
}

void exercicio07() //pronto
{
    printf("\nExerc�cio 7:\n");
    printf("O n�mero 3025 possui a seguinte caracter�stica:\n30+25=55\n55�=3025\nFazer um algoritmo que dado um n�mero de 4 d�gitos (verifique se o n�mero pertence a faixa) calcula e escreve se ele possui ou n�o esta caracter�stica.\n\n");

    int numero, first2, last2, soma, potencia;

    printf("Digite um n�mero de 4 digitos\n");
        scanf("%i",&numero);

    if (numero > 999 && numero <10000) {
        first2 = numero/100;
        last2 = numero % 100;

        soma = first2 + last2;
        potencia = pow(soma,2);

        if (potencia == numero) {
            printf("\nO n�mero %i tem a caracter�stica descrita:\n%i+%i=%i\n%i�=%i\n\n", numero,first2,last2,soma,soma,potencia);
        }
        else {
            printf("\nO n�mero %i n�o tem a caracter�stica descrita:\n%i+%i=%i\n%i�=%i\n\n",numero,first2,last2,soma,soma,potencia);
        }
    }
    else {
        printf("\nO n�mero n�o se encontra na faixa desejada.\n\n");
}
}

void exercicio08() //pronto
{
    printf("\nExerc�cio 8:\n");
    printf("Ler um c�digo do teclado e  mostrar o nome correspondente, de acordo com a lista:\n221: Bernardo\n211: Eust�quio\n311: Luiz\n312: M�rio\n332: Artur\n\n");

    int codigo;

    printf("\nDigite o c�digo:\n");
        scanf("%i", &codigo);

    switch(codigo){
        case 221:
            printf("%i: Bernardo.\n\n",codigo);
            break;
        case 211:
            printf("%i: Eust�quio.\n\n",codigo);
            break;
        case 311:
            printf("%i: Luiz.\n\n",codigo);
            break;
        case 312:
            printf("%i: M�rio.\n\n",codigo);
            break;
        case 332:
            printf("%i: Artur.\n\n",codigo);
            break;
        default:
            printf("N�o h� um nome associado ao c�digo %i.",codigo);
    }
}

void exercicio09() //pronto
{
    printf("\nExerc�cio 9:\n");
    printf("N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplos: 929, 44, 97379.\nFazer um algoritmo que dado um n�mero de 5 d�gitos calcula e escreve se este � ou n�o pal�ndromo\n\n");

    int num0, num1, num2, num3, num4, num5, aux, invertido;

    printf("Digite um n�mero de 5 d�gitos:\n");
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
            printf("\nO n�mero %i � pal�ndromo.\n\n", num0);
        }
        else {
            printf("\nO n�mero %i n�o � palindromo.\n\n", num0);
        }

    }
    else {
        printf("N�mero inv�lido: N�o tem o n�mero de d�gitos desejado.\n\n");
    }
}

void exercicio10() //pronto
{
    printf("\nExerc�cio 10:\n");
    printf("Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo do tipo do consumidor: Residencial, Comercial ou Industrial.\n\nA regra para calcular a conta �:\n� Residencial: R$75,00 de taxa + R$3,50 por m� gastos;\n� Comercial: R$500,00 para os primeiros 80m� gastos + R$5,50 por m� gasto acima dos 80m�;\n� Industrial: R$800,00 para os primeiros 100m� gastos + R$8,00 por m� gasto acima dos 100m�;\n\nO algoritmo dever� ler a conta do cliente, seu tipo (residencial, comercial ou industrial) e o seu consumo de �gua em metros c�bicos. Como resultado dever� imprimir o valor a ser pago pelo cliente.\n\n");

    int consumidor;
    float taxa,preco,consumo,total;

    printf("Tipo de consumidor:\n\n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
        scanf("%i", &consumidor);

    switch (consumidor) {
        case 1:
            printf("\nCONSUMO RESIDENCIAL\n\n");
                taxa = 75.00;
                preco = 3.5;

            printf("Informe a quantidade de �gua consumida em m�:\n");
                scanf("%f",&consumo);

            total = taxa+(consumo*preco);
            printf("\nO total a pagar �: R$%.2f.\n\n", total);
            break;

        case 2:
            printf("\nCONSUMO COMERCIAL\n\n");
                taxa = 500.00;
                preco = 5.5;

            printf("Informe a quantidade de �gua consumida em m�:\n");
                scanf("%f",&consumo);

            if (consumo > 80.00) {
                total = taxa+ ((consumo-80.00)* preco);
                printf("\nO total a pagar �: R$%.2f.\n\n", total);
            }
            else {
                printf("\nO total a pagar � %.2f.\n\n", taxa);
            }
            break;

        case 3:
            printf("\nCONSUMO INDUSTRIAL\n\n");
                taxa = 800.00;
                preco = 8.00;

            printf("Informe a quantidade de �gua consumida em m�:\n");
                scanf("%f",&consumo);

            if (consumo > 100.00) {
                total = taxa+((consumo-100.00)*preco);
                printf("\nO total a pagar �: %.2f.\n\n", total);
            }
            else {
                printf("\nO total a pagar �: %.2f.\n\n", taxa);
            }
            break;
        default:
            printf("Op��o inv�lida.\n");
    }
}
