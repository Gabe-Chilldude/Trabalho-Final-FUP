#include <stdio.h>
#include <stdlib.h>
#include "Book.h"

struct Book * getBooks(char* filename)
{
   FILE * file = fopen(filename, "r");
   int n = 0;

   if(file == NULL) return NULL;
   fscanf(file, "%d", &n);
   struct Book * books = malloc(n*sizeof(struct Book));

   for (int i = 0; i < n; i++) {
      fscanf(file, "%d", &books[i].id);
      fscanf(file, "%s", &books[i].title);
      fscanf(file, "%s", &books[i].author);
      fscanf(file, "%d", &books[i].launch_year);
      fscanf(file, "%f", &books[i].price);
   }

   fclose(file);
   return books;
}

int searchBook(struct Book * books, int id)
{
   int i = -1;
   while(books[i].id!=id) i++;

   return i;
}
