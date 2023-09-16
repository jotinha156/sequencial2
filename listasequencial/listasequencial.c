#include <stdio.h>
#include <stdlib.h>
#include "listasequencial.h"

Lista* criar_lista(){
    Lista *li;
    li=(Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        li->qtd=0;
    return li;






}

 int tamanho_lista(Lista* li){
     if(li==NULL)
        return -1;
    else
        return li->qtd;



 }
int lista_cheia(Lista* li){
    if(li==NULL){
        return -1;
        }

     return (li->qtd==MAX);
}

int lista_vazia(Lista* li){
    if(li==NULL)
        return -1;
    return (li->qtd==0);
}

