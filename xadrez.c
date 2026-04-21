#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

  int torre, bispo = 0, rainha = 0, cavalo = 1;

  printf("Movimentação torre.\n");
  for (torre = 0; torre < 5; torre++){
    printf("Direta \n");
  }
  printf("----------\n");

  printf("Movimentação Rainha.\n");
  while (rainha < 8)
  {
    printf("Esquerda\n");
    rainha++;
  }
  printf("----------\n");

  printf("Movimentação Bispo.\n");
  do
  { 

    printf("Cima, Direita\n");
    bispo++;
  } while (bispo < 5);
  printf("----------\n");

  printf("Movimentação Cavalo.\n");
  while (cavalo--)
  {
    for (int i = 0; i < 2; i++)
    {
      printf("Baixo\n");
    }
    printf("Esquerda\n");
    
  }
  printf("----------\n");
  

  return 0;
}
