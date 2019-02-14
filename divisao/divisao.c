// Divisão entre dois números inteiros.
/* Desenvolvido por Rômulo de Carvalho,
*com intuito de um exemplo no github.
*divide dois números inteiros, e mostra
*o resto caso não seja exata*/

#include <stdio.h>  /* É um cabeçalho da biblioteca padrão do C. Seu nome vem da
                      expressão inglesa standard input-output header, que
                      significa "cabeçalho padrão de entrada/saída".*/
#include <stdlib.h> /* É um arquivo cabeçalho da biblioteca de propósito geral
                    padrão da linguagem de programação C.
                    Ela possui funções envolvendo alocação de memória, controle
                    de processos, conversões e outras.*/

int main() {  // função principal.
  /* code */
  int divi, a, b; // declarando variáveis, do tipo inteiro.
  printf(" Digite um número: \n" ); // mensagem para inserir primeiro número.
  scanf("%d", &a); // reservando espaço, variávela para operação.

  printf(" Digite outro número: \n" ); //mensagem para inserir o próximo número.
  scanf("%d", &b ); // reservando espaço variável b.

  divi = a/b; // atribuindo valor a variável divi.

  if (a > b) {
    if (a%b == 0) {
    /* code */
    printf(" O valor da divisão, entre %d e %d vale -> %d\n",
    a, b, divi ); // imprimindo valor na tela.
  }
    else{

    printf("A divisão entre %d e %d vale -> %d, e seu resto vale -> %d\n",
     a, b, divi, a%b ); // imprimindo a outra condição na tela.

}

}

else {

 printf(" Não há valor inteiro!\n"); // condição para a<b.

}

  return 0;
}
