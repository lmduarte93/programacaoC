#include<stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    /*Em um mesmo int posso declarar idade e matricula, pois são números inteiros*/

    printf("Digite sua idade: \n");
    scanf("%d", idade);

    printf("Digite sua altura: \n");
    scanf("%.2f", altura);

    printf("Digite o seu nome: \n");
    scanf("%s", nome);

    printf("Digite a sua matricula: \n");
    scanf("%d", matricula);

    printf("Nome: %s - Idade: %d\n", nome, idade);
    printf("Matricula: %d - Altura: %.2f", matricula, altura);
