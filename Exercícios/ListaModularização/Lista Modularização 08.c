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
printf("\nO numero total de números fornecidos que são ímpares e estão dentro do intervalo é: %i", cont);
}

int main(){

    setlocale(LC_ALL,"Portuguese");
    printf("Isabela Gontijo de Castro - Lista Modularização\n\nExercícios:\n\n");
    printf("\nExercício 8:\n");
    printf("Crie um procedimento para:\n- ler dois valores reais, o primeiro menor que o segundo, caso não seja emita uma mensagem de erro e peça novamente, para definirem um intervalo; (esses valores deverão ser globais).\n\n- Crie outro procedimento para:\n- ler a quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;\n- contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem números ímpares.\n\n");

    procedimento();

    return 0;
}
