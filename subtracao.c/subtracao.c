// Subtração entre dois números inteiros em Linguagem C.
/* Desenvolvido por Rômulo de Carvalho.
em liguage C.
  Soma de dois números inteiros*/

#include <stdio.h> // Biblioteca de entrada e saída padrão.
#include <stdlib.h> // Biblioteca de leitura padrão.

int main() {  // Função principal.
  int sub, a, b;  // declarando variáveis inteiras.
  printf(" Digite um número: \n" ); // Exibe mensagem para digitar o primeiro número.
  scanf("%d",&a ); // Reserva espaço na memória, para variável a.
  printf(" Digite outro número: \n" ); // Exibe mensagem para digitar o primeiro número.
  scanf("%d", &b ); // Reserva espaço na memória, para variável b.

  sub = a-b; // atribuindo o valor da adição de a e b, para variável soma.
  printf(" A soma de %d, e %d vale - > %d\n", a, b, sub ); //imprimindo valor em tela, apresentando com uma mensagem.

  return 0;
}
