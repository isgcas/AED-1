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
void exercicio06(); //pronto (talvez olhar)
void exercicio07(); //pronto
void exercicio08(); //pronto (talvez dar mais uma olhada)
void exercicio09(); //pronto
void exercicio10(); //pronto

void menu()
{
    printf("Isabela Gontijo de Castro - Lista Strings\n\nExercícios:\n\n");
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
    printf("Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n\n");

    char string[50], maior[50], menor[50], lexMaior[50], lexMenor[50];

    printf("Digite uma palavra:\n");
        scanf("%s", string);

    strcpy(maior, string);
    strcpy(menor, string);
    strcpy(lexMenor, string);
    strcpy(lexMaior, string);

    while (strcasecmp(string, "parar") != 0) {
        if (strlen(string) > strlen(maior)) {
            strcpy(maior, string);
        }
        if (strlen(string) < strlen(menor)) {
            strcpy(menor, string);
        }
        if (strcasecmp(string, lexMenor) < 0) {
            strcpy(lexMenor, string);
        }
        if (strcasecmp(string, lexMaior) > 0) {
            strcpy(lexMaior, string);
        }
        printf("\nDigite uma palavra (digite parar quando quiser encerrar):\n");
            scanf("%s", string);
    }
    printf("\nMaior lexicografimente: %s\nMenor lexicograficamente: %s\n\n", lexMaior, lexMenor);
    printf("Maior palavra: %s\nMenor palavra: %s\n\n", maior, menor);
}

void exercicio02() //pronto
{
    printf("\nExercício 2:\n");
    printf("Ler uma string de no máximo 50 caracteres e contar quantas letras A ela possui.\n\n");

    int i, count;
    char string[50];
        count = 0;

    printf("Digite uma string de no máximo 50 caracteres:\n");
        scanf("%s", string);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'A') {
            count++;
        }
    }
    printf("Quantidade de 'A' na palavra digitada: %i\n\n", count);
}

void exercicio03() //pronto
{
    printf("\nExercício 3:\n");
    printf("Ler uma string de no máximo 15 caracteres e indicar as posições da letra A nessa palavra.\n\n");

    int i;
    char string[50];

    printf("Digite uma palavra:\n");
        scanf("%s", string);

    for (i = 0; i < strlen(string); i++) {
        if (i == 0) {
            printf("Posição da letra A é:");
        }
        if (string[i] == 'A') {
            printf(" %d ", i);
        }
    }
    printf("\n\n");
}

void exercicio04() //pronto
{
    printf("\nExercício 4:\n");
    printf("Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar em quais posições esse caractere aparece na string lida e quantas vezes ele apareceu.\n\n");

    int i, count;
    char letra, string[50];
        count = 0;

    printf("Digite uma string de no máximo 50 caracteres:\n");
        scanf("%s", string);

    printf("Digite uma letra:\n");
        scanf("%s", &letra);

    for (i = 0; i < strlen(string); i++) {
        if (i == 0) {
            printf("\nPosições da letra %c são: ", letra);
        }
        if (string[i] == letra)  {
            printf(" %d", i);
            count++;
        }
    }
    printf("\nA letra %c apareceu %d vezes.\n\n", letra, count);
}

void exercicio05() //pronto
{
    printf("\nExercício 5:\n");
    printf("Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter está nesse intervalo). Mostrar quais as posições que esse caractere (maiúscula ou minúscula) ocupa na string lida e quantas vezes ele apareceu.\n\n");

    char letra, frase[50];
    int comprimento, contador;

    printf("Digite uma frase:\n");
        fflush(stdin);
        fgets(frase, 50, stdin);

    comprimento = strlen(frase);
    frase[comprimento - 1] = '\0';

    for (int i = 0; i < comprimento; i++) {
        frase[i] = tolower(frase[i]);
    }

    printf("Digite uma letra de A a z:\n");
        scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'z') {
        contador = 0;
        letra = tolower(letra);
        for (int i = 0; i < comprimento; i++) {
            if (i == 0) {
                printf("Posição: ");
            }
            if (frase[i] == letra) {
                printf(" %d ", i);
                contador++;
            }
        }
        printf("\nAparece %d vezes.\n\n", contador);
    }
    else {
        printf("Letras são de A-z.\n\n");
    }
}

void exercicio06() //pronto
{
    printf("\nExercício 6:\n");
    printf("Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui, quantos caracteres são números e quandos não são nem números nem letras.\n\n");

    char string[50];
    int letras, numeros=0, outros;

    printf("Digite uma string:\n");
        scanf(" %s", string);

    for (int i = 0; i < strlen(string); i++) {
        string[i] = tolower(string[i]);
        if (string[i] >= 'a' && string[i] <= 'z') {
            letras++;
        }
        else {
            if (string[i] >= '0' && string[i] <= '9') {
                numeros++;
            }
            else {
                outros++;
            }
        }
    }
    printf("\nQuantidade de letras: %i\nQuantidade de números: %i\nQuantidade de caracteres que não são letras nem números: %i\n\n", letras, numeros, outros);
}

void exercicio07() //pronto
{
    printf("\nExercício 7:\n");
    printf("Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso. Isto é: A última letra da primeira string será a primeira da nova string, e aí sucessivamente.\n\n");

    char string[50];
    int i;

    printf("Digite uma string:\n");
        scanf("%s", string);
    printf("\nString invertida:\n");
    for (i = strlen(string) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n\n");
}

void exercicio08() //pronto
{
    printf("\nExercício 8:\n");
    printf("Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string auxiliar.\n\n");

    int i=0,k=0, tam;
    char str[50],str2[50];

     printf("Digite uma string (com espaços):\n");
     fflush(stdin);
     gets(str);
     tam = strlen(str);

    for(i = 0; i < tam; i++) {
        if(str[i] == ' ') {
            continue;
        }
        str2[k]=str[i];
        k++;
    }
    printf("\nA string sem os espaços: \n%s\n\n", str2);
}

void exercicio09() //pronto
{
    printf("\nExercício 9:\n");
    printf("Ler uma string de no máximo 50 caracteres e retirar dessa string todos os espaços em branco. Sem utilizar string auxiliar.\n\n");

    char string[50];
    int len;

    printf("Digite uma string (com espaços em branco):\n");
        fflush(stdin);
        gets(string);

    len = strlen(string);

    for (int i = 0, posicao = 0; i < len; i++, posicao++) {
        if (string[posicao] == ' ') {
            posicao++;
        }
        string[i] = string[posicao];
    }
    printf("\nString sem espaços em branco:\n%s\n\n", string);
}

void exercicio10() //pronto
{
    printf("\nExercício 10:\n");
    printf("Ler uma string de no máximo 50 caracteres, em seguida ler outra string de no máximo 3 caracteres. Informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.\n\n");

    char s[50], s2[4];
    int aux[4], aux2 = 0;

    printf("Digite uma string de até 50 caracteres:\n");
        fflush(stdin);
        gets(s);
    printf("Digite uma string de até 3 caracteres:\n");
        fflush(stdin);
        gets(s2);

    for(int i = 0; s[i] != '\0'; i++) {
        aux[4] = "";
        for (int j = i; j-i != strlen(s2); j++) {
            if(s[j] != '/0') {
                aux[j-i] = s[j];
            }
            else {
                break;
            }
        }
        if (strcmp(s2, aux) == 0) {
           printf("Posição inicial: %i.\n", i+1);
           aux2++;
        }
    }
    printf("A segunda string aparece %i vezes dentro da primeira.", aux2);
}
