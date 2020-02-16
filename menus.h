#ifndef BIBLIOTECA_MENUS_H
#define BIBLIOTECA_MENUS_H

#include "biblioteca.h"
#include "utils.h"

void mostrarListaCategorias();

void menuListaTodosLivros(Biblioteca &biblioteca);
void menuListaCategoriaLivros(Biblioteca &biblioteca);

void menuProcurarLivro(Biblioteca &biblioteca);

void menuAlteracaoInformacao(Biblioteca &biblioteca);
void menuAdicionarLivro(Biblioteca &biblioteca);
void menuRemoverLivro(Biblioteca &biblioteca);

void mainMenu(Biblioteca &biblioteca);

#endif //BIBLIOTECA_MENUS_H
