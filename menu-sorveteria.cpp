#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int escolhas = 0;
  char tam[5], cod[5], soma[5], per;
  

  printf("Bem-vindo à sorveteria do Pedro Perez.\n");
  printf("-----------------------------------------------------------\n");
  printf("¦Código ¦  Descrição  ¦ Tamanho P ¦ Tamanho M ¦ Tamanho G ¦\n");
  printf("¦  TR   ¦ Tradicional ¦  R$6.00   ¦   R$10.00 ¦   R$18.00 ¦\n");
  printf("¦  ES   ¦   Especial  ¦  R$7.00   ¦   R$12.00 ¦   R$21.00 ¦\n");
  printf("¦  PR   ¦   Premium   ¦  R$8.00   ¦   R$14.00 ¦   R$24.00 ¦\n");
  printf("-----------------------------------------------------------\n");

  while (1) {
    printf("Entre com o tamanho do pote de sorvete desejado (P/M/G):\n");
    scanf(" %1s", tam);
    printf("Entre com o código do pote de sorvete desejado (TR/ES/PR):\n");
    scanf(" %2s", cod);

    strcat(tam, cod);

    if (strcmp(tam,"PTR") == 0) {
      printf("Você pediu um sorvete sabor TRADICIONAL P de R$6.00\n");
      escolhas = escolhas + 6;
      
    }
      
    else if (strcmp(tam,"PES") == 0) {
      printf("Você pediu um sorvete sabor ESPECIAL P de R$7.00\n");
      escolhas = escolhas + 7;

      }
    
    else if (strcmp(tam,"PPR") == 0) {
      printf("Você pediu um sorvete sabor PREMIUM P de R$8.00\n");
      escolhas = escolhas + 8;

      }
    
    else if (strcmp(tam,"MTR") == 0) {
      printf("Você pediu um sorvete sabor TRADICIONAL M de R$10.00\n");
      escolhas = escolhas + 10;
      
      }
    
    else if (strcmp(tam,"MES") == 0) {
      printf("Você pediu um sorvete sabor ESPECIAL M de R$12.00\n");
      escolhas = escolhas + 12;

      }
   
    else if (strcmp(tam,"MPR") == 0) {
      printf("Você pediu um sorvete sabor PREMIUM M de R$14.00\n");
      escolhas = escolhas + 14;

      }

    else if (strcmp(tam,"GTR") == 0) {
      printf("Você pediu um sorvete sabor TRADICIONAL G de R$18.00\n");
      escolhas = escolhas + 18;
      
      }
    
    else if (strcmp(tam,"GES") == 0) {
      printf("Você pediu um sorvete sabor ESPECIAL G de R$21.00\n");
      escolhas = escolhas + 21;

      }
   
    else if (strcmp(tam,"GPR") == 0) {
      printf("Você pediu um sorvete sabor PREMIUM G de R$24.00\n");
      escolhas = escolhas + 24;

      }

    printf("Deseja pedir mais algum sorvete? (S/N)\n");
    scanf(" %c", &per);
    if (per == 'S') {
      continue;
    }
    else {
      break;
      
    }
      

   }

  printf("Os pedidos foram realizados com sucesso. O valor total foi de R$%d,00.", escolhas);

  return 0;
}
