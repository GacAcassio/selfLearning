//Livro Estrutura de Dados em C(Tenebaun, Aaaron M.)
//Implementação de uma pilha para solucionar o 2.2.8
// A pilha implementada usa um vetor para armazenar seus elementos
//essa é uma opção de implementação que contradiz a dinâmica de uma pilha, 
//pois limita o numero maximo de elementos.
//No entanto é um bom indicador das operações e funcionamento de uma pilha
#include <stdio.h>
#include<string.h>
#define clscr printf("\e[1;1H\e[2J")
//definição do múmeros de elementos da pilha
#define maxSize 8
//estutura da pilha para o tipo de implementação escolhido
struct stack{
  char placa[maxSize][9];
  int top;
};
typedef struct stack Stack;
int empty(Stack* s){
  return (s->top)+1;
}
int full(Stack* s){
  return !((s->top)-(maxSize-1));
}
char stcakTop(Stack* s){
  return s->placa[s->top];
}
void pushElement(char element[], Stack* s){
  if(full(s)){
    printf("Não ha espaco no estacionamento\n");
  }else{
    s->top++;
    strcpy(s->placa[s->top],element);   
  }
}
void popElement(Stack* s){
  if(empty){
    printf("Não ha carros para retirar\n");
  }else{
    strcpy(s->placa[s->top],"000000000");
    s->top--;
  }
}
int main(void) {
  Stack estacionamento, aux;
  estacionamento.top=-1;
  aux.top=-1;
  char op;
  char placa[9];
  do{
    do{
      printf("E\tPARA ESTACIONAR UM CARRO\nS\tPARA RETIRAR UM CARRO\nZ\tPARA ENCERRAR\nINSIRA UMA OPCAO(E,S,Z):");
      scanf("%c", &op);
    }while(op!='E'&&op!='S'&&op!='Z');
    if(op=='E'){
      printf("\nINSIRA A PLACA DO VEICULO:");
      scanf("%[^\n]s", placa);
      pushElement(placa, &estacionamento);
      printf("\n");
    }
    
  }while(op!='Z');
  return 0;
}
