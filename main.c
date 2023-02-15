#include <stdio.h>

#define TAMANHO 5
const int FALSE = 0;
const int TRUE = 1;
const int VAZIA = 0;

int pilha[TAMANHO];
int posicao = 0;

int menu();
int push(int dado);
int pop(int *valor);

int main() {
     int opcao = 0;
     int numero;
     int resultado = 0;

     while(opcao != 3)
     {
         opcao = menu;

         switch (opcao) {
             case 1:
                 printf("Digite um num: ");
                 scanf("%d", &numero);
                 resultado = (push(numero));
                 if(!resultado){
                     printf("STACKOVERFLOW");
                 }
                 break;

             case 2:
                resultado = pop(&numero);
                if(!resultado){

            }



     }




    return 0;
}

int push(int dado){
    if(posicao == TAMANHO) //SE PILHA CHEIA
    {
        return FALSE;
    }

    pilha[posicao] = dado;
    posicao++;

    return TRUE;
}

int pop(int *valor){
    if(posicao == VAZIA)
    {
        return FALSE;
    }

    posicao--;
    *valor = pilha[posicao];

    return TRUE;
}

int menu()
{
    int retorno = 0;
    printf("1 - PUSH\n");
    printf("2 - POP\n");
    printf("3 - EXIT\n");
    printf("SELECIONE UMA OPCAO: \n");
    scanf("%d", &retorno);
}
