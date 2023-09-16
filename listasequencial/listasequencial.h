#ifndef listasequencial
#define listasequencial
#define MAX 100

typedef struct{
    int matricula;
    char nome[30];
    float n1,n2,n3;



}Aluno;
typedef struct{
    int qtd;
    Aluno dados[MAX];




}Lista;

 Lista* criar_lista();
 int lista_cheia(Lista* li);

 int tamanho_lista(Lista* li);

 int lista_vazia(Lista* li);






#endif // listasequencial
