#include <stdio.h>
#include <unistd.h>
#include "dados_pessoais.h"
struct cadastro
{
  char nome[30], rua[20];
  int idade;
};
void dados_pessoais()
{
  sleep(1);
  printf("\a####Cadastro do Usuário####\n");
  struct cadastro c;
  FILE *arq;
  arq = fopen("arq.txt","wr");
  if(arq == NULL)
  {
     sleep(1);
     printf("error\n");
  }
  sleep(2);
  printf("Informe o nome:\n");
  fgets(c.nome,30,stdin);
  sleep(1);
  printf("Informe o endereço:\n");
  fgets(c.rua,20,stdin);
  sleep(1);
  printf("Informe a idade:\n");
  scanf("%d",&c.idade);
  printf("\a");
  sleep(2);
  fprintf(arq,"\nnome:%s\nrua:%s\nidade:%d\n",c.nome,c.rua,c.idade);
  printf("\n\a\aUsuário Registrado!\n");
  getchar();
  fclose(arq);
}
