#ifndef BIBLIOTECA_UTILS_H
#define BIBLIOTECA_UTILS_H

#include <iostream>
using namespace std;

/*
 * Verifica se uma dada opção inserida pelo utilizador está entre menorOpcao e maiorOpcao
 * @param int menorOpcao : A menor opção que se pode inserir. Geralmente é a opção 1
 * @param int maiorOpcao : A maior opção que se pode inserir
 * @return int : Retorna a opção selecionada pelo utilizador
 */
int verificarOpcao(int menorOpcao, int maiorOpcao);

/*
 * Retira os hifens de um ISBN, caso existam
 * @param const string &isbn : isbn com ou sem hifens
 * @return string : retorna o ISBN sem hifen
 */
string retirar_hifen_isbn(const string &isbn);


#endif //BIBLIOTECA_UTILS_H
