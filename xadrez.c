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
  printf("4 - Cavalo\n");
  printf("\nDigite o número da sua escolha: ");
}

// Essa função simula o movimento da Torre no tabuleiro de xadrez usando a recursão.
void moverTorre(int movimentos) {
  if (movimentos <= 0) return; // Condição de parada para a recursão
  printf("Direita\n");
  usleep(500000); // Pausa de 0.5 segundos para simular o movimento
  moverTorre(movimentos - 1); // Chamada recursiva para continuar o movimento
}

// Essa função simula o movimento do Bispo no tabuleiro de xadrez usando um loop aninhado e recursão.
void moverBispo(int movimentos) {
  if (movimentos <= 0) return; // Condição de parada

  for (int i = 0; i < 1; i++) {
    printf("Cima\n");
    usleep(500000); // Pausa de 0.5 segundos para simular o movimento
    for (int j = 0; j < 1; j++) {
      printf("Direita\n");
      usleep(500000); // Pausa de 0.5 segundos para simular o movimento
    }
  }

  moverBispo(movimentos - 1); // Chamada recursiva para continuar o movimento
}

// Essa função simula o movimento da Rainha no tabuleiro de xadrez usando recursão.
void moverRainha(int movimentos) {
  if (movimentos <= 0) return; // Condição de parada
  printf("Esquerda\n");
  usleep(500000); // Pausa de 0.5 segundos para simular o movimento
  moverRainha(movimentos - 1); // Chamada recursiva para continuar o movimento
}

// Essa função simula o movimento do Cavalo no tabuleiro de xadrez, usando um loop com multiplas variáveis e condições usando continue e break para controlar o fluxo do programa.
void moverCavalo() {
  int movimentos = 3;
  for (int i = 0, j = 0; i < movimentos; i++, j += (i % 2 == 0 ? 1 : 0)) {
    if (i < 2) {
      printf("Cima\n");
      usleep(500000);
      continue; // volta para o início do loop para concluir os movimentos verticais
    }

    if (j == 1) {
      printf("Direita\n");
      break; // encerra o loop quando o movimento completo em L foi feito
    }
  }
}

// Essa função recebe a escolha do usuário e executa a ação correspondente.
void escolherPeca(int escolha) {
  switch (escolha) {
    case 1:
      printf("\nMovendo a Torre 5 casas para a direita...\n\n");
      moverTorre(5);
      break;
    case 2:
      printf("\nMovendo o Bispo 5 casas na diagonal para cima e à direita...\n\n");
      moverBispo(5);
      break;
    case 3:
      printf("\nMovendo a Rainha 8 casas para a esquerda...\n");
      moverRainha(8);
      break;
    case 4:
      printf("\nMovendo o Cavalo 2 casas para baixo e 1 casa para a esquerda...\n\n");
      moverCavalo();
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