#include <stdio.h>
#include <stdlib.h>

void criar_arquivo(char name[]){
    // declara uma variavel do tipo "arquivo"
    FILE *fptr;
    fptr = fopen(name, "w");
    fprintf(fptr, "sasa");
    fclose(fptr);
};

void ler_arquivo(char name[]){
    FILE *fptr;
    fptr = fopen(name, "r");
    if(fptr == NULL) {
      printf("nao foi possivel abrir o arquivo.");
    }else {
        char ler[100];
        fgets(ler, 100, fptr);
        printf("%s", ler);
        fclose(fptr);
    }
};

int main()
{
    criar_arquivo("sasa.txt");
    ler_arquivo("sasa.txt");
    return 0;
}
