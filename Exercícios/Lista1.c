#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void menu()
{

    printf("Isabela Gontijo de Castro - Lista 1\n\nExerc�cios:\n\n");
    printf("401 - Exerc�cio 4A:\n"); //pronto
    printf("402 - Exerc�cio 4B:\n"); //pronto
    printf("403 - Exerc�cio 4C:\n"); //pronto
    printf("404 - Exerc�cio 4D:\n"); //pronto
    printf("405 - Exerc�cio 4E:\n"); //pronto
    printf("406 - Exerc�cio 4F:\n"); //pronto
    printf("407 - Exerc�cio 4G:\n"); //pronto
    printf("408 - Exerc�cio 4H:\n"); //pronto
    printf("409 - Exerc�cio 4I:\n"); //pronto
    printf("410 - Exerc�cio 4J:\n"); //pronto
    printf("501 - Exerc�cio 501:\n");
    printf("502 - Exerc�cio 502:\n");
    printf("503 - Exerc�cio 503:\n");
    printf("504 - Exerc�cio 504:\n");
    printf("505 - Exerc�cio 505:\n");
    printf("506 - Exerc�cio 506:\n");
    printf("507 - Exerc�cio 507:\n");
    printf("508 - Exerc�cio 508:\n");
    printf("509 - Exerc�cio 509:\n");
    printf("510 - Exerc�cio 510:\n");
    printf("511 - Exerc�cio 511:\n");
    printf("512 - Exerc�cio 512:\n");
    printf("513 - Exerc�cio 513:\n");
    printf("514 - Exerc�cio 514:\n");
    printf("515 - Exerc�cio 515:\n");
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
    case 401:
        exercicio04a();
        break;
    case 402:
        exercicio04b();
        break;
    case 403:
        exercicio04c();
        break;
    case 404:
        exercicio04d();
        break;
    case 405:
        exercicio04e();
        break;
    case 406:
        exercicio04f();
        break;
    case 407:
        exercicio04g();
        break;
    case 408:
        exercicio04h();
        break;
    case 409:
        exercicio04i();
        break;
    case 410:
        exercicio04j();
        break;
    case 501:
        exercicio0501();
        break;
    case 502:
        exercicio0502();
        break;
    case 503:
        exercicio0503();
        break;
    case 504:
        exercicio0504();
        break;
    case 505:
        exercicio0505();
        break;
    case 506:
        exercicio0506();
        break;
    case 507:
        exercicio0507();
        break;
    case 508:
        exercicio0508();
        break;
    case 509:
        exercicio0509();
        break;
    case 510:
        exercicio0510();
        break;
    case 511:
        exercicio0511();
        break;
    case 512:
        exercicio0512();
        break;
    case 513:
        exercicio0513();
        break;
    case 514:
        exercicio0514();
        break;
    case 515:
        exercicio0515();
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

void exercicio04a() //pronto
{
    printf("Exerc�cio 4: Letra A\n");
    printf("Leia um n�mero e imprima seu sucessor.\n\n");

    int num;
    printf("Digite um n�mero para ver o sucessor:\n");
    scanf("%i", &num);

    num++;
    printf("\nO sucessor �: %i\n\n", num);

}

void exercicio04b() //pronto
{
    printf("Exerc�cio 4: Letra B\n");
    printf("Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.\n\n");

    int num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro n�mero para calcular a m�dia: ");
    scanf("%i", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%i", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%i", &num3);
    printf("Digite o quarto n�mero: ");
    scanf("%i", &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("\nA m�dia aritm�tica �: %.2f \n\n", media);

}

void exercicio04c() //pronto
{
    printf("Exerc�cio 4: Letra C\n");
    printf("Fa�a um algoritmo que receba 3 (tr�s) notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.\n\n");

    int num1, num2, num3, peso1, peso2, peso3;
    float media;

    printf("Digite a primeira nota:");
    scanf("%i", &num1);
    printf("Qual o peso desta nota?");
    scanf("%i", &peso1);

    printf("Digite a segunda nota:");
    scanf("%i", &num2);
    printf("Qual o peso desta nota? ");
    scanf("%i", &peso2);

    printf("Digite a terceira nota:");
    scanf("%i", &num3);
    printf("Qual o peso desta nota? ");
    scanf("%i", &peso3);

    media = (num1 + num2 + num3) / (peso1 + peso2 + peso3);
    printf("\nA m�dia ponderada: � %.2f \n\n", media);

}

void exercicio04d() //pronto
{
    printf("Exerc�cio 4: Letra D\n");
    printf("Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).\nF�rmula de convers�o: F = 9/5*C +32\nImplemente uma altera��o neste exerc�cio para verificar o resultado.\n\n");

    float fah, cel;

    printf("Digite a temperatura em Celsius (�C) para calcular seu equivalente em Fahrenheit (�F):");
    scanf("%f", &cel);

    fah = ((9*cel)/5)+32;

    printf("\nTemperatura em Celsius: %.2f\n", cel);
    printf("Temperatura em Fahrenheit: %.2f\n\n", fah);

}

void exercicio04e() //pronto
{
    printf("Exerc�cio 4: Letra E\n");
    printf("Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o novo sal�rio.\n\n");

    float salario, percent, novoSalario;

    printf("Digite o sal�rio anterior ao aumento:");
    scanf("%f", &salario);
    printf("Digite o percentual do aumento:");
    scanf("%f", &percent);

    if (salario<0 && percent<0) {
    printf("N�o � poss�vel calcular o novo sal�rio com um n�mero negativo.");
}
    else {
    novoSalario = salario+(salario*(percent/100));
    printf("\nO novo sal�rio ser� de: %.2f.\n\n", novoSalario);
}

}

void exercicio04f() //pronto
{
    printf("Exerc�cio 4: Letra F\n");
    printf("Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule a �rea de um tri�ngulo.\n\n");

    float b, h, area;

    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &b);
    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &h);

if (b<0 && h<0) {
    printf("N�o � poss�vel calcular a �rea do tri�ngulo com um n�mero negativo.");
}
else {
    area = (b*h)/2;
    printf("\nA �rea do tri�ngulo � %.2f.\n\n", area);
}
}

