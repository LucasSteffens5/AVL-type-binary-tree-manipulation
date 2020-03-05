/** @file main.c
 *  @brief pagina principal do programa

	  CODIGO FONTE ADAPTADO PARA OS FINS DO TRABALHO

	* CODIGO FONTE DA AVL TREE:
	* http://www.facom.ufu.br/~backes/wordpress/ProjArvoreAVL.zip
	* https://programacaodescomplicada.wordpress.com/sobre/about/

 *  @author Lucas S. Oliveira RGA 201521901005 && Gustavo da Costa 201521901011
 */
/**
 * @brief AVL TREE VS BINARY SEARCH TREE
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"
#include "ArvoreBinariadeBusca.h" // Inclui a biblioteca criada com as funções de manipulação de Arvore Binaria
#include <ctype.h>

int main(int argc, char *argv[]){
  clock_t tempo_i, tempo_f,tempo_iavl, tempo_favl;
  float tempo_medio,tempo_medioavl;
    ArvAVL* avl;
    int res,i=0;
	char c,palavra[20];
	FILE *arquivo,*arquivo2;
	arquivo = fopen(argv[1], "r");

  tempo_iavl = clock();
  avl = cria_ArvAVL();
	if(arquivo == NULL){
		printf("O arquivo esta vazio!!");
	}
	else{
		while((c=fgetc(arquivo)) != EOF){
			if(isalpha(c)&&isalnum(c)){

					c = tolower(c);

				palavra[i]= c;
				i++;
			}
			if(isspace(c)){
				if(i != 0){
					palavra[i] = '\0';
					res = insere_ArvAVL(avl,palavra,i);
					i = 0;
				}
			}
		}
	}
  tempo_favl = clock();
    fclose(arquivo);



arquivo2 = fopen(argv[1], "r");
Noh *raiz;

tempo_i = clock();
CriaArvoreBinaria(&raiz);
if(arquivo == NULL){
  printf("O arquivo esta vazio!!");
}
else{
  while((c=fgetc(arquivo)) != EOF){
    if(isalpha(c)&&isalnum(c)){

        c = tolower(c);

      palavra[i]= c;
      i++;
    }
    if(isspace(c)){
      if(i != 0){
        palavra[i] = '\0';
          InsereNoh(&raiz, palavra,i);
        i = 0;
      }
    }
  }
}

tempo_f = clock();
  fclose(arquivo2);


      tempo_medioavl=(tempo_favl - tempo_iavl)/(CLOCKS_PER_SEC*1.0000000);
      tempo_medio=(tempo_f - tempo_i)/(CLOCKS_PER_SEC*1.0000000);
      printf("\nArvore AVL\nTempo: %f\nTotal Comparacoes: %1.f\n",tempo_medio,contadoravl);
    printf("\nArvore Binaria\nTempo: %f\nTotal Comparacoes: %1.f\n\nPalavras e Frequencia de repeticao:\n\n",tempo_medio,contador);
     emOrdem_ArvAVL(avl);
     libera_ArvAVL(avl);

       ApagaArvoreBinaria(raiz); // Apaga a Arvore para liberar o espaço da memória


    return 0;
}
