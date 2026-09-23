#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    int num, i;
    i =2;
    printf("Digita um numero: ");
    scanf("%d", &num);
    do {
        if (num%i == 0){
            printf("Esse numero nao é primo");
            return 0;
        }
        i++;
    }while (i <= sqrt(num));
    printf("Ele é primo!");

}
