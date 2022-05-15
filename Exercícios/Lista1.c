#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void menu()
{

    printf("Isabela Gontijo de Castro - Lista 1\n\nExercícios:\n\n");
    printf("401 - Exercício 4A:\n"); //pronto
    printf("402 - Exercício 4B:\n"); //pronto
    printf("403 - Exercício 4C:\n"); //pronto
    printf("404 - Exercício 4D:\n"); //pronto
    printf("405 - Exercício 4E:\n"); //pronto
    printf("406 - Exercício 4F:\n"); //pronto
    printf("407 - Exercício 4G:\n"); //pronto
    printf("408 - Exercício 4H:\n"); //pronto
    printf("409 - Exercício 4I:\n"); //pronto
    printf("410 - Exercício 4J:\n"); //pronto
    printf("501 - Exercício 501:\n");
    printf("502 - Exercício 502:\n");
    printf("503 - Exercício 503:\n");
    printf("504 - Exercício 504:\n");
    printf("505 - Exercício 505:\n");
    printf("506 - Exercício 506:\n");
    printf("507 - Exercício 507:\n");
    printf("508 - Exercício 508:\n");
    printf("509 - Exercício 509:\n");
    printf("510 - Exercício 510:\n");
    printf("511 - Exercício 511:\n");
    printf("512 - Exercício 512:\n");
    printf("513 - Exercício 513:\n");
    printf("514 - Exercício 514:\n");
    printf("515 - Exercício 515:\n");
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
        printf("\nInexistente. Digite outro número.\n");
    }
        if (op!=0) {
        system("PAUSE");
    }

}   while (op!=0);
    return 0;
}

void exercicio04a() //pronto
{
    printf("Exercício 4: Letra A\n");
    printf("Leia um número e imprima seu sucessor.\n\n");

    int num;
    printf("Digite um número para ver o sucessor:\n");
    scanf("%i", &num);

    num++;
    printf("\nO sucessor é: %i\n\n", num);

}

void exercicio04b() //pronto
{
    printf("Exercício 4: Letra B\n");
    printf("Calcule a média aritmética de quatro números inteiros dados.\n\n");

    int num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro número para calcular a média: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    printf("Digite o terceiro número: ");
    scanf("%i", &num3);
    printf("Digite o quarto número: ");
    scanf("%i", &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("\nA média aritmética é: %.2f \n\n", media);

}

void exercicio04c() //pronto
{
    printf("Exercício 4: Letra C\n");
    printf("Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.\n\n");

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
    printf("\nA média ponderada: é %.2f \n\n", media);

}

void exercicio04d() //pronto
{
    printf("Exercício 4: Letra D\n");
    printf("Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).\nFórmula de conversão: F = 9/5*C +32\nImplemente uma alteração neste exercício para verificar o resultado.\n\n");

    float fah, cel;

    printf("Digite a temperatura em Celsius (ºC) para calcular seu equivalente em Fahrenheit (ºF):");
    scanf("%f", &cel);

    fah = ((9*cel)/5)+32;

    printf("\nTemperatura em Celsius: %.2f\n", cel);
    printf("Temperatura em Fahrenheit: %.2f\n\n", fah);

}

void exercicio04e() //pronto
{
    printf("Exercício 4: Letra E\n");
    printf("Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.\n\n");

    float salario, percent, novoSalario;

    printf("Digite o salário anterior ao aumento:");
    scanf("%f", &salario);
    printf("Digite o percentual do aumento:");
    scanf("%f", &percent);

    if (salario<0 && percent<0) {
    printf("Não é possível calcular o novo salário com um número negativo.");
}
    else {
    novoSalario = salario+(salario*(percent/100));
    printf("\nO novo salário será de: %.2f.\n\n", novoSalario);
}

}

void exercicio04f() //pronto
{
    printf("Exercício 4: Letra F\n");
    printf("Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triângulo.\n\n");

    float b, h, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &b);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &h);

if (b<0 && h<0) {
    printf("Não é possível calcular a área do triângulo com um número negativo.");
}
else {
    area = (b*h)/2;
    printf("\nA área do triângulo é %.2f.\n\n", area);
}
}

void exercicio04g() //pronto
{
    printf("Exercício 4: Letra G\n");
    printf("Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas. Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias.\n\n");

    float racao, racaoGramas, racaoGato, sobra, sobraKG;

    printf("Digite o peso em kg do saco de Ração:");
    scanf("%f", &racao);
    racaoGramas = racao*1000;

    printf("Digite a quantidade fornecida de Ração para o seu gato (em g):");
    scanf("%f", &racaoGato);

    racaoGato *= (2*5);
    sobra = racaoGramas-racaoGato;
    sobraKG = sobra/1000;

    printf("Restará %.2f kg de Ração após 5 dias.\n\n", sobraKG);

}

