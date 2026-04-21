#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

void movimentoTorre(int numeroCasas) {
  if (numeroCasas > 0){
    printf("Direita \n");

    movimentoTorre(--numeroCasas);
  }
}

void movimentoRainha(int numeroCasas) {
  if (numeroCasas > 0){
    printf("Esquerda \n");

    movimentoRainha(--numeroCasas);
  }
}

void movimentoBispo(int numeroCasas) {

  if(numeroCasas > 0){ 
    for (int i = 0; i < 1; i++) {
      printf("Cima, ");
      for (int j = 0; j < 1 ; j++) {
        printf("Direita\n");
      }
      movimentoBispo(numeroCasas - 1);
    }
  }
}

int main() {

  int torre = 5, rainha = 8, bispo = 5, cavalo = 1;

  printf("Movimentação torre.\n");
  movimentoTorre(torre);
  printf("----------\n");

  printf("Movimentação rainha.\n");
  movimentoRainha(rainha);
  printf("----------\n");

  printf("Movimentação bispo.\n");
  movimentoBispo(bispo);
  printf("----------\n");

  printf("Movimentação Cavalo.\n");
  while (cavalo--)
  {
    for (int i = 0; i < 2; i++)
    {
      printf("Cima, ");
    }
    printf("Direita\n");
    
  }
  printf("----------\n");
  

  return 0;
}
