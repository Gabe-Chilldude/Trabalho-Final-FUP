# Aplicação de Armazenamento de Livros 

# ARQUIVOS E FUNÇÕES

## ARQUIVO: main.c

Onde as interações com usuários são programadas, aplicação prática das funções dos headers vai ser feita nesse arquivo

## ARQUIVO: Book.h

Possui a estrutura do livro

## ARQUIVO: get.h

Arquivo de header que lida com a leitura de arquivos e armazenamento de seus dados

### FUNÇÕES
- **struct Book * getBooks(char * filename)** -> abre arquivo recebido e armazena seu conteúdo em um vetor de de estruturas que é o retorno da função
- **int searchBook(struct Book * books, int id)** -> procura por uma inserção em um vetor de estruturas de livros e retorna seu índice dentro do vetor


## ARQUIVO: set.h

Arquivo de header que lida com escrita edição de dados dentro de arquivos

## FUNÇÕES
- **int setBooks(struct Book * books, char * filename, int len)** -> insere dados de um vetor de estruturas dentro de um arquivo, a primeira linha do arquivo possui a quantidade de inserções no arquivo
   - parâmetro len se refere a tamanho do vetor de estruturas
- **int addBook(struct Book * books, struct Book newBook, int len)**-> adiciona inserção no fim de vetor de estruturas
- **int removeBook(struct Book * books, int id, int len)** -> remove inserção de vetor de estruturas e altera seu tamanho
- funções de edit, Ex.: **int editTitle(struct Book * books, int id, char * newVal)** -> procura por inserção pelo id e insere novo valor no seu campo title




