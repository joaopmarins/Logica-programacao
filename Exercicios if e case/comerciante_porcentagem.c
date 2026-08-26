#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float valor, total;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    if (valor < 20 && valor > 0){
        total = valor*1.45;
        printf("O valor do produto final é %4.2f, e o valor do produto é %4.2f", total, valor);
    }
    else if (valor >= 20{
        total = valor*1.3;
        printf("O valor do produto final é %4.2f, e o valor do produto é %4.2f", total, valor);
    }
    else{
        printf("Valor inválido!");
    }
}
