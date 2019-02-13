// Multiplicação de dois números inteiros.
/* Desenvolvido por Rômulo de Carvalho,
com intuito de um exemplo no github.
Multiplica dois números inteiros*/

#include <stdio.h>  /* É um cabeçalho da biblioteca padrão do C. Seu nome vem da
                      expressão inglesa standard input-output header, que
                      significa "cabeçalho padrão de entrada/saída".*/
#include <stdlib.h> /* É um arquivo cabeçalho da biblioteca de propósito geral
                    padrão da linguagem de programação C.
                    Ela possui funções envolvendo alocação de memória, controle
                    de processos, conversões e outras.*/

int main() {  // função principal.
  /* code */
  int mult, a, b; // declarando variáveis, do tipo inteiro.
  printf(" Digite um número: \n" ); // mensagem para inserir primeiro número.
  scanf("%d", &a); // reservando espaço, variávela para operação.
  printf(" Digite outro número: \n" ); //mensagem para inserir o próximo número.
  scanf("%d", &b ); // reservando espaço variável b.
  mult = a*b; // atribuindo valor a variável mult.
  printf(" O valor da Multiplicação, entre %d e %d vale -> %d\n",
  a, b, mult ); // imprimindo valor na tela.
  return 0;
}
