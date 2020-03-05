/** @file ArvoreAVL.h
 *  @brief Passa as referencias das funcoes para esta biblioteca

	CODIGO FONTE ADAPTADO PARA OS FINS DO TRABALHO
	* CODIGO FONTE DA AVL TREE:
	* http://www.facom.ufu.br/~backes/wordpress/ProjArvoreAVL.zip
	* https://programacaodescomplicada.wordpress.com/sobre/about/
	*
 *  @author Lucas S. Oliveira RGA 201521901005 && Gustavo da Costa 201521901011
 */
/**
 * @brief AVL TREE VS BINARY SEARCH TREE
 */
 double contadoravl=0;
typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();
/* FUNCAO QUE CRIA A ESTRUTURA DE DADOS ARVORE AVL*/
void libera_ArvAVL(ArvAVL *raiz);
/* FUNCAO QUE APAGA A ARVORE AVL */
int insere_ArvAVL(ArvAVL *raiz, char palavra[],int n);
/* INSERE A STRING LIDA DO ARQUIVO DE TEXTO*/
int estaVazia_ArvAVL(ArvAVL *raiz);
/* VERIFICA SE A ARVORE ESTA VAZIA*/
int altura_ArvAVL(ArvAVL *raiz);
/* RETORNA A ALTURA DA ARVORE*/
void emOrdem_ArvAVL(ArvAVL *raiz);
/* PRINTA A ARVORE EM ORDEM*/
