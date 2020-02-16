#include "livro.h"

#include <utility>


Livro::Livro(string nome, string autor, string editora, string isbn, unsigned int num_paginas, string local)
{
    this->nome = std::move(nome);
    this->autor = std::move(autor);
    this->editora = std::move(editora);
    this->isbn = isbn;
    this->num_paginas = num_paginas;
    this->local = std::move(local);


}

/***************************************************************************************************************/

string Livro::getNome() const
{
    return this->nome;
}

/***************************************************************************************************************/

string Livro::getAutor() const
{
    return this->autor;
}

/***************************************************************************************************************/

string Livro::getEditora() const
{
    return this->editora;
}

/***************************************************************************************************************/

string Livro::getISBN() const
{
    return this->isbn;
}

/***************************************************************************************************************/

unsigned int Livro::getNumPaginas() const
{
    return this->num_paginas;
}

/***************************************************************************************************************/

string Livro::getLocal() const
{
    return this->local;
}

/***************************************************************************************************************/

void Livro::setNome(string nome)
{
    this->nome = nome;
}

/***************************************************************************************************************/

void Livro::setAutor(string autor)
{
    this->autor = autor;
}

/***************************************************************************************************************/

void Livro::setEditora(string editora)
{
    this->editora = editora;
}

/***************************************************************************************************************/

void Livro::setISBN(string isbn)
{
    this->isbn = isbn;
}

/***************************************************************************************************************/

void Livro::setNumPaginas(unsigned int num_paginas)
{
    this->num_paginas = num_paginas;
}

/***************************************************************************************************************/

void Livro::setLocal(string local)
{
    this->local = local;
}

/***************************************************************************************************************/

void Livro::escreverNoFicheiro(ostream &out) const
{
    out << endl << nome << "|"
        << autor << "|"
        << editora << "|"
        << isbn << "|"
        << num_paginas << "|"
        << local;
}

/***************************************************************************************************************/

void Livro::imprimir(ostream& out) const
{
    out << nome
        << " | " << autor
        << " | " << editora
        << " | " << isbn
        << " | " << num_paginas
        << " | " << local << endl;

}

/***************************************************************************************************************/
