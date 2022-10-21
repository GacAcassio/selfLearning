//implementado no replit
// Livro Estrutura de Dados em C(Tenebaun, Aaaron M.)
// Implementação de uma pilha para solucionar o 2.2.8
// A pilha implementada usa um vetor para armazenar seus elementos
// essa é uma opção de implementação que contradiz a dinâmica de uma pilha,
// pois limita o numero maximo de elementos.
// No entanto é um bom indicador das operações e funcionamento de uma pilha
#include <stdio.h>
#include <string.h>
#define clscr printf("\e[1;1H\e[2J")
// definição do múmeros de elementos da pilha
#define maxSize 8
// estutura da pilha para o tipo de implementação escolhido
struct stack {
  char placa[maxSize][9];
  int top;
  int m[maxSize];
};
//Cria o tipo de dado stack
typedef struct stack Stack;
//a função verifica se a lista está vazia(vazia->top=-1, -1+1=0=False, !top+1=True)
int empty(Stack *s) { return !((s->top) + 1); }
int full(Stack *s) { return !((s->top) - (maxSize - 1)); }
int quantM(Stack *s) { return s->m[s->top]; }
void pushElement(char element[], Stack *s, int n) {
  s->top++;
  strcpy(s->placa[s->top], element);
  s->m[s->top] = n;
}
void popElement(Stack *s) {
  if (empty(s)) {
    printf("Não ha carros para retirar\n");
  } else {
    strcpy(s->placa[s->top], "000000000");
    s->m[s->top] = 0;
    s->top--;
  }
}
int main(void) {
  //cria uma pilha principal e uma auxiliar
  Stack estacionamento, aux;
  //define o topo da pilha e preenche o ekemento m(manobras)
  estacionamento.top = -1;
  aux.top = -1;
  for (int i = 0; i < maxSize; estacionamento.m[i++] = 0);
  for (int i = 0; i < maxSize; aux.m[i++] = 0);
  
  char op;
  char placa[9];
  //Menu
  do {
    do {
      clscr;
      printf("E\tPARA ESTACIONAR UM CARRO\nS\tPARA RETIRAR UM CARRO\nZ\tPARA "
             "ENCERRAR\nINSIRA UMA OPCAO(E,S,Z):");
      scanf("%c", &op);
    } while (op != 'E' && op != 'S' && op != 'Z');
    if (op == 'E') {
      getchar();
      if (full(&estacionamento)) {
        printf("Não ha espaco no estacionamento\n");
        break;
      } else {
        printf("\nINSIRA A PLACA DO VEICULO:");
        scanf("%9[^\n]s", placa);
        pushElement(placa, &estacionamento, 0);
        printf("\n");
      }
    }
    if (op == 'S') {
      //imprime os carros no estacionamento utilizando as operações de pilha
      printf("\nCarros no estacionamento:");
      int j = estacionamento.top + 2;
      while (!empty(&estacionamento)) {
        j--;
        printf("\n%d\t%s", j, estacionamento.placa[estacionamento.top]);
        pushElement(estacionamento.placa[estacionamento.top], &aux,
                    quantM(&estacionamento));
        popElement(&estacionamento);
      }
      while (!empty(&aux)) {
        pushElement(aux.placa[aux.top], &estacionamento, quantM(&aux));
        popElement(&aux);
      }
      getchar();
      printf("\nINSIRA A PLACA DO VEICULO A SER RETIRADO:");
      scanf("%9[^\n]s", placa);
      while (!empty(&estacionamento) &&
             strcmp(estacionamento.placa[estacionamento.top], placa)) {
        j++;
        pushElement(estacionamento.placa[estacionamento.top], &aux,
                    quantM(&estacionamento));
        popElement(&estacionamento);
      }
      if (!strcmp(estacionamento.placa[estacionamento.top], placa)) {
        printf("O carro de placa %s foi retirado\nManobras feitas:%d\n",
               estacionamento.placa[estacionamento.top],
               quantM(&estacionamento));
        popElement(&estacionamento);
        while (!empty(&aux)) {
          pushElement(aux.placa[aux.top], &estacionamento, (quantM(&aux) + 1));
          popElement(&aux);
        }
      } else {
        while (!empty(&aux)) {
          pushElement(aux.placa[aux.top], &estacionamento, quantM(&aux));
          popElement(&aux);
        }
        printf("Carro não encontrado\n");
      }
      getchar();
      getchar();
    }
  } while (op != 'Z');
  return 0;
}
