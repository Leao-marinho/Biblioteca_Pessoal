#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include "livro.h"
#include "utils.h"

#include <iostream>
#include <set>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

class Biblioteca
{
private:
    set <Livro*> arquitectura_arte_design;
    set <Livro*> biografias_memorias_testemunhos;
    set <Livro*> ciencias_exatas_naturais;
    set <Livro*> ciencias_sociais_humanas;
    set <Livro*> culinaria_alimentacao;
    set <Livro*> desenvolvimento_pessoal;
    set <Livro*> engenharia_informatica;
    set <Livro*> guias_turisticos_mapas;
    set <Livro*> historia_politica;
    set <Livro*> humor;
    set <Livro*> infantil_juvenil;
    set <Livro*> policial_thriller;
    set <Livro*> romance;
    set <Livro*> saude;

public:
    /*
     * Constructor, onde são lidos os ficheiros e incializados os set's da classe Biblioteca
     */
    Biblioteca();

    /*
     * "Destructor" da biblioteca que escreve a informação toda nos ficheiros e liberta a memória alocada.
     */
    void destrutor();

    /*
     * Inicializa um dado set com os livros contidos no ficheiro
     * @param set <Livro*> &categoria : set que se pretende inicializar com livros de uma dada categoria
     * @param const string& nome_ficheiro : nome do ficheiro que contém os livros
     */
    static void inicializarSet(set <Livro*> &categoria, const string& nome_ficheiro);

    /*
     * Atualiza o ficheiro com os livros de um dado set
     * @param set <Livro*> &categoria : set com os livros que se pretende guardar no ficheiro
     * @param const string& nome_ficheiro : nome do ficheiro a atualizar
     */
    static void atualizarFicheiro(set <Livro*> &categoria, const string& nome_ficheiro);

    //Métodos Get
    /*
     * Retorna um set com todos os livros existentes na biblioteca
     */
    set <Livro*> getLivros() const;

    /*
     * Funções que retornam um set com os livros da dada categoria
     */
    set <Livro*> getArquitecturaArteDesign() const;
    set <Livro*> getBiografias() const;
    set <Livro*> getCienciasExatasNaturais() const;
    set <Livro*> getCienciasSociaisHumanas() const;
    set <Livro*> getCulinaria() const;
    set <Livro*> getDesenvolvimentoPessoal() const;
    set <Livro*> getEngenhariaInformatica() const;
    set <Livro*> getGuiasTuristicosMapas() const;
    set <Livro*> getHistoriaPolitica() const;
    set <Livro*> getHumor() const;
    set <Livro*> getInfantilJuvenil() const;
    set <Livro*> getPolicialThriller() const;
    set <Livro*> getRomance() const;
    set <Livro*> getSaude() const;

    /*
     * Formulário a preencher com as informações do novo livro a adicionar
     * @param Livro* &novo_livro : livro a adicionar
     * @return bool : retorna true se as informações foram todas recebidas com sucesso
     *                retorna false caso contrário
     */
    bool formulario(Livro* &novo_livro);

    /*
     * Funções para adicionar um livro ao set correspondente
     */
    void adicionarArquitecturaArteDesign(Livro* &novo_livro);
    void adicionarBiografia(Livro* &novo_livro);
    void adicionarCienciasExatasNaturais(Livro* &novo_livro);
    void adicionarCienciasSociaisHumanas(Livro* &novo_livro);
    void adicionarCulinaria(Livro* &novo_livro);
    void adicionarDesenvolvimentoPessoal(Livro* &novo_livro);
    void adicionarEngenhariaInformatica(Livro* &novo_livro);
    void adicionarGuiasTuristicosMapas(Livro* &novo_livro);
    void adicionarHistoriaPolitica(Livro* &novo_livro);
    void adicionarHumor(Livro* &novo_livro);
    void adicionarInfantilJuvenil(Livro* &novo_livro);
    void adicionarPolicialThriller(Livro* &novo_livro);
    void adicionarRomance(Livro* &novo_livro);
    void adicionarSaude(Livro* &novo_livro);

