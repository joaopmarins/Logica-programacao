#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num_candidato, idade;
    char sexo, exp;
    char i = 's';
    int idade_total, total_candidato, idade_media, candi_qualifi;
    while(i == 's'){
        printf("Digite o número do candidato: ");
        scanf("%d", &num_candidato);
        printf("\nDigite a idade do candidato: ");
        scanf("%d", &idade);
        printf("\nMulher - m\n1 - Homem - h\nDigite seu sexo: ");
        scanf(" %c", &sexo);
        printf("O candidato possui experiência(s/n): ");
        scanf("%c", &exp);
        idade_total += idade;
        total_candidato += 1;
        idade_media = idade_total/total_candidato;
        if((idade >= 18) && (exp == 's')){
            candi_qualifi += 1;
        }
        printf("A idade média dos candidatos é: %d", idade_media);
        printf("\nA quantidade total de candidatos é: %d", total_candidato);
        printf("\nA quantidade de candidatos qualificados é de: %d", candi_qualifi);
        printf("\n\nVocê quer continuar(s/n): ");
        scanf(" %c", &i);
        if(i == 'n'){
            i = 0;
            printf("Código encerrado...");
        }

    }
}
