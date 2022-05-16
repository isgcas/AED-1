#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float val1, val2; lim91, lim92;

void limites() {

    setlocale(LC_ALL,"Portuguese");
    float maior, menor;

    printf("Digite o primeiro valor limite:\n");
    scanf("%f", &val1);
    printf("Digite o segundo valor limite:\n");
    scanf("%f", &val2);

    if (val1 > val2) {
        maior = val1;
        menor = val2;
    }
    else if (val1 < val2) {
        maior = val2;
        menor = val1;
    }
    val1 = menor;
    val2 = maior;

    while (val1 <= 0 || val2 <= 0){
        if (val1 > val2) {
            maior = val1;
            menor = val2;
        }
        else if (val1 < val2) {
            maior = val2;
            menor = val1;
        }
    val1 = menor;
    val2 = maior;

    printf("\nOs valores devem ser maior do que zero.\n\nDigite o primeiro valor limite:\n");
    scanf("%f", &val1);
    printf("Digite o segundo valor limite):");
    scanf("%f", &val2);
}
}

void procedimento(){
    setlocale(LC_ALL,"Portuguese");

    float num, array[50];
    int quant, ultimo, cont, intNum;

    limites();

    printf("Digite a quantidade de números reais a serem testados:");
    scanf("%i", &quant);

    for (int i = 0; i <= (quant-1); i++) {
        printf("Digite um numero real:");
        scanf("%f",&num);
        intNum = num;
        num = (intNum - num)*(-1);
        if (num >= lim91 && num <= lim92) {
            array[ultimo++] = (intNum+num);
            cont++;
        }
    }
    printf("Valores dentro do limite e que tenham suas partes fracionárias ao intervalo de precisão:");
    for(int i=0; i < cont; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\nO número total de valores fracionários ao intervalor de precisão é: %i.\n\n", cont);
}

int main(){

    setlocale(LC_ALL,"Portuguese");
    printf("Isabela Gontijo de Castro - Lista Modularização\n\nExercícios:\n\n");
    printf("\nExercício 9:\n");
    printf("Crie um procedimento para:\n- ler dois valores reais, maiores que 0 e menores que 1, caso não seja emita uma mensagem de erro e peça novamente, para definirem um intervalo de precisão; ; (esses valores deverão ser globais).\n\nCrie um procedimento para:\n- ler uma quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;\n- contar e mostrar todos os valores lidos que tenham suas partes fracionárias ao intervalo de precisão.\n\n");

    procedimento();

    return 0;
}
