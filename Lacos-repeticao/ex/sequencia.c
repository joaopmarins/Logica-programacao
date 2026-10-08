#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float soma = 1;
    float num;
    for(int i = 2; i <= 20; i++){
        num = 1.0/i;
        soma += num;
    }
    printf("%f", soma);
}
