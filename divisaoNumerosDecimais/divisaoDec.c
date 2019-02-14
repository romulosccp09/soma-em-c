// Divisão entre dois números decimais.
/* Desenvolvido por Rômulo de Carvalho,
* esse programa tem o intuito, de exemplifica no github, a divisão entre
* dois números do tipo decimal.*/
#include <stdio.h>  /* É um cabeçalho da biblioteca padrão do C. Seu nome vem da
                      expressão inglesa standard input-output header, que
                      significa "cabeçalho padrão de entrada/saída".*/
#include <stdlib.h> /* É um arquivo cabeçalho da biblioteca de propósito geral
                    padrão da linguagem de programação C.
                    Ela possui funções envolvendo alocação de memória, controle
                    de processos, conversões e outras.*/

int main() {
  /* code */

float divi, a, b; // declarando variáveis, do tipo inteiro.
printf(" Digite um número: \n" ); // mensagem para inserir primeiro número.
scanf("%f", &a); // reservando espaço, variávela para operação.

printf(" Digite outro número: \n" ); //mensagem para inserir o próximo número.
scanf("%f", &b ); // reservando espaço variável b.

divi = a/b; // atribuindo valor a variável divi.

printf(" O valor da divisão, entre %.2f e %.2f vale -> %.2f\n",
a, b, divi ); // imprimindo valor na tela.

  return 0;
}
