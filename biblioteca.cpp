#include "biblioteca.h"

void Biblioteca::inicializarSet(set <Livro*> &categoria, const string& nome_ficheiro)
{
    ifstream ficheiro;
    ficheiro.open(nome_ficheiro);

    if(ficheiro.fail())
    {
        cout << "Erro ao abrir " << nome_ficheiro << endl;
    }

    string first_line;
    getline(ficheiro, first_line);

    while(!ficheiro.eof())
    {

        string nome, autor, editora, local, isbn;
        unsigned int num_paginas;

        string input;

        getline(ficheiro, input);

        unsigned int pos = input.find('|');
        nome = input.substr(0, pos);

        input = input.substr(pos + 1, string::npos);
        pos = input.find('|');
        autor = input.substr(0, pos);

        input = input.substr(pos + 1, string::npos);
        pos = input.find('|');
        editora = input.substr(0, pos);

        input = input.substr(pos + 1, string::npos);
        pos = input.find('|');
        isbn = input.substr(0, pos);

        input = input.substr(pos + 1, string::npos);
        pos = input.find('|');
        num_paginas = stoi(input.substr(0, pos));

        input = input.substr(pos + 1, string::npos);
        pos = input.find('|');
        local = input.substr(0, pos);

        auto *livro = new Livro(nome, autor, editora, isbn, num_paginas, local);

        categoria.insert(livro);
    }

    ficheiro.close();

}

/***************************************************************************************************************/

void Biblioteca::atualizarFicheiro(set <Livro*> &categoria, const string& nome_ficheiro)
{

    ofstream ficheiro;
    ficheiro.open(nome_ficheiro, ofstream::out | ofstream::trunc | ofstream::ate);

    for (auto itr : categoria)
    {
        itr->escreverNoFicheiro(ficheiro);
    }

    ficheiro.close();
}

/***************************************************************************************************************/

Biblioteca::Biblioteca()
{

    //Arquitectura, Arte e Design
    string nome_ficheiro_arquitectura_arte_design = "arquitectura_arte_design.txt";
    inicializarSet(arquitectura_arte_design, nome_ficheiro_arquitectura_arte_design);

    //Biografias, Memórias e Testemunhos
    string nome_ficheiro_biografias = "biografias_memorias_testemunhos.txt";
    inicializarSet(biografias_memorias_testemunhos, nome_ficheiro_biografias);

    //Ciencias Exatas e Naturais
    string nome_ficheiro_exatas = "ciencias_exatas_naturais.txt";
    inicializarSet(ciencias_exatas_naturais, nome_ficheiro_exatas);

    //Ciencias Sociais e Humanas
    string nome_ficheiro_humanas = "ciencias_sociais_humanas.txt";
    inicializarSet(ciencias_sociais_humanas, nome_ficheiro_humanas);

    //Culinária e Alimentação
    string nome_ficheiro_culinaria = "culinaria_alimentacao.txt";
    inicializarSet(culinaria_alimentacao, nome_ficheiro_culinaria);

    //Desenvolvimento Pessoal
    string nome_ficheiro_desenvolvimento_pessoal = "desenvolvimento_pessoal.txt";
    inicializarSet(desenvolvimento_pessoal, nome_ficheiro_desenvolvimento_pessoal);

    //Engenharia e Informática
    string nome_ficheiro_engenharia_informatica = "engenharia_informatica.txt";
    inicializarSet(engenharia_informatica, nome_ficheiro_engenharia_informatica);

    //Guias Turísticos e Mapas
    string nome_ficheiro_mapas = "guias_turisticos_mapas.txt";
    inicializarSet(guias_turisticos_mapas, nome_ficheiro_mapas);

    //História e Policial
    string nome_ficheiro_historia_politica = "historia_politica.txt";
    inicializarSet(historia_politica, nome_ficheiro_historia_politica);

    //Humor
    string nome_ficheiro_humor = "humor.txt";
    inicializarSet(humor, nome_ficheiro_humor);

    //Infantil e Juvenil
    string nome_ficheiro_infantil_juvenil = "infantil_juvenil.txt";
    inicializarSet(infantil_juvenil, nome_ficheiro_infantil_juvenil);

    //Policial e Thriller
    string nome_ficheiro_policial_thriller = "policial_thriller.txt";
    inicializarSet(policial_thriller, nome_ficheiro_policial_thriller);

    //Romance
    string nome_ficheiro_romance = "romance.txt";
    inicializarSet(romance, nome_ficheiro_romance);

    //Saúde e Bem-Estar
    string nome_ficheiro_saude = "saude_bem_estar.txt";
    inicializarSet(saude, nome_ficheiro_saude);


}

