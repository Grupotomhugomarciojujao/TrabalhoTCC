/*
Nome:João Pedro de Paula
RA:2208458



Linguagem L={ a^n b^n | n>=0}
w=palavra
K=numero de estados do AFD (supondo exista um AFD que conhece a palavra Z)
|Z|>= k
w= u v w
|prefixo u| v |sufixo z|

|uv| precisa ser menor k
v não pode ser vazio

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAMANHO 30

int main()
{
    int p = 2;       // definindo p

    printf("Digite o valor de p: ");
    scanf("%d", &p);

    char palavraFeita[TAMANHO] = "\0";
    char palavra1[2] = "a";
    char palavra[2] = "b";
    for (int j = 0; j < p; j++)
    {
        strcat(palavraFeita, palavra1);
    }

    for (int j = 0; j < p; j++)
    {
        strcat(palavraFeita, palavra);
    }

    printf("Palavra montada = %s\n\n\n", palavraFeita);


    int contador = 2*p;
    
    char u[TAMANHO] = "a";
    char v[TAMANHO] = "ab";
    char z[TAMANHO] = "b";

   

    setbuf(stdin, NULL);
    printf("Digite o valor de U: ");
    fgets(u, 30,stdin);
    u[strcspn(u,"\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o valor de V: ");
    fgets(v, 30,stdin);
    v[strcspn(v,"\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o valor de Z: ");
    fgets(z, 30,stdin);
    z[strcspn(z,"\n")] = '\0';
    setbuf(stdin, NULL);

 int SomaTotal=0;
 SomaTotal=strlen(u);
 SomaTotal+=strlen(v);
  SomaTotal+=strlen(z);
    if(!(SomaTotal==contador)){
    printf("Quantidade de palavras insuficiente ou ultrapassada");
    exit(1);
    }


    char aux[TAMANHO] = "\0";
    strcpy(aux,v);
    
    int i = 2;      //Definindo i     v^ i
    
    printf("Digite o valor de i : ");
    scanf("%d", &i);
    
    for(int k = 0; k < i-1; k++)
    {
        strcat(v,aux);
    }

    char palavraFormada[TAMANHO] = "\0";

    strcat(palavraFormada,u);
    strcat(palavraFormada,v);
    strcat(palavraFormada,z);

    printf("Palavra formada = %s\n\n", palavraFormada);

    if(strcasecmp(palavraFormada, palavraFeita) == 0)
    {
        printf("A LINGUAGEM PODE SER REGULAR\n\n");
    } else {
        printf("A LINGUAGEM NAO E REGULAR\n\n");
    }

}