void exercicio04h() //pronto
{
    printf("Exercício 4: Letra H\n");
    printf("Ler dois números inteiros para as variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.\n\n");

    int a, b, temp;
    printf("Digite o valor original de A:");
    scanf("%i", &a);
    printf("Digite o valor original de B:");
    scanf("%i", &b);

    temp = a;

    printf("\nOriginalmente: a = %i\nb = %i\n\n", a, b);
    a = b;
    b = temp;
    printf("Após troca: a = %i\nb = %i\n\n", a, b);

}

void exercicio04i() //pronto
{
    printf("Exercício 4: Letra I\n");
    printf("Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a%b).\n\n");

    int num, resto;
    printf("Digite um número: ");
    scanf("%i", &num);

    resto = num%7;
    printf("O resto da divisão por 7 é %i\n\n", resto);

}

void exercicio04j() //pronto
{
    printf("Exercício 4: Letra J\n");
    printf("Calcular a soma dos termos de uma PA lendo os valores do primeiro termo, do segundo termo e do número de termos.\nFórmulas: Sn=n*(a1+an)/2, onde Sn é a soma dos termos, a1 o primeiro termo e an o último termo.\nO n-ésimo termo de uma progressão aritmética, pode ser obtido por meio da formula: an =a1+(n 1).r, onde r é a razão da PA.\n\n");

    int a1, a2, an, n, r, sn;

    printf("Digite o primeiro termo: ");
    scanf("%i", &a1);
    printf("Digite o segundo termo: ");
    scanf("%i", &a2);

    r = a2-a1;

    printf("Digite o valor do número de termos: ");
    scanf("%i", &n);

    an = a1+((n-1)*r);
    sn = (n*(a1+an))/2;

    printf("A soma dos termos da P.A. é: %i\n\n", sn);

}

void exercicio0501() //pronto
{
    printf("Exercício 5 - Número 1:\n");
    printf("Ler um valor inteiro do teclado e dizer se é par.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 2:\n");
    printf("Ler um valor inteiro do teclado e dizer se é ímpar.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 3:\n");
    printf("Ler um valor inteiro do teclado e dizer se ímpar e maior que 100.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 4:\n");
    printf("Ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 5:\n");
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 6:\n");
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 7:\n");
    printf("Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99].\n1: Verdadeiro\n0: Falso.\n\n");

    int numero;

    printf("Digite um número:\n");
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
    printf("Exercício 5 - Número 8:\n");
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2;

    printf("Digite o primeiro número:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo número:\n");
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
    printf("Exercício 5 - Número 9:\n");
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2;

    printf("Digite o primeiro número:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo número:\n");
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
    printf("Exercício 5 - Número 10:\n");
    printf("Ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.\n\n");

    int numero1, numero2;

    printf("Digite o primeiro número:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo número:\n");
    scanf("%i", &numero2);

    if (numero1 > numero2) {
    printf("O primeiro número é maior.\n\n");
}
    else if (numero1 < numero2) {
    printf("O segundo número é maior.\n\n");
}
    else {
    printf("Os números são iguais.\n\n");
}
}

void exercicio0511() //falta testar
{
    printf("Exercício 5 - Número 11:\n");
    printf("Ler três valores reais do teclado e dizer se o primeiro está entre os outros dois.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2, numero3;

    printf("Digite o primeiro número:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo número:\n");
    scanf("%i", &numero2);
    printf("Digite o terceiro número:\n");
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
    printf("Exercício 5 - Número 12:\n");
    printf("Ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois.\n1: Verdadeiro\n0: Falso.\n\n");

    int numero1, numero2, numero3;

    printf("Digite o primeiro número:\n");
    scanf("%i", &numero1);
    printf("Digite o segundo número:\n");
    scanf("%i", &numero2);
    printf("Digite o terceiro número:\n");
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
    printf("Exercício 5 - Número 13:\n");
    printf("Ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois.\n1: Verdadeiro\n0: Falso.\n\n");

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
    printf("Exercício 5 - Número 14:\n");
    printf("Ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.\n1: Verdadeiro\n0: Falso.\n\n");

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
    printf("Exercício 5 - Número 15:\n");
    printf("Ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.\n1: Verdadeiro\n0: Falso.\n\n");

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