/***************************************************************************************************************/

void Biblioteca::destrutor()
{
    /*
     * Escreve nos ficheiros
     */
    //Arquitectura, Arte e Design
    string nome_ficheiro_arquitectura_arte_design = "arquitectura_arte_design.txt";
    atualizarFicheiro(arquitectura_arte_design, nome_ficheiro_arquitectura_arte_design);

    //Biografias, Memórias e Testemunhos
    string nome_ficheiro_biografias = "biografias_memorias_testemunhos.txt";
    atualizarFicheiro(biografias_memorias_testemunhos, nome_ficheiro_biografias);

    //Ciencias Exatas e Naturais
    string nome_ficheiro_exatas = "ciencias_exatas_naturais.txt";
    atualizarFicheiro(ciencias_exatas_naturais, nome_ficheiro_exatas);

    //Ciencias Sociais e Humanas
    string nome_ficheiro_humanas = "ciencias_sociais_humanas.txt";
    atualizarFicheiro(ciencias_sociais_humanas, nome_ficheiro_humanas);

    //Culinária e Alimentação
    string nome_ficheiro_culinaria = "culinaria_alimentacao.txt";
    atualizarFicheiro(culinaria_alimentacao, nome_ficheiro_culinaria);

    //Desenvolvimento Pessoal
    string nome_ficheiro_desenvolvimento_pessoal = "desenvolvimento_pessoal.txt";
    atualizarFicheiro(desenvolvimento_pessoal, nome_ficheiro_desenvolvimento_pessoal);

    //Engenharia e Informática
    string nome_ficheiro_engenharia_informatica = "engenharia_informatica.txt";
    atualizarFicheiro(engenharia_informatica, nome_ficheiro_engenharia_informatica);

    //Guias Turísticos e Mapas
    string nome_ficheiro_mapas = "guias_turisticos_mapas.txt";
    atualizarFicheiro(guias_turisticos_mapas, nome_ficheiro_mapas);

    //História e Política
    string nome_ficheiro_historia_politica = "historia_politica.txt";
    atualizarFicheiro(historia_politica, nome_ficheiro_historia_politica);

    //Humor
    string nome_ficheiro_humor = "humor.txt";
    atualizarFicheiro(humor, nome_ficheiro_humor);

    //Infantil e Juvenil
    string nome_ficheiro_infantil_juvenil = "infantil_juvenil.txt";
    atualizarFicheiro(infantil_juvenil, nome_ficheiro_infantil_juvenil);

    //Policial e Thriller
    string nome_ficheiro_policial_thriller = "policial_thriller.txt";
    atualizarFicheiro(policial_thriller, nome_ficheiro_policial_thriller);

    //Romance
    string nome_ficheiro_romance = "romance.txt";
    atualizarFicheiro(romance, nome_ficheiro_romance);

    //Saúde e Bem-Estar
    string nome_ficheiro_saude = "saude_bem_estar.txt";
    atualizarFicheiro(saude, nome_ficheiro_saude);

    /*
     * Apaga os objectos
     */
    //Arquitectura, Arte e Design
    for (auto itr : arquitectura_arte_design)
    {
        delete itr;
    }
    arquitectura_arte_design.clear();

    //Biografias, Memórias e Testemunhos
    for (auto itr : biografias_memorias_testemunhos)
    {
        delete itr;
    }
    biografias_memorias_testemunhos.clear();

    //Ciencias Exatas e Naturais
    for (auto itr : ciencias_exatas_naturais)
    {
        delete itr;
    }
    ciencias_exatas_naturais.clear();

    //Ciencias Sociais e Humanas
    for (auto itr : ciencias_sociais_humanas)
    {
        delete itr;
    }
    ciencias_sociais_humanas.clear();

    //Culinária e Alimentação
    for (auto itr : culinaria_alimentacao)
    {
        delete itr;
    }
    culinaria_alimentacao.clear();

    //Desenvolvimento Pessoal
    for (auto itr : desenvolvimento_pessoal)
    {
        delete itr;
    }
    desenvolvimento_pessoal.clear();

    //Engenharia e Informática
    for (auto itr : engenharia_informatica)
    {
        delete itr;
    }
    engenharia_informatica.clear();

    //Engenharia e Informática
    for (auto itr : guias_turisticos_mapas)
    {
        delete itr;
    }
    guias_turisticos_mapas.clear();

    //História e Política
    for (auto itr : historia_politica)
    {
        delete itr;
    }
    historia_politica.clear();

    //Humor
    for (auto itr : humor)
    {
        delete itr;
    }
    humor.clear();

    //Infantil e Juvenil
    for (auto itr : infantil_juvenil)
    {
        delete itr;
    }
    infantil_juvenil.clear();

    //Policial e Thriller
    for (auto itr : policial_thriller)
    {
        delete itr;
    }
    policial_thriller.clear();

    //Romance
    for (auto itr : romance)
    {
        delete itr;
    }
    romance.clear();

    //Saúde e Bem-Estar
    for (auto itr : saude)
    {
        delete itr;
    }
    saude.clear();


}

