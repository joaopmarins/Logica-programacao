#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int i = 0;
    int soma = 0;
    while (i <= 100){
         i++;
         if (i%2 == 0){
            soma = soma+i;
         }
    }
    printf("A soma total é: %d", soma);
}
