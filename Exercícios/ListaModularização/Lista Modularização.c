#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void menu()
{
    printf("Isabela Gontijo de Castro - Lista Modularização\n\nExercícios:\n\n");
    printf("1 - Exercício 1:\n");
    printf("2 - Exercício 2:\n");
    printf("3 - Exercício 3:\n");
    printf("4 - Exercício 4:\n");
    printf("5 - Exercício 5:\n");
    printf("6 - Exercício 6:\n");
    printf("7 - Exercício 7:\n");
    printf("8 - Exercício 8:\n");
    printf("9 - Exercício 9:\n");
    printf("10 - Exercício 10:\n");
    printf("0 - End\n");
    printf("\nEscolha:\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int op, val1, val2;;

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
    printf("Crie um procedimento para:\n- ler uma palavra do teclado;\n- mostrar todas as letras maiúsculas que estão na palavra digitada.\nDICA: Definir um teste para determinar se um caractere é letra maiúscula.\n\n");

    char palavra[25];

    printf("Digite uma palavra (inclua letras maiúsculas onde quiser nela):");
    fflush (stdin);
    gets(palavra);

    for (int i = 0; palavra[i] != '\0'; i++){
        if('A' <= palavra[i] && palavra[i] <= 'Z'){
            printf("%c ",palavra[i]);
    }
    }
}

void exercicio02() //pronto
{
    printf("\nExercício 2:\n");
    printf("Crie um procedimento para:\n- ler uma palavra do teclado;\n- ler um caractere do teclado\n- transforme toda a palavra em maiúscula;\n- contar e mostrar as letras maiúsculas menores que o caractere, e quantas letras são maiores que o caractere, e quantas são iguais ao caractere lido\n\n");

    char str1[50], letra;
    int i, siz, cont, contIgual, contMaior, contMenor;

    printf("Digite uma palavra: \n");
    fflush(stdin);
    gets(str1);

    printf("Digite um caracter:\n");
    fflush(stdin);
    scanf("%c", &letra);

    if(letra >= 'a' && letra <= 'z') {
            letra -= 32;
    }
    siz = strlen(str1);
    for(i = 0; i < siz; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') {
                        str1[i] -= 32;
        }
    }
    for(i = 0; i < siz; i++) {
        if(str1[i] == letra) {
                contIgual++;
        }
    }

    printf("\nLetras menores que %c:", letra);
        for (int i = 0; str1[i] != '\0'; i++) {
            if (letra > str1[i]) {
      printf(" %c", str1[i]);
      contMenor++;
        }
    }

        for(i = 0; i < siz; i++) {
            if(str1[i] > letra) {
                contMaior++;
        }
    }
    printf("\nToda a palavra transformada em maiúscula: %s\n", str1);
    printf("\nMaiores que %c: %i.\nIguais a %c: %i.\n\n", letra, contMaior, letra, contIgual);
}

void exercicio03() //pronto
{
    printf("\nExercício 3\n");
    printf("Crie um procedimento para:\n- ler uma cadeia de caracteres do teclado;\n- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.\n\n");

    char cadeia[50];
    int contL=0;

    printf("Digite uma cadeia de caracteres:");
    fflush(stdin);
    gets(cadeia);

    printf("Letras contidas na cadeia: ");
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if ('A' <= cadeia[i] && cadeia[i] <= 'Z' || 'a' <= cadeia[i] && cadeia[i] <= 'z') {
      printf("%c ", cadeia[i]);
      contL++;
        }
    }

    printf("\nA cadeia de caracteres contem %i símbolos que são letras.\n\n", contL);

}

void exercicio04() //pronto
{
    printf("\nExercício 4:\n");
    printf("Crie um procedimento para:\n- ler uma cadeia de caracteres do teclado;\n- contar e mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres.\n\n");

  char cadeia[50], tmp;
  int contNum, size;

    printf("Digite uma cadeia de caracteres:");
    fflush(stdin);
    gets(cadeia);
    fflush(stdin);

    for (int i = 0; cadeia[i] != '\0'; i++) {
        size++;
    }

    for(int i = 0; i < size / 2; i++) {
        tmp = cadeia[i];
        cadeia[i] = cadeia[size - i - 1];
        cadeia[size - i - 1] = tmp;
    }
    printf("Números presentes na cadeia:");
        for (int i = 0; cadeia[i] != '\0'; i++) {
            if(cadeia[i] >='0' && cadeia[i] <= '9') {
                printf("%c ", cadeia[i]);
                contNum++;
            }
        }
    printf("\nA cadeia contem %i dígitos.\n\n", contNum);
}

void exercicio05() //pronto
{
    printf("\nExercício 5:\n");
    printf("Crie um procedimento para:\n- ler uma cadeia de caracteres do teclado;\n- contar e mostrar tudo o que não for dígito e também não for letra minúscula.\n\n");

    char cadeia[50];
    int contNum;

    printf("Digite uma cadeia de caracteres:");
    fflush(stdin);
    gets(cadeia);
    fflush(stdin);

    printf("Caracteres que não são números nem letras minúsculas dentro da cadeia:");
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if((cadeia[i] >='0' && cadeia[i] <= '9' || cadeia[i] >= 'a' && cadeia[i] <= 'z')) {
        }
        else {
            printf("%c ", cadeia[i]);
        contNum++;
        }
    }

    printf("\nA cadeia de caracteres tem %i caracteres.\n\n", contNum);

}