void exercicio04g() //pronto
{
    printf("Exerc�cio 4: Letra G\n");
    printf("Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ra��o em gramas. Fa�a um algoritmo que receba o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato. Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias.\n\n");

    float racao, racaoGramas, racaoGato, sobra, sobraKG;

    printf("Digite o peso em kg do saco de Ra��o:");
    scanf("%f", &racao);
    racaoGramas = racao*1000;

    printf("Digite a quantidade fornecida de Ra��o para o seu gato (em g):");
    scanf("%f", &racaoGato);

    racaoGato *= (2*5);
    sobra = racaoGramas-racaoGato;
    sobraKG = sobra/1000;

    printf("Restar� %.2f kg de Ra��o ap�s 5 dias.\n\n", sobraKG);

}

void exercicio04h() //pronto
{
    printf("Exerc�cio 4: Letra H\n");
    printf("Ler dois n�meros inteiros para as vari�veis a e b. Trocar o valor de b com o de a, e imprimi-los.\n\n");

    int a, b, temp;
    printf("Digite o valor original de A:");
    scanf("%i", &a);
    printf("Digite o valor original de B:");
    scanf("%i", &b);

    temp = a;

    printf("\nOriginalmente: a = %i\nb = %i\n\n", a, b);
    a = b;
    b = temp;
    printf("Ap�s troca: a = %i\nb = %i\n\n", a, b);

}

void exercicio04i() //pronto
{
    printf("Exerc�cio 4: Letra I\n");
    printf("Leia um n�mero e imprima o resto da divis�o por 7. Utilize o comando resto (a,b) na linguagem C (a%b).\n\n");

    int num, resto;
    printf("Digite um n�mero: ");
    scanf("%i", &num);

    resto = num%7;
    printf("O resto da divis�o por 7 � %i\n\n", resto);

}

void exercicio04j() //pronto
{
    printf("Exerc�cio 4: Letra J\n");
    printf("Calcular a soma dos termos de uma PA lendo os valores do primeiro termo, do segundo termo e do n�mero de termos.\nF�rmulas: Sn=n*(a1+an)/2, onde Sn � a soma dos termos, a1 o primeiro termo e an o �ltimo termo.\nO n-�simo termo de uma progress�o aritm�tica, pode ser obtido por meio da formula: an =a1+(n 1).r, onde r � a raz�o da PA.\n\n");

    int a1, a2, an, n, r, sn;

    printf("Digite o primeiro termo: ");
    scanf("%i", &a1);
    printf("Digite o segundo termo: ");
    scanf("%i", &a2);

    r = a2-a1;

    printf("Digite o valor do n�mero de termos: ");
    scanf("%i", &n);

    an = a1+((n-1)*r);
    sn = (n*(a1+an))/2;

    printf("A soma dos termos da P.A. �: %i\n\n", sn);

}

