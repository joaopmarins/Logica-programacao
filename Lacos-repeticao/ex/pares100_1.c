#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    for(int i = 100; i >= 1; i--){
        if((i%2) == 0){
            printf("%d\n", i);
        }
    }
}
