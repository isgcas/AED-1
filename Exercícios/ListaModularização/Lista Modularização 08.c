#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float val1, val2;

void limites() {
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o primeiro valor limite:\n");
    scanf("%f", &val1);
    printf("Digite o segundo valor limite:\n");
    scanf("%f", &val2);
    while (val1 > val2) {
        printf("\nO primeiro limite deve ser menor que o segundo.\n\nDigite o primeiro valor limite:\n");
        scanf("%f", &val1);
        printf("Digite o segundo valor limite (maior do que o primeiro!):");
        scanf("%f", &val2);
    }
}

void procedimento(){
    setlocale(LC_ALL,"Portuguese");

    float num;
    char array[50];
    int quant, ultimo, cont, partInt;

    limites();

    printf("Digite a quantidade de numeros reais:");
    scanf("%i", &quant);
    for (int i = 0; i <= (quant-1); i++) {
        printf("Digite um numero real:");
        scanf("%f",&num);
        partInt = num;
        if (num > val1 && num < val2) {
            if(partInt % 2 != 0) {
                array[ultimo++] = num;
                cont++;
            }
        }
    }
printf("\nO numero total de n�meros fornecidos que s�o �mpares e est�o dentro do intervalo �: %i", cont);
}

int main(){

    setlocale(LC_ALL,"Portuguese");
    printf("Isabela Gontijo de Castro - Lista Modulariza��o\n\nExerc�cios:\n\n");
    printf("\nExerc�cio 8:\n");
    printf("Crie um procedimento para:\n- ler dois valores reais, o primeiro menor que o segundo, caso n�o seja emita uma mensagem de erro e pe�a novamente, para definirem um intervalo; (esses valores dever�o ser globais).\n\n- Crie outro procedimento para:\n- ler a quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;\n- contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem n�meros �mpares.\n\n");

    procedimento();

    return 0;
}
