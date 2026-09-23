#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    for(int i = 100; i <=200; i++){
        if(i%3 == 1){
            printf("%d\n", i);
        }
    }


}