    /*
     * Função auxiliar à função getLivros, que insere num set conjunto de livros, os livros de uma determinada categoria
     * @param set <Livro *> &livros : os livros todos existentes que serão retornados na função getLivros
     * @param const set <Livro *>& livrosCertaCategoria : livros de uma dada categoria a acrescentar em livros
     */
    static void inserirLivros(set <Livro *> &livros, const set <Livro *>& livrosCertaCategoria);

    /*
     * Funções para remover um livro do set correspondente
     */
    void removerArquitecturaArteDesign(Livro* &livro_a_remover);
    void removerBiografia(Livro* &livro_a_remover);
    void removerCienciasExatasNaturais(Livro* &livro_a_remover);
    void removerCienciasSociaisHumanas(Livro* &livro_a_remover);
    void removerCulinaria(Livro* &livro_a_remover);
    void removerDesenvolvimentoPessoal(Livro* &livro_a_remover);
    void removerEngenhariaInformatica(Livro* &livro_a_remover);
    void removerGuiasTuristicosMapas(Livro* &livro_a_remover);
    void removerHistoriaPolitica(Livro* &livro_a_remover);
    void removerHumor(Livro* &livro_a_remover);
    void removerInfantilJuvenil(Livro* &livro_a_remover);
    void removerPolicialThriller(Livro* &livro_a_remover);
    void removerRomance(Livro* &livro_a_remover);
    void removerSaude(Livro* &livro_a_remover);

    /*
     * Cabeçalho que aparecerá no ecrã sempre que se listam livros
     */
    static void cabecalhoListas() ;

    /*
     * Lista os livros de um dado set
     * @param const set <Livro *>& livros : livros a listar
     */
    static void listarLivros(const set <Livro *>& livros);

    /*
     * Lista todos os livros existentes na biblioteca ordenado por ordem alfabética do nome do livro
     */
    void listarTodosLivrosPorNome();

    /*
     * Lista todos os livros existentes na biblioteca orednado por ordem crescente do número de páginas
     */
    void listarTodosLivrosPorNumPaginas();

    /*
     * Funções que listam os livros de uma categoria por ordem alfabética do nome do livro
     */
    void listarArquitecturaArteDesign();
    void listarBiografias();
    void listarCienciasExatasNaturais();
    void listarCienciasSociaisHumanas();
    void listarCulinaria();
    void listarDesenvolvimentoPessoal();
    void listarEngenhariaInformatica();
    void listarGuiasTuristicosMapas();
    void listarHistoriaPolitica();
    void listarHumor();
    void listarInfantilJuvenil();
    void listarPolicialThriller();
    void listarRomance();
    void listarSaude();

    /*
     * Procura um livro pelo nome dado
     * @param string &nome_a_procurar : nome dado que serve de critério para a procura do livro
     * @return set <Livro *> : retorna todos os livros que contêm nome_a_procurar no seu nome
     */
    set <Livro *> procurarLivroPorNome(string &nome_a_procurar) const;

    /*
     * Procura um livro pelo autor dado
     * @param string &autor_a_procurar : nome do autor dado que serve de critério para a procura do livro
     * @return set <Livro *> : retorna todos os livros que contêm autor_a_procurar
     */
    set <Livro *> procurarLivroPorAutor(string &autor_a_procurar) const;

    /*
     * Procura um livro pela editora dada
     * @param string &editora_a_procurar : nome da editora dado que serve de critério para a procura do livro
     * @return set <Livro *> : retorna todos os livros que contêm editora_a_procurar
     */
    set <Livro *> procurarLivroPorEditora(string &editora_a_procurar) const;

    /*
     * Procura um livro pelo ISBN dado
     * @param string &isbn_a_procurar : ISBN dado que serve de critério para a procura do livro
     * @return Livro* : retorna uma referência para o livro com ISBN = isbn_a_procurar
     */
    Livro* procurarLivroPorISBN(string &isbn_a_procurar) const;



};

#endif //BIBLIOTECA_BIBLIOTECA_H
