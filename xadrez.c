#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {

  int torre, bispo = 0, rainha = 0;

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
  

  return 0;
}
