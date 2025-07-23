#include <stdio.h>
#include <stdlib.h>
#include "get.h"


int setBooks(struct Book * books, char * filename, int len)
{
   FILE * file = fopen(filename, "w");
   if(file == NULL) return 1;

   fprintf(file, "%d\n", len);
   for (int i = 0; i < len; i++) {
      fprintf(file, "%d\n", books[i].id);
      fprintf(file, "%s\n", books[i].title);
      fprintf(file, "%s\n", books[i].author);
      fprintf(file, "%d\n", books[i].launch_year);
      fprintf(file, "%.2f\n", books[i].price);
   }
   
   return 0;
}

int greaterId(struct Book * books, int len)
{
   int greater = 0;

   for (int i = 0; i < len; i++) {
      if(books[i].id>greater) greater = books[i].id;
   }

   return greater;
}

int addBook(struct Book * books,struct Book newBook, int len)
{

   len++;
   newBook.id = greaterId(books, len)+1;
   books = realloc(books, len*sizeof(struct Book));
   books[len-1] = newBook;

   return len;
}
int removeBook(struct Book * books, int id,int len)
{
   len--;
   int i = searchBook(books, id);
   struct Book temp;
   temp = books[len];
   books[len] = books[i];
   books[i] = temp;
   books = realloc(books, len*sizeof(struct Book));

   return len;
}

int editTitle(struct Book * books, int id, char * newVal)
{
   int i = searchBook(books, id);

   sprintf(books[i].title, "%s", newVal);
   return i;
}
int editAuthor(struct Book * books, int id, char * newVal)
{
   int i = searchBook(books, id);

   sprintf(books[i].author, "%s", newVal);
   return i;
}
int editYear(struct Book * books, int id, int newVal)
{
   int i = searchBook(books, id);

   books[i].launch_year = newVal;
   return i;
}
int editPrice(struct Book * books, int id, float newVal)
{
   int i = searchBook(books, id);

   books[i].price = newVal;
   return i;
}

