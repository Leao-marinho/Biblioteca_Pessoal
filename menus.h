#ifndef BIBLIOTECA_MENUS_H
#define BIBLIOTECA_MENUS_H

#include "biblioteca.h"
#include "utils.h"

/*
 * Mostra uma lista das categorias disponíveis
 */
void mostrarListaCategorias();

/*
 * Interface para listar os livros
 * ordenado por ordem alfabética do nome
 * ou ordenado por ordem crecesnte do número de páginas
 */
void menuListaTodosLivros(Biblioteca &biblioteca);

/*
 * Interface para listar os livros de uma dada categoria escolhida pelo utilizador
 */
void menuListaCategoriaLivros(Biblioteca &biblioteca);

/*
 * Interface para procurar um livro.
 * O livro pode ser procurado através do nome, do autor, da editora e do ISBN
 */
void menuProcurarLivro(Biblioteca &biblioteca);

/*
 * Interface para adicionar um livro.
 * O livro é adicionado através duma escolha da categoria a que esse livro pertence
 * e através do preenchimento dum formulário
 */
void menuAdicionarLivro(Biblioteca &biblioteca);

/*
 * Função auxiliar aos menus menuAlteracaoInformacao e menuRemoverLivro
 * É pedido ao utilizador que indique um ISBN do livro a alterar/remover
 * Retorna o livro que tem o ISBN indicado
 */
Livro* pedirISBN(Biblioteca &biblioteca);

/*
 * Função auxiliar ao menuRemoverLivro que pede ao utilizador para confirmar a remoção do livro
 */
void confirmarRemocao(Biblioteca &biblioteca);

/*
 * Interface que remove um livro do set dado o ISBN e a categoria desse livro
 */
void menuRemoverLivro(Biblioteca &biblioteca);

/*
 * Função auxiliar ao menuAlteracaoInformacao que pede ao utilizador para confirmar a alteração
 * Uma vez que as informações dum livro nunca sofrem alterações, a única informação passível de alteração é a localização deste
 */
void confirmarAlteracao(Biblioteca &biblioteca);

/*
 * Interface que altera a localização de um livro dado o ISBN desse livro
 */
void menuAlteracaoInformacao(Biblioteca &biblioteca);

/*
 * Interface principal
 */
void mainMenu(Biblioteca &biblioteca);

#endif //BIBLIOTECA_MENUS_H
