#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    printf("Escolha o tipo do seu carro: \n");
    printf("1- Tipo A\n");
    printf("2- Tipo B\n");
    printf("3- Tipo C\n");
    float distancia, resultado;
    int escolha;
    scanf("%d", &escolha);
    printf("\nDigite a distancia em km: ");
    scanf("%f", &distancia);
    switch (escolha){
        case 1:
            resultado = distancia/12;
            printf("Você gastará %4.2f litros, e o tipo do carro é A", resultado);
            break;
        case 2:
            resultado = distancia/9;
            printf("Você gastará %4.2f litros, e o tipo de carro é B", resultado);
            break;
        case 3:
            resultado = distancia/8;
            printf("Você gastará %4.2f litros, e o tipo de carro é C", resultado);
            break;

    }
}
