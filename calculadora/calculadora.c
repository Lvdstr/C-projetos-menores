#include <stdio.h>
#include <string.h>
#include <math.h>

struct values{
    int value_one;
    int value_two;
    char resposta[10];

};

void calcular(int value_one, int value_two, char resposta[]){

    if(strcmp(resposta, "+") == 0){
        int operacao = value_one + value_two;
        printf("%d %s %d = %d", value_one, resposta, value_two, operacao);
    }

    else if(strcmp(resposta, "-") == 0){
        int operacao = value_one - value_two;
        printf("%d %s %d = %d", value_one, resposta, value_two, operacao);
    }

    else if (strcmp(resposta, "*") == 0){
        int operacao = value_one * value_two;
        printf("%d %s %d = %d", value_one, resposta, value_two, operacao);
    }

    else if (strcmp(resposta, "/") == 0){
        int operacao = value_one / value_two;
        printf("%d %s %d = %d", value_one, resposta, value_two, operacao);
    }

    else if (strcmp(resposta, "%") == 0){
        int operacao = value_one % value_two;
        printf("%d %s %d = %d", value_one, resposta, value_two, operacao);
    }

   else if (strcmp(resposta, "**") == 0){
       int operacao = pow(value_one, value_two);
       printf("%d %s %d = %d", value_one, resposta, value_two, operacao);
   }
};


int main(){
    struct values s1;
    printf("bem vindo a versão da caclulazinha em c ");
    printf("\ndigite o primeiro valor:");
    scanf("%d", &s1.value_one);

    printf("digite o segundo valor:");
    scanf("%d", &s1.value_two);
    printf("essas são as operaçoes disponiveis:\n");

    printf("+ = soma\n- = subtrair\n* = multiplicar\n/ = dividir\n‰ = modular\n** = potencia:");
    scanf("%s", s1.resposta);

    calcular(s1.value_one, s1.value_two, s1.resposta);
    return 0;
}
