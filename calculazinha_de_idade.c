#include <stdio.h>

struct valores{
	  int ano_nasc;
	  int ano_atual;
};

int main() {
	struct valores vava;

  printf("calculadora de idade\n");

  printf("digite o ano em que vc nasceu: ");
  scanf("%d", &vava.ano_nasc);

  printf("agora digite o ano atual: ");
  scanf("%d", &vava.ano_atual);

  int res = vava.ano_atual - vava.ano_nasc;

  if(vava.ano_nasc < vava.ano_atual){
    printf("sua idade eh %d anos",res);
  } else if (vava.ano_nasc > vava.ano_atual){
    printf("tem parada errado ai :⁠-⁠(");
  }
  return 0;
}
