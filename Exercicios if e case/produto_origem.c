#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float valor;
    int codigo;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("\nDigite o código de origem: ");
    scanf("%d", &codigo);
    switch (codigo){
        case 1:
            printf("%4.2f - Sul", valor);
            break;
        case 2:
            printf("%4.2f - Nordeste", valor);
            break;
        case 3:
            printf("%4.2f - Norte", valor);
            break;
        case 4:
            printf("%4.2f - Sudeste", valor);
            break;
        case 5:
            printf("%4.2f - Leste", valor);
            break;
        case 6:
            printf("%4.2f - Centro-Oeste", valor);
            break;
        case 7:
            printf("%4.2f - Oeste", valor);
            break;
        case 8:
            printf("%4.2f - Noroeste", valor);
            break;
        default:
            printf("Código inválido!");
            break;

    }
    return 0;
}
