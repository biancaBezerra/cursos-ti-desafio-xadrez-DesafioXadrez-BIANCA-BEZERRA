#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas){
  if (casas >0){
    printf("Direita\n");
    moverTorre(casas - 1);
  }
}

void moverRainha(int casas){
  if (casas >0){
    printf("Esquerda\n");
    moverRainha(casas - 1);
  }
}

void moverBispo(int casas){
  if (casas > 0){
    printf("Direita\n"); 
    moverBispo(casas - 1);
  }
    
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // int casaBispo = 1; //5 casas na diagonal
    // int casaTorre = 1; //5 casas para direita
    // int casaRainha; // 8 casas para esquerda

    // while (casaBispo <= 5){
    //   printf("%d - Cima, Direita\n", casaBispo);
    //   casaBispo++;
    // }

    // while(casaTorre <= 5){
    //   printf("%d - Direta\n", casaTorre);
    //   casaTorre++;
    // }

    // for (casaRainha = 1; casaRainha <= 8; casaRainha++){
    //   printf("%d - Esquerda\n", casaRainha);
    // }
    


    // // Nível Aventureiro - Movimentação do Cavalo
    // // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // // Um loop pode representar a movimentação horizontal e outro vertical.
    // int casaCavaloX;//2 casas para baixo
    // int casaCavaloY;// 1 casa para esquerda

    // for (int casaCavaloY = 1; casaCavaloY <= 1; casaCavaloY++){
    //   for (int casaCavaloX = 1; casaCavaloX <= 2; casaCavaloX++){
    //     printf("%d - Baixo\n", casaCavaloX);
    //   }
    //   printf("%d - Esquerda\n", casaCavaloY);
    // }
    


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    moverTorre(5);
    printf("\n");

    moverRainha(8);
    printf("\n");

    for (int casaBispo = 1; casaBispo <= 5; casaBispo++){
      for (int casaBispo = 1; casaBispo <= 1; casaBispo++){
        printf("Cima\n");
      }
      moverBispo(1);
    }
    printf("\n");


    int casaCavaloX;//2 casas para cima
    int casaCavaloY;// 1 casa para direita

    for (int casaCavaloY = 1; casaCavaloY <= 1; casaCavaloY++){
      for (int casaCavaloX = 1; casaCavaloX <= 2; casaCavaloX++){
        printf("Cima\n");
      }
      printf("Direita\n\n");
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.



    return 0;
}