void exercicio06() //pronto
{
    printf("\nExercício 6:\n");
    printf("Crie um procedimento para:\n- ler dois valores inteiros positivos, limites para definirem um intervalo; (esses valores deverão ser globais).\n- ler uma quantidade de valores inteiros a serem testados –FLAG -1; um por vez;\n- contar e mostrar dentre esses valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.\n\n");

    int num, cont, ultimo, maior, menor, val1, val2;
    char array[50]; //conferir

    printf("Digite o primeiro valor limite:\n");
    scanf("%i", &val1);
    printf("Digite o segundo valor limite:\n");
    scanf("%i", &val2);

    printf("Digite um número inteiro:");
    scanf("%i", &num);
    if (val1 > val2) {
        maior = val1;
        menor = val2;
    }
    else if (val1 < val2) {
        maior = val2;
        menor = val1;
    }
    while (num != -1) {
        if (menor < num && num < maior) {
            if (num%2 == 0 && num%3 ==0) {
                array[ultimo++] = num;
                cont++;
            }
        }
        printf("Digite um número inteiro(-1 para parar):\n");
        scanf("%i", &num);
    }
    printf("Valores dentro do limite que são múltiplos de 2 e 3 ao mesmo tempo:\n");
    for(int i=0; i < cont; i++) {
        printf("%d \n", array[i]);
    }
    printf("\nExistem %i múltiplos de 2 e 3 no intervalo.", cont);

}

void exercicio07() //pronto
{
    printf("\nExercício 7:\n");
    printf("Crie um procedimento para:\n- ler dois valores inteiros positivos, limites para definirem um intervalo (esses valores deverão ser globais).\n- ler uma quantidade de valores inteiros a serem testados;- Flag -1, um por vez;\n- contar e mostrar dentre esses valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e pertençam ao intervalo.\n\n");

    int num, cont, ultimo, maior, menor, val1, val2;
    char array[50]; //conferir

    printf("Digite o primeiro valor limite:");
    scanf("%i", &val1);
    printf("Digite o segundo valor limite:");
    scanf("%i", &val2);

    printf("Digite um número inteiro:");
    scanf("%i", &num);
    if (val1 > val2) {
        maior = val1;
        menor = val2;
    }
    else if (val1 < val2) {
        maior = val2;
        menor = val1;
    }
    while (num != -1) {
        if (menor < num && num < maior) {
            if (num%5 != 0 && num%3 ==0) {
            array[ultimo++] = num;
            cont++;
            }
        }
        printf("Digite um numero inteiro(-1 para parar):");
    scanf("%i", &num);
    }

    printf("\nValores dentro do limite e multiplos de 3, mas não de 5: ");
    for(int i=0; i < cont; i++) {
        printf("%d ", array[i]);
    }
    printf("\nHá %i números no intervalo que são múltiplos de 3 e não são de 5.\n\n", cont);

}

void exercicio08() //fazer separado
{
    printf("\nExercício 8:\n");
    printf("Crie um procedimento para:\n- ler dois valores reais, o primeiro menor que o segundo, caso não seja emita uma mensagem de erro e peça novamente, para definirem um intervalo; (esses valores deverão ser globais).\n\n- Crie outro procedimento para:\n- ler a quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;\n- contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem números ímpares.\n\n");

    printf("Enviada em um arquivo separado.\n\n");

}

void exercicio09() //fazer separado
{
    printf("\nExercício 9:\n");
    printf("Crie um procedimento para:\n- ler dois valores reais, maiores que 0 e menores que 1, caso não seja emita uma mensagem de erro e peça novamente, para definirem um intervalo de precisão; ; (esses valores deverão ser globais).\n\nCrie um procedimento para:\n- ler uma quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;\n - contar e mostrar todos os valores lidos que tenham suas partes fracionárias ao intervalo de precisão.\n\n");

    printf("Enviada em um arquivo separado.\n\n");

}

void exercicio10() //pronto
{
    printf("\nExercício 10:\n");
    printf("Crie um procedimento para:\n- ler uma linha do teclado; defina essa linha como global;\n- separar em outra cadeia de caracteres e mostrar todos os símbolos não alfanuméricos (letras ou dígitos) na cadeia de caracteres.\n\n");

    char linha[50], linhaAux[50];

    printf("Digite uma linha de caracteres:");
    fflush(stdin);
    gets(linha);

    for (int i = 0, posicao = 0; linha[i] != '\0'; i++, posicao++ ) {
        while(linha[posicao] >= '0' && linha[posicao] <= '9' || linha[posicao] >= 'a' && linha[posicao] <= 'z' || linha[posicao] >= 'A' && linha[posicao] <= 'Z') {
            posicao++;
        }
        linhaAux[i] = linha[posicao];
    }

    printf("A linha sem valores alfanumericos é: %s\n\n", linhaAux);
}
