/*Fa�a um programa que receba o sal�rio de um funcion�rio.
Uma fun��o sem retorno dever� calcular e mostrar o sal�rio
reajustado de um funcion�rio.
O percentual de aumento encontra-se na tabela a seguir*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void reajuste(float salario);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float sal;

    printf("Informe o valor do seu sal�rio: ");
    scanf("%f", &sal);

    reajuste (sal);
}

void reajuste(float salario){
    float novosal;
if (salario<=300)
    novosal=salario+(salario*0.35);
    else
        novosal = salario + (salario * 0.15);

printf("\nNovo salario: %.2f", novosal);
}
