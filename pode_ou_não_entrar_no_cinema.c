#include<stdio.h>

int main(){
  int hora;
  
  printf("descubra se pode entrar ou não no cinema\n");
  
  printf("informe a hora para saber se pode ou não entrar no cinema: ");
  scanf("%d", &hora);
    
  if(hora < 5){
    printf("pode entrar são %d hora(s)\n ",hora);
  } else if (hora == 5){
      printf("pode entrar mas o filme ja ta na metade lek são %d horas \n",hora);
  }
  else{
    printf("o filme ja acabou,oh loki");
  }
  return 0;
}
