/* Projeto em c apenas para aprendizado 
   não deve ser levado a sério! */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Inicializa o gerador de números aleatórios
  srand(time(NULL));

  // Gera um número aleatório entre 1 e 100
  int numero_aleatorio = rand() % 100 + 1;

  // Variável para armazenar o palpite do usuário
  int palpite;

  // Loop para obter os palpites do usuário
  while (1) {
    // Solicita ao usuário que insira um palpite
    printf("Digite seu palpite (entre 1 e 100): ");
    scanf("%d", &palpite);

    // Verifica se o palpite está correto
    if (palpite == numero_aleatorio) {
      printf("Parabéns! Você acertou!\n");
      break;
    } else if (palpite < numero_aleatorio) {
      printf("Seu palpite é muito baixo. Tente novamente.\n");
    } else {
      printf("Seu palpite é muito alto. Tente novamente.\n");
    }
  }

  return 0;
}