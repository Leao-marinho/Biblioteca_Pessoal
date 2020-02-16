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
     * Constructor, onde são lidos os ficheiros e incializados os atributos da classe Biblioteca
     */
    Biblioteca();

    /*
     * "Destructor" da biblioteca que escreve a informação toda nos ficheiros e liberta a memória alocada.
     */
    void destrutor();

    /*
     * Inicializa um dado set com os livros contidos no ficheiro
     */
    static void inicializarSet(set <Livro*> &categoria, const string& nome_ficheiro);

    static void atualizarFicheiro(set <Livro*> &categoria, const string& nome_ficheiro);

    //Métodos Get
    //retorna um set com todos os livros existentes na biblioteca
    set <Livro*> getLivros() const;
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


    //Funções para adicionar um livro ao set correspondente
    bool formulario(Livro* &novo_livro);
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

    static void inserirLivros(set <Livro *> &livros, const set <Livro *>& livrosCertaCategoria);

    //Funções para remover um livro do set correspondente
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

    //Funções para listar os livros
    static void cabecalhoListas() ;
    static void listarLivros(const set <Livro *>& livros);
    void listarTodosLivrosPorNome();
    void listarTodosLivrosPorNumPaginas();
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

    //Funções para procurar livros
    set <Livro *> procurarLivroPorNome(string &nome_a_procurar) const;
    set <Livro *> procurarLivroPorAutor(string &autor_a_procurar) const;
    set <Livro *> procurarLivroPorEditora(string &editora_a_procurar) const;
    Livro* procurarLivroPorISBN(string &isbn_a_procurar) const;




};

#endif //BIBLIOTECA_BIBLIOTECA_H
