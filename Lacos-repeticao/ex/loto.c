#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num;
    for(int i = 0; i <= 5; i++){
        printf("Digite o número: ");
        scanf("%d", &num);
        printf("O número %d é ", num);
        if (num%2 == 0){
            printf("par ");
        }
        else{
            printf("impar ");
        }
        if(num%3 == 0){
            printf("múltiplo de 3 ");
        }
        if(num%5 == 0){
            printf("múltiplo de 5 ");
        }
        if(num%7 == 0){
            printf("múltiplo de 7 ");
        }
        printf("\n");
    }
}
