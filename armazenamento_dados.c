#include <stdio.h>
#include <unistd.h>
#include "armazenamento_dados.h"
struct cadastro
{
  char nome[30], rua[20];
  int idade;
};
void armazenamento_dados()
{
  sleep(1);
  printf("\a####Cadastro do Usuário####\n");
  struct cadastro c[5];
  FILE *arq;
  arq = fopen("arq.txt","wr");
  if(arq == NULL)
  {
     sleep(1);
     printf("error\n");
  }
  for(int i = 0; i < 5; i++){ 
    sleep(2);
    printf("Informe o nome:\n");
    fgets(c[i].nome,30,stdin);
    sleep(1);
    printf("Informe o endereço:\n");
    fgets(c[i].rua,20,stdin);
    sleep(1);
    printf("Informe a idade:\n");
    scanf("%d",&c[i].idade);
    printf("\a");
    sleep(2); 
    fprintf(arq,"\nnome:%s\nrua:%s\nidade:%d\n",c[i].nome,c[i].rua,c[i].idade);
    printf("\n\a\aUsuário Registrado!\n");
    getchar();
   }
   fclose(arq);
  }
