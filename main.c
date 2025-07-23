#include <stdio.h>
#include <stdlib.h>
#include "get.h"
#include "set.h"

struct Book 
{
   int id;
   char * title[100];
   char * author[100];
   int launch_year;
   float price;
};

typedef struct Book Book;

int main()
{
   Book* insertions = malloc(0*sizeof(Book));

   while(1)
   {
      int opt = 0;
      printf("\n<----------------------------------------->\n");
      printf("Programa de Controle da Biblioteca\n");
      printf("<----------------------------------------->\n");
      printf("1 - Adicionar novo livro\n");
      printf("2 - Remover Livro\n");
      printf("3 - Editar Livro\n");
      printf("0 - Sair do programa\n");
      scanf("%d", &opt);
      
      if(opt == 0) break;
      switch (opt) {
         case 1:
         break;
         case 2:
         break;
         case 3:
         break;
      }
   }

   return 0;
}
