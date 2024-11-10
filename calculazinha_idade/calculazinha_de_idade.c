#include <stdio.h>

struct valores{
	  int ano_nasc;
	  int ano_atual;
};

void verificar_datas(int ano_nasc, int ano_atual){
	 int res = ano_atual - ano_nasc;
	 if(ano_nasc < ano_atual){
	 	printf("em %d voce tem %d anos", ano_atual,res);
	 } else if (ano_nasc > ano_atual){
	 	printf("tem parada errado ai :⁠-⁠(");
	 }
}

int main() {
	struct valores vava;

  printf("calculadora de idade\n");

  printf("digite o ano em que vc nasceu: ");
  scanf("%d", &vava.ano_nasc);

  printf("agora digite o ano atual: ");
  scanf("%d", &vava.ano_atual);
  verificar_datas(vava.ano_nasc, vava.ano_atual);
  return 0;
}