void exercicio0501() //pronto
{
    printf("Exerc�cio 5 - N�mero 1:\n");
    printf("Ler um valor inteiro do teclado e dizer se � par.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero % 2 == 0) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0502() //pronto
{
    printf("Exerc�cio 5 - N�mero 2:\n");
    printf("Ler um valor inteiro do teclado e dizer se � �mpar.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero % 2 != 0) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0503() //pronto
{
    printf("Exerc�cio 5 - N�mero 3:\n");
    printf("Ler um valor inteiro do teclado e dizer se �mpar e maior que 100.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero % 2 != 0 && numero > 100) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0504() //pronto
{
    printf("Exerc�cio 5 - N�mero 4:\n");
    printf("Ler um valor inteiro do teclado e dizer se � par e menor que 100, ou �mpar e maior que 100.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero % 2 == 0 && numero < 100) {
    printf("1\n\n");
}
    else if (numero % 2 != 0 && numero > 100) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0505() //pronto
{
    printf("Exerc�cio 5 - N�mero 5:\n");
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero > 25 && numero < 75) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0506() //pronto
{
    printf("Exerc�cio 5 - N�mero 6:\n");
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if (numero >= 25 && numero <= 75) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0507() //falta testar
{
    printf("Exerc�cio 5 - N�mero 7:\n");
    printf("Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99].\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%i", &numero);

    if ((numero >= 15 && numero <= 45) || (numero >= 66 && numero <= 99)) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0508() //falta testar
{
    printf("Exerc�cio 5 - N�mero 8:\n");
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro � par e o segundo � �mpar.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &numero2);

    if (numero1 % 2 == 0 && numero2 % 2 != 0) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0509() //falta testar
{
    printf("Exerc�cio 5 - N�mero 9:\n");
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro � par e positivo, e o segundo � �mpar e negativo.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &numero2);

    if ((numero1 % 2 == 0 && numero1 > 0) && (numero2 % 2 != 0 && numero2 < 0)) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0510() //falta testar
{
    printf("Exerc�cio 5 - N�mero 10:\n");
    printf("Ler dois valores reais do teclado e dizer se o primeiro � maior, menor ou igual ao segundo.\n\n");

    int numero1, numero2;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &numero2);

    if (numero1 > numero2) {
    printf("O primeiro n�mero � maior.\n\n");
}
    else if (numero1 < numero2) {
    printf("O segundo n�mero � maior.\n\n");
}
    else {
    printf("Os n�meros s�o iguais.\n\n");
}
}

void exercicio0511() //falta testar
{
    printf("Exerc�cio 5 - N�mero 11:\n");
    printf("Ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2, numero3;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &numero2);
    printf("Digite o terceiro n�mero:\n");
    scanf("%i", &numero3);

    if ((numero1 >= numero2 && numero1 <= numero3) || (numero1 >= numero3 && numero1 <= numero2)) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0512() //falta testar
{
    printf("Exerc�cio 5 - N�mero 12:\n");
    printf("Ler tr�s valores reais do teclado e dizer se o primeiro n�o est� entre os outros dois.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2, numero3;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &numero2);
    printf("Digite o terceiro n�mero:\n");
    scanf("%i", &numero3);

    if ((numero1 >= numero2 && numero1 <= numero3) || (numero1 >= numero3 && numero1 <= numero2)) {
    printf("0\n\n");
}
    else {
    printf("1\n\n");
}
}

void exercicio0513() //falta testar
{
    printf("Exerc�cio 5 - N�mero 13:\n");
    printf("Ler tr�s valores literais (caracteres) do teclado e dizer se o primeiro est� entre os outros dois.\n1: Verdadeiro\n0: Falso.\n\n");

    char char1, char2, char3;

    printf("Digite o primeiro caractere:\n");
    scanf(" %c", &char1);
    printf("Digite o segundo caractere:\n");
    scanf(" %c", &char2);
    printf("Digite o terceiro caractere:\n");
    scanf(" %c", &char3);

    if ((char1 > char2 && char1 < char3) || (char1 > char3 && char1 < char2)) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0514() //falta testar
{
    printf("Exerc�cio 5 - N�mero 14:\n");
    printf("Ler tr�s valores literais (caracteres) do teclado e dizer se est�o em ordem crescente lexicograficamente.\n1: Verdadeiro\n0: Falso.\n\n");

    char char1, char2, char3;

    printf("Digite o primeiro caractere:\n");
    scanf(" %c", &char1);
    printf("Digite o segundo caractere:\n");
    scanf(" %c", &char2);
    printf("Digite o terceiro caractere:\n");
    scanf(" %c", &char3);

    if ((char1 < char2 && char1 < char3) || (char1 < char3 && char1 < char2)) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}

void exercicio0515() //falta testar
{
    printf("Exerc�cio 5 - N�mero 15:\n");
    printf("Ler um valor literal (caractere) do teclado e dizer se � uma letra mai�scula.\n1: Verdadeiro\n0: Falso.\n\n");

    char char1, char1Upper;

    printf("Digite o caractere:\n");
    scanf(" %c", &char1);

    char1Upper = toupper(char1);

    if (char1 == char1Upper) {
    printf("1\n\n");
}
    else {
    printf("0\n\n");
}
}
