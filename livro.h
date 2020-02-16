#ifndef BIBLIOTECA_LIVRO_H
#define BIBLIOTECA_LIVRO_H


#include <iostream>
#include <string>
#include <utility>
#include <iomanip>

using namespace std;

class Livro
{
private:
    string nome;
    string autor;
    string editora;
    string isbn;
    unsigned int num_paginas;
    string local;

public:
    /*
     * Constructor
     */
    Livro(string nome, string autor, string editora, string isbn, unsigned int num_paginas, string local);

    //Métodos Get
    string getNome() const;
    string getAutor() const;
    string getEditora() const;
    string getISBN() const;
    unsigned int getNumPaginas() const;
    string getLocal() const;

    //Métodos Set
    void setNome(string nome);
    void setAutor(string autor);
    void setEditora(string editora);
    void setISBN(string isbn);
    void setNumPaginas(unsigned int num_paginas);
    void setLocal(string local);

    /*
     * Escreve a informação de um livro no ficheiro dividos pelo separador "|"
     */
    void escreverNoFicheiro(ostream& out) const;

    /*
     * Escreve no ecrã as informações de um livro dividos pelo separador "|"
     */
    void imprimir(ostream& out) const;

};


#endif //BIBLIOTECA_LIVRO_H
