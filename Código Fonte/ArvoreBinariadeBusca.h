/** @file ArvoreBinariadeBusca.h
 *  @brief Contém as funções que criam a arvore binária de busca

 *  @Students Lucas S. Oliveira RGA 201521901005 && Gustavo da Costa 201521901011
 *  @Reference Source https://pt.wikibooks.org/wiki/Programar_em_C/%C3%81rvores_bin%C3%A1rias
 *  As funções foram copiadas e adpatadas conforme a necessidade do Trabalho
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
double contador=0;


struct Binaria // struct Para o tipo Arvore de Busca Binaria
{
    int cont;
    char *string;
    struct Binaria* esq;
    struct Binaria* dir;

};

typedef struct Binaria Noh;


void CriaArvoreBinaria(Noh *raiz[]) // Cria a Arvore Binaria de Busca
{
    *raiz = NULL;
}

void PrintaEmOrdem(Noh *raiz)  // Realiza a impressao da arvore com o metodo em ordem através da recursividade
{

    if(raiz != NULL)
    {

        PrintaEmOrdem(raiz->esq);
        if(raiz->string!=" ")
            printf("%s, %d\n", raiz->string, raiz->cont);

        PrintaEmOrdem(raiz->dir);
    }
}


void ApagaArvoreBinaria(Noh *raiz)  // Elimina a Arvore Binaria
{
    if( raiz != NULL )
    {
        ApagaArvoreBinaria(raiz->esq);
        ApagaArvoreBinaria(raiz->dir);
        free( raiz->string );
        free( raiz );
    }
}




void InsereNoh(Noh *raiz[], char texto[], int tamanhostring) // Insere um termo na arvore e contabilza os testes realizados de forma recursiva
{

    Noh * aux = NULL;
    int i=0;

    if((*raiz) == NULL )
    {
        aux= (Noh*)malloc(sizeof(Noh));
        aux->cont = 1;
        aux->dir = aux->esq = NULL;
        aux->string =(char*)malloc((tamanhostring)*(sizeof(char)));
        while (i<tamanhostring)
        {
            aux->string[i] = texto[i];
            i++;
        }
        *raiz = aux;
        return;
    }

    else
    {

        if(strcmp(texto, (*raiz)->string) == 0  && contador++)
            ((*raiz)->cont)=((*raiz)->cont)+1;
        else if( strcmp(texto,(*raiz)->string) < 0 && contador++)
            InsereNoh(&(*raiz)->esq, texto,tamanhostring);
        else if( strcmp(texto, (*raiz)->string) > 0 && contador++)
            InsereNoh(&(*raiz)->dir, texto,tamanhostring);

    }
    contador++; // Nesta linha é contabilizado a compração do primeiro if  da função.


}