/***************************************************************************************************************/

void Biblioteca::inserirLivros(set <Livro *> &livros, const set <Livro *>& livrosCertaCategoria)
{
    for(auto itr : livrosCertaCategoria)
    {
        livros.insert(itr);
    }

}

/***************************************************************************************************************/

set<Livro *> Biblioteca::getLivros() const
{
    set <Livro *> livros;

    inserirLivros(livros, arquitectura_arte_design);
    inserirLivros(livros, biografias_memorias_testemunhos);
    inserirLivros(livros, ciencias_exatas_naturais);
    inserirLivros(livros, ciencias_sociais_humanas);
    inserirLivros(livros, culinaria_alimentacao);
    inserirLivros(livros, desenvolvimento_pessoal);
    inserirLivros(livros, engenharia_informatica);
    inserirLivros(livros, guias_turisticos_mapas);
    inserirLivros(livros, historia_politica);
    inserirLivros(livros, humor);
    inserirLivros(livros, infantil_juvenil);
    inserirLivros(livros, policial_thriller);
    inserirLivros(livros, romance);

    return livros;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getArquitecturaArteDesign() const
{
    return this->arquitectura_arte_design;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getBiografias() const
{
    return this->biografias_memorias_testemunhos;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getCienciasExatasNaturais() const
{
    return this->ciencias_exatas_naturais;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getCienciasSociaisHumanas() const
{
    return this->ciencias_sociais_humanas;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getCulinaria() const
{
    return this->culinaria_alimentacao;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getDesenvolvimentoPessoal() const
{
    return this->desenvolvimento_pessoal;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getEngenhariaInformatica() const
{
    return this->engenharia_informatica;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getGuiasTuristicosMapas() const
{
    return this->guias_turisticos_mapas;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getHistoriaPolitica() const
{
    return this->historia_politica;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getHumor() const
{
    return this->humor;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getInfantilJuvenil() const
{
    return this->infantil_juvenil;
}


/***************************************************************************************************************/

set <Livro*> Biblioteca::getPolicialThriller() const
{
    return this->policial_thriller;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getRomance() const
{
    return this->romance;
}

/***************************************************************************************************************/

set <Livro*> Biblioteca::getSaude() const
{
    return this->saude;
}


/***************************************************************************************************************/


bool Biblioteca::formulario(Livro* &novo_livro)
{
    string nome, autor, editora, local, isbn, num_paginas_str;

    pedirNome:
        cout << "\nIndique o nome (Enter para cancelar):\n> ";
        getline(cin, nome);
        if (nome.empty())
            return false;

    pedirAutor:
        cout << "\nIndique o autor (Enter para cancelar, V para voltar):\n> ";
        getline(cin, autor);
        if (autor.empty())
            return false;
        if(autor == "V" || autor == "v")
            goto pedirNome;

    pedirEditora:
        cout << "\nIndique a editora (Enter para cancelar, V para voltar):\n> ";
        getline(cin, editora);
        if (editora.empty())
            return false;
        if(editora == "V" || editora == "v")
            goto pedirAutor;

    pedirISBN:
        bool validade = true;
        while (validade)
        {
            cout << "\nIndique o ISBN (Enter para cancelar, V para voltar):\n> ";
            getline(cin, isbn);
            if (isbn.empty())
                return false;
            if(isbn == "V" || isbn == "v")
                goto pedirEditora;

            //Verifica se o o ISBN já existe.
            //Caso exista então o ciclo é executado de novo até o utilizador inserir um ISBN válido, cancelar ou voltar
            if (procurarLivroPorISBN(isbn) == nullptr)
            {
                validade = false;
            }
            else
            {
                cout << "ISBN ja existente, tente novamente..." << endl << endl;
            }
        }


    pedirNumPaginas:
        validade = true;
        while (validade)
        {
            cout << "\nIndique o numero de paginas (Enter para cancelar, V para voltar):\n> ";
            getline(cin, num_paginas_str);
            if (num_paginas_str.empty())
                return false;
            if(num_paginas_str == "V" || num_paginas_str == "v")
                goto pedirISBN;

            //Verifica se o número de páginas é positivo
            //Se não for positivo, o ciclo é executado de novo até o utilizador inserir um número correcto, cancelar ou voltar
            if (stoi(num_paginas_str) >= 0)
            {
                validade = false;
            }
            else
            {
                cout << "Inseriu um numero negativo, tente novamente..." << endl << endl;
            }
        }



    cout << "\nIndique o local onde se encontra guardado (Enter para cancelar, V para voltar):\n> ";
    getline(cin, local);
    if (local.empty())
        return false;
    if(local == "V" || local == "v")
        goto pedirNumPaginas;

    novo_livro = new Livro(nome, autor, editora, isbn, stoi(num_paginas_str), local);
    return true;
}

/***************************************************************************************************************/

void Biblioteca::adicionarArquitecturaArteDesign(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        arquitectura_arte_design.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::adicionarBiografia(Livro* &novo_livro)
{

    if(formulario(novo_livro))
    {
        biografias_memorias_testemunhos.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarCienciasExatasNaturais(Livro* &novo_livro)
{

    if(formulario(novo_livro))
    {
        ciencias_exatas_naturais.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarCienciasSociaisHumanas(Livro* &novo_livro)
{

    if(formulario(novo_livro))
    {
        ciencias_sociais_humanas.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarCulinaria(Livro* &novo_livro)
{

    if(formulario(novo_livro))
    {
        culinaria_alimentacao.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarDesenvolvimentoPessoal(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        desenvolvimento_pessoal.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarEngenhariaInformatica(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        engenharia_informatica.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarGuiasTuristicosMapas(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        guias_turisticos_mapas.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;
}

/***************************************************************************************************************/

void Biblioteca::adicionarHistoriaPolitica(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        historia_politica.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::adicionarHumor(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        humor.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::adicionarInfantilJuvenil(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        infantil_juvenil.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::adicionarPolicialThriller(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        policial_thriller.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::adicionarRomance(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        romance.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::adicionarSaude(Livro* &novo_livro)
{
    if(formulario(novo_livro))
    {
        saude.insert(novo_livro);

        cout << "\nO livro foi adicionado com sucesso!\n";
    }
    else
        return;

}

/***************************************************************************************************************/

void Biblioteca::removerArquitecturaArteDesign(Livro* &livro_a_remover)
{
    arquitectura_arte_design.erase(livro_a_remover);

}

/***************************************************************************************************************/

void Biblioteca::removerBiografia(Livro* &livro_a_remover)
{
    biografias_memorias_testemunhos.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerCienciasExatasNaturais(Livro* &livro_a_remover)
{
    ciencias_exatas_naturais.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerCienciasSociaisHumanas(Livro* &livro_a_remover)
{
    ciencias_sociais_humanas.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerCulinaria(Livro* &livro_a_remover)
{
    culinaria_alimentacao.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerDesenvolvimentoPessoal(Livro* &livro_a_remover)
{
    desenvolvimento_pessoal.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerEngenhariaInformatica(Livro* &livro_a_remover)
{
    engenharia_informatica.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerGuiasTuristicosMapas(Livro* &livro_a_remover)
{
    guias_turisticos_mapas.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerHistoriaPolitica(Livro* &livro_a_remover)
{
    historia_politica.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerHumor(Livro* &livro_a_remover)
{
    humor.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerInfantilJuvenil(Livro* &livro_a_remover)
{
    infantil_juvenil.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerPolicialThriller(Livro* &livro_a_remover)
{
    policial_thriller.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerRomance(Livro* &livro_a_remover)
{
    romance.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::removerSaude(Livro* &livro_a_remover)
{
    saude.erase(livro_a_remover);
}

/***************************************************************************************************************/

void Biblioteca::cabecalhoListas()
{
    cout << endl
         << "NOME | EDITORA | ISBN | PAGINAS | LOCAL" << endl;
}

/***************************************************************************************************************/

void Biblioteca::listarLivros(const set <Livro *>& livros)
{
    cabecalhoListas();
    for (auto itr = livros.begin(); itr != livros.end(); itr++)
    {
        (*itr)->imprimir(cout);
    }
}

/***************************************************************************************************************/

bool sort_livros_nome(Livro* livro1, Livro* livro2)
{
    return livro1->getNome() < livro2->getNome();
}

void Biblioteca::listarTodosLivrosPorNome()
{
    set <Livro*> copia_livros_set = getLivros();
    vector <Livro*> copia_livros;

    copia_livros.reserve(copia_livros_set.size());
    for(auto itr : copia_livros_set)
    {
        copia_livros.push_back(itr);
    }

    sort(copia_livros.begin(), copia_livros.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & copia_livro : copia_livros)
    {
        copia_livro->imprimir(cout);
    }

}

/***************************************************************************************************************/

bool sort_livros_numPaginas(Livro* livro1, Livro* livro2)
{
    return livro1->getNumPaginas() < livro2->getNumPaginas();
}

void Biblioteca::listarTodosLivrosPorNumPaginas()
{
    set <Livro*> copia_livros_set = getLivros();
    vector <Livro*> copia_livros;

    copia_livros.reserve(copia_livros_set.size());
    for(auto itr : copia_livros_set)
    {
        copia_livros.push_back(itr);
    }

    sort(copia_livros.begin(), copia_livros.end(), sort_livros_numPaginas);

    cabecalhoListas();
    for (auto & copia_livro : copia_livros)
    {
        copia_livro->imprimir(cout);
    }

}

/***************************************************************************************************************/

void Biblioteca::listarArquitecturaArteDesign()
{
    set <Livro*> copia_arte_set = getArquitecturaArteDesign();
    vector <Livro*> copia_arte;

    copia_arte.reserve(copia_arte_set.size());
    for(auto itr : copia_arte_set)
    {
        copia_arte.push_back(itr);
    }

    sort(copia_arte.begin(), copia_arte.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_arte)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarBiografias()
{
    set <Livro*> copia_biografias_set = getBiografias();
    vector <Livro*> copia_biografias;

    copia_biografias.reserve(copia_biografias_set.size());
    for(auto itr : copia_biografias_set)
    {
        copia_biografias.push_back(itr);
    }

    sort(copia_biografias.begin(), copia_biografias.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & itr : copia_biografias)
    {
        itr->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarCienciasExatasNaturais()
{
    set <Livro*> copia_exatas_set = getCienciasExatasNaturais();
    vector <Livro*> copia_exatas;

    copia_exatas.reserve(copia_exatas_set.size());
    for(auto itr : copia_exatas_set)
    {
        copia_exatas.push_back(itr);
    }

    sort(copia_exatas.begin(), copia_exatas.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & itr : copia_exatas)
    {
        itr->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarCienciasSociaisHumanas()
{
    set <Livro*> copia_humanas_set = getCienciasSociaisHumanas();
    vector <Livro*> copia_humanas;

    copia_humanas.reserve(copia_humanas_set.size());
    for(auto itr : copia_humanas_set)
    {
        copia_humanas.push_back(itr);
    }

    sort(copia_humanas.begin(), copia_humanas.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & itr : copia_humanas)
    {
        itr->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarCulinaria()
{
    set <Livro*> copia_culinaria_set = getCulinaria();
    vector <Livro*> copia_culinaria;

    copia_culinaria.reserve(copia_culinaria_set.size());
    for(auto itr : copia_culinaria_set)
    {
        copia_culinaria.push_back(itr);
    }

    sort(copia_culinaria.begin(), copia_culinaria.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & itr : copia_culinaria)
    {
        itr->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarDesenvolvimentoPessoal()
{
    set <Livro*> copia_desenvolvimento_set = getDesenvolvimentoPessoal();
    vector <Livro*> copia_desenvolvimento;

    copia_desenvolvimento.reserve(copia_desenvolvimento_set.size());
    for(auto itr : copia_desenvolvimento_set)
    {
        copia_desenvolvimento.push_back(itr);
    }

    sort(copia_desenvolvimento.begin(), copia_desenvolvimento.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_desenvolvimento)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarEngenhariaInformatica()
{
    set <Livro*> copia_engenharia_set = getEngenhariaInformatica();
    vector <Livro*> copia_engenharia;

    copia_engenharia.reserve(copia_engenharia_set.size());
    for(auto itr : copia_engenharia_set)
    {
        copia_engenharia.push_back(itr);
    }

    sort(copia_engenharia.begin(), copia_engenharia.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_engenharia)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarGuiasTuristicosMapas()
{
    set <Livro*> copia_mapas_set = getGuiasTuristicosMapas();
    vector <Livro*> copia_mapas;

    copia_mapas.reserve(copia_mapas_set.size());
    for(auto itr : copia_mapas_set)
    {
        copia_mapas.push_back(itr);
    }

    sort(copia_mapas.begin(), copia_mapas.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_mapas)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarHistoriaPolitica()
{
    set <Livro*> copia_historia_set = getHistoriaPolitica();
    vector <Livro*> copia_historia;

    copia_historia.reserve(copia_historia_set.size());
    for(auto itr : copia_historia_set)
    {
        copia_historia.push_back(itr);
    }

    sort(copia_historia.begin(), copia_historia.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_historia)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarHumor()
{
    set <Livro*> copia_humor_set = getHumor();
    vector <Livro*> copia_humor;

    copia_humor.reserve(copia_humor_set.size());
    for(auto itr : copia_humor_set)
    {
        copia_humor.push_back(itr);
    }

    sort(copia_humor.begin(), copia_humor.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_humor)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarInfantilJuvenil()
{
    set <Livro*> copia_infantil_set = getInfantilJuvenil();
    vector <Livro*> copia_infantil;

    copia_infantil.reserve(copia_infantil_set.size());
    for(auto itr : copia_infantil_set)
    {
        copia_infantil.push_back(itr);
    }

    sort(copia_infantil.begin(), copia_infantil.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_infantil)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarPolicialThriller()
{
    set <Livro*> copia_policial_set = getPolicialThriller();
    vector <Livro*> copia_policial;

    copia_policial.reserve(copia_policial_set.size());
    for(auto itr : copia_policial_set)
    {
        copia_policial.push_back(itr);
    }

    sort(copia_policial.begin(), copia_policial.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_policial)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarRomance()
{
    set <Livro*> copia_romance_set = getRomance();
    vector <Livro*> copia_romance;

    copia_romance.reserve(copia_romance_set.size());
    for(auto itr : copia_romance_set)
    {
        copia_romance.push_back(itr);
    }

    sort(copia_romance.begin(), copia_romance.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_romance)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

void Biblioteca::listarSaude()
{
    set <Livro*> copia_saude_set = getSaude();
    vector <Livro*> copia_saude;

    copia_saude.reserve(copia_saude_set.size());
    for(auto itr : copia_saude_set)
    {
        copia_saude.push_back(itr);
    }

    sort(copia_saude.begin(), copia_saude.end(), sort_livros_nome);

    cabecalhoListas();
    for (auto & i : copia_saude)
    {
        i->imprimir(cout);
    }
}

/***************************************************************************************************************/

set <Livro *> Biblioteca::procurarLivroPorNome(string &nome_a_procurar) const
{
    string nome;
    Livro* livro;
    unsigned int procura;
    set <Livro*> livros = getLivros();
    set <Livro *> result;

    transform(nome_a_procurar.begin(), nome_a_procurar.end(), nome_a_procurar.begin(), [](unsigned char c){ return std::tolower(c); });


    for(auto itr = livros.begin(); itr != livros.end(); itr++)
    {
        nome = (*itr)->getNome();
        livro = *itr;
        transform(nome.begin(), nome.end(), nome.begin(), [](unsigned char c){ return std::tolower(c); });

        procura = (nome).find(nome_a_procurar);

        if (procura != 4294967295)
        {
            result.insert(livro);
        }
    }

    return result;

}

/***************************************************************************************************************/

set <Livro *> Biblioteca::procurarLivroPorAutor(string &autor_a_procurar) const
{
    string autor;
    Livro* livro;
    unsigned int procura;
    set <Livro*> livros = getLivros();
    set <Livro *> result;

    transform(autor_a_procurar.begin(), autor_a_procurar.end(), autor_a_procurar.begin(), [](unsigned char c){ return std::tolower(c); });


    for(auto itr = livros.begin(); itr != livros.end(); itr++)
    {
        autor = (*itr)->getAutor();
        livro = *itr;
        transform(autor.begin(), autor.end(), autor.begin(), [](unsigned char c){ return std::tolower(c); });

        procura = (autor).find(autor_a_procurar);

        if (procura != 4294967295)
        {
            result.insert(livro);
        }
    }

    return result;

}

/***************************************************************************************************************/

set <Livro *> Biblioteca::procurarLivroPorEditora(string &editora_a_procurar) const
{
    string editora;
    Livro* livro;
    unsigned int procura;
    set <Livro*> livros = getLivros();
    set <Livro *> result;

    transform(editora_a_procurar.begin(), editora_a_procurar.end(), editora_a_procurar.begin(), [](unsigned char c){ return std::tolower(c); });


    for(auto itr = livros.begin(); itr != livros.end(); itr++)
    {
        editora = (*itr)->getEditora();
        livro = *itr;
        transform(editora.begin(), editora.end(), editora.begin(), [](unsigned char c){ return std::tolower(c); });

        procura = (editora).find(editora_a_procurar);

        if (procura != 4294967295)
        {
            result.insert(livro);
        }
    }

    return result;

}

/***************************************************************************************************************/

Livro* Biblioteca::procurarLivroPorISBN(string &isbn_a_procurar) const
{
    string isbn;
    Livro* livro;
    unsigned int procura;
    set <Livro*> livros = getLivros();

    isbn_a_procurar = retirar_hifen_isbn(isbn_a_procurar);

    for(auto itr = livros.begin(); itr != livros.end(); itr++)
    {
        isbn = (*itr)->getISBN();
        livro = *itr;

        isbn = retirar_hifen_isbn(isbn);

        if(isbn == isbn_a_procurar)
            return livro;
    }
    return nullptr;


}


/***************************************************************************************************************/
