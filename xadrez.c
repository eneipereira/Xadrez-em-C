#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Essa função exibe o menu de opções para o usuário escolher uma peça de xadrez.
void exibirMenu() {
  printf("\n===== Bem-vindo(a) ao jogo de Xadrez =====\n\n");
  printf("Você pode escolher entre as seguintes peças:\n\n");
  printf("1 - Torre\n");
  printf("2 - Bispo\n");
  printf("3 - Rainha\n");
  printf("\nDigite o número da sua escolha: ");
}

// Essa função simula o movimento da Torre no tabuleiro de xadrez usando o for.
void moverTorre() {
  int quantidadeMovimentos = 5;
  for (int i = 0; i < quantidadeMovimentos; i++) {
    printf("Direita\n");
    usleep(500000); // Pausa de 0.5 segundos para simular o movimento
  }
}

// Essa função simula o movimento do Bispo no tabuleiro de xadrez usando o while.
void moverBispo() {
  int quantidadeMovimentos = 5;
  while (quantidadeMovimentos > 0) {
    printf("Cima, direita\n");
    usleep(500000); // Pausa de 0.5 segundos para simular o movimento
    quantidadeMovimentos--;
  }
}

// Essa função simula o movimento da Rainha no tabuleiro de xadrez usando o do-while.
void moverRainha() {
  int quantidadeMovimentos = 8;
  do {
    printf("Esquerda\n");
    usleep(500000); // Pausa de 0.5 segundos para simular o movimento
    quantidadeMovimentos--;
  } while (quantidadeMovimentos > 0);
}

// Essa função recebe a escolha do usuário e executa a ação correspondente.
void escolherPeca(int escolha) {
  switch (escolha) {
    case 1:
      printf("\nMovendo a Torre 5 casas para a direita...\n\n");
      moverTorre();
      break;
    case 2:
      printf("\nMovendo o Bispo 5 casas na diagonal para cima e à direita...\n\n");
      moverBispo();
      break;
    case 3:
      printf("\nMovendo a Rainha 8 casas para a esquerda...\n");
      moverRainha();
      break;
    default:
      printf("\nEscolha inválida! Por favor, escolha uma peça válida.\n");
      break;
  }
}

// Função principal que exibe o menu e processa a escolha do usuário.
int main () {
  int escolha;
  exibirMenu();
  scanf("%d", &escolha);

  escolherPeca(escolha);

  return 0;
}