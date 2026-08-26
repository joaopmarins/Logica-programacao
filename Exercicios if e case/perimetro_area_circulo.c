#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float raio, resultado;
    int escolha;
    const int pi;
    printf("Selecione uma opção: \n");
    printf("1- Área do círculo\n");
    printf("2- Perímetro do círculo\n");
    scanf("%d", &escolha);
    if (escolha == 1){
        printf("\n\nDigite o raio do círculo: \n");
        scanf("%f", &raio);
        resultado = 2*raio*pi;
            if (raio < 0.1 || raio > 100) {
                printf("O valor do raio não está entre 0.1 e 100");
            }
        printf("\nO perímetro é de %4.2f", resultado);
    }
    else if (escolha == 2){
        printf("\n\nDigite o raio do círculo: \n");
        scanf("%f", &raio);
        resultado = pi*(raio*raio);
            if (raio < 0.1 || raio > 100) {
                printf("O valor não está entre 0.1 e 100");
            }
        printf("\nA área do círculo é: %4.2f", resultado);
    }
    else{
        printf("Opção inválida!");
    }
}
