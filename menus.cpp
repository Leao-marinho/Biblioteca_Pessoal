#include "menus.h"

void mostrarListaCategorias()
{
    cout << endl << " * Categorias * " << endl
         << "[1] Arquitectura, Arte e Design" << endl
         << "[2] Biografias, Memorias e Testemunhos" << endl
         << "[3] Ciencias Exatas e Naturais" << endl
         << "[4] Ciencias Sociais e Humanas" << endl
         << "[5] Culinaria e Alimentacao" << endl
         << "[6] Desenvolvimento Pessoal" << endl
         << "[7] Engenharia e Informatica" << endl
         << "[8] Guias Turisticos e Mapas" << endl
         << "[9] Historia e Politica" << endl
         << "[10] Humor" << endl
         << "[11] Infantil e Juvenil" << endl
         << "[12] Policial e Thriller" << endl
         << "[13] Romance" << endl
         << "[14] Saude e Bem Estar" << endl;


}

void menuListaTodosLivros(Biblioteca &biblioteca)
{
    int opcao;

    cout << endl << "** Lista de todos os livros **" << endl
         << "[1] Ordenado por ordem alfabetica" << endl
         << "[2] Ordenado por numero de paginas (ordem crescente)" << endl
         << "[3] Voltar atras" << endl
         << "[4] Sair" << endl;

    opcao = verificarOpcao(1, 4);

    switch (opcao)
    {
        case 1:
            biblioteca.listarTodosLivrosPorNome();
            menuListaTodosLivros(biblioteca);
            break;
        case 2:
            biblioteca.listarTodosLivrosPorNumPaginas();
            menuListaTodosLivros(biblioteca);
            break;
        case 3:
            mainMenu(biblioteca);
            break;
        case 4:
            biblioteca.destrutor();
            exit(0);

    }


}



void menuListaCategoriaLivros(Biblioteca &biblioteca)
{
    int opcao;

    mostrarListaCategorias();
    cout << "[15] Voltar atras" << endl
         << "[16] Sair" << endl;

    opcao = verificarOpcao(1, 16);

    switch (opcao)
    {
        case 1:
            //Arquitectura, Arte e Design
            biblioteca.listarArquitecturaArteDesign();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 2:
            //Biografias
            biblioteca.listarBiografias();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 3:
            //Ciencias Exatas e Naturais
            biblioteca.listarCienciasExatasNaturais();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 4:
            //Ciencias Sociais e Humanas
            biblioteca.listarCienciasSociaisHumanas();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 5:
            //Culinária e Alimentação
            biblioteca.listarCulinaria();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 6:
            //Desenvolvimento Pessoal
            biblioteca.listarDesenvolvimentoPessoal();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 7:
            //Engenharia e Informática
            biblioteca.listarEngenhariaInformatica();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 8:
            //Guias Turisticos e Mapas
            biblioteca.listarGuiasTuristicosMapas();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 9:
            //História e Política
            biblioteca.listarHistoriaPolitica();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 10:
            //Humor
            biblioteca.listarHumor();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 11:
            //Infantil e Juvenil
            biblioteca.listarInfantilJuvenil();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 12:
            //Policial e Thriller
            biblioteca.listarPolicialThriller();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 13:
            //Romance
            biblioteca.listarRomance();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 14:
            //Saúde e Bem Estar
            biblioteca.listarSaude();
            menuListaCategoriaLivros(biblioteca);
            break;
        case 15:
            mainMenu(biblioteca);
            break;
        case 16:
            biblioteca.destrutor();
            exit(0);

    }
}

/***************************************************************************************************************/

void menuProcurarLivro(Biblioteca &biblioteca)
{
    int opcao;
    set <Livro*> livros_encontrados;
    string nome, autor, editora, isbn;
    Livro* livro_isbn;

    cout << endl << "** Procurar Livro **" << endl
         << "[1] Por nome" << endl
         << "[2] Por autor  " << endl
         << "[3] Por editora" << endl
         << "[4] Por ISBN" << endl
         << "[5] Voltar atras" << endl
         << "[6] Sair" << endl;

    opcao = verificarOpcao(1, 6);

    switch (opcao)
    {
        case 1:
            cout << "Nome: ";
            getline(cin, nome);
            livros_encontrados = biblioteca.procurarLivroPorNome(nome);
            biblioteca.listarLivros(livros_encontrados);
            mainMenu(biblioteca);
            break;
        case 2:
            cout << "Autor: ";
            getline(cin, autor);
            livros_encontrados = biblioteca.procurarLivroPorAutor(autor);
            biblioteca.listarLivros(livros_encontrados);
            mainMenu(biblioteca);
            break;
        case 3:
            cout << "Editora: ";
            getline(cin, editora);
            livros_encontrados = biblioteca.procurarLivroPorEditora(editora);
            biblioteca.listarLivros(livros_encontrados);
            mainMenu(biblioteca);
            break;
        case 4:
            cout << "ISBN: ";
            getline(cin, isbn);
            livro_isbn = biblioteca.procurarLivroPorISBN(isbn);
            if(livro_isbn == nullptr)
            {
                cout << "Nao existe nenhum livro com esse ISBN!" << endl;
            }
            else
            {
                biblioteca.cabecalhoListas();
                livro_isbn->imprimir(cout);
            }
            mainMenu(biblioteca);
            break;
        case 5:
            mainMenu(biblioteca);
            break;
        case 6:
            biblioteca.destrutor();
            exit(0);
    }
}


/***************************************************************************************************************/

void menuAlteracaoInformacao(Biblioteca &biblioteca)
{
    int opcao;

    cout << endl << "** Alteracao de informacao **" << endl
         << "[1] Alterar localizacao de livro" << endl
         << "[2] Voltar atras" << endl
         << "[3] Sair" << endl;

    opcao = verificarOpcao(1, 3);

    switch (opcao)
    {
        case 1:
            //alterar
            break;
        case 2:
            mainMenu(biblioteca);
            break;
        case 3:
            biblioteca.destrutor();
            exit(0);

    }

}

/***************************************************************************************************************/

void menuAdicionarLivro(Biblioteca &biblioteca)
{
    int opcao;

    mostrarListaCategorias();
    cout << "[15] Voltar atras" << endl
         << "[16] Sair" << endl;

    opcao = verificarOpcao(1, 16);

    Livro* novo_livro;

    switch (opcao)
    {
        case 1:
            //Arquitectura, Arte e Design
            biblioteca.adicionarArquitecturaArteDesign(novo_livro);
            mainMenu(biblioteca);
            break;
        case 2:
            //Biografias
            biblioteca.adicionarBiografia(novo_livro);
            mainMenu(biblioteca);
            break;
        case 3:
            //Ciencias Exatas e Naturais
            biblioteca.adicionarCienciasExatasNaturais(novo_livro);
            mainMenu(biblioteca);
            break;
        case 4:
            //Ciencias Sociais e Humanas
            biblioteca.adicionarCienciasSociaisHumanas(novo_livro);
            mainMenu(biblioteca);
            break;
        case 5:
            //Culinária e Alimentação
            biblioteca.adicionarCulinaria(novo_livro);
            mainMenu(biblioteca);
            break;
        case 6:
            //Desenvolvimento Pessoal
            biblioteca.adicionarDesenvolvimentoPessoal(novo_livro);
            mainMenu(biblioteca);
            break;
        case 7:
            //Engenharia e Informatica
            biblioteca.adicionarEngenhariaInformatica(novo_livro);
            mainMenu(biblioteca);
            break;
        case 8:
            //Guias Turisticos e Mapas
            biblioteca.adicionarGuiasTuristicosMapas(novo_livro);
            mainMenu(biblioteca);
            break;
        case 9:
            //História e Política
            biblioteca.adicionarHistoriaPolitica(novo_livro);
            mainMenu(biblioteca);
            break;
        case 10:
            //Humor
            biblioteca.adicionarHumor(novo_livro);
            mainMenu(biblioteca);
            break;
        case 11:
            //Infantil e Juvenil
            biblioteca.adicionarInfantilJuvenil(novo_livro);
            mainMenu(biblioteca);
            break;
        case 12:
            //Policial e Thriller
            biblioteca.adicionarPolicialThriller(novo_livro);
            mainMenu(biblioteca);
            break;
        case 13:
            //Romance
            biblioteca.adicionarRomance(novo_livro);
            mainMenu(biblioteca);
            break;
        case 14:
            //Saúde e Bem Estar
            biblioteca.adicionarSaude(novo_livro);
            mainMenu(biblioteca);
            break;
        case 15:
            mainMenu(biblioteca);
            break;
        case 16:
            biblioteca.destrutor();
            exit(0);

    }

}

/***************************************************************************************************************/

Livro* pedirISBN(Biblioteca &biblioteca)
{
    string isbn;
    Livro* livro;

    cout << "ISBN: ";
    getline(cin, isbn);
    livro = biblioteca.procurarLivroPorISBN(isbn);
    biblioteca.cabecalhoListas();
    livro->imprimir(cout);

    return livro;
}

/***************************************************************************************************************/

void confirmarRemocao(Biblioteca &biblioteca)
{
    int opcao;

    cout << endl << "Pretende remover este livro? " << endl
         << "[1] Sim" << endl
         << "[2] Nao" << endl
         << "[3] Voltar atras" << endl
         << "[4] Sair" << endl;

    opcao = verificarOpcao(1, 4);

    switch (opcao)
    {
        case 1:
            cout << "Livro removido com sucesso!" << endl;
            return;
        case 2:
            mainMenu(biblioteca);
            break;
        case 3:
            menuRemoverLivro(biblioteca);
            break;
        case 4:
            biblioteca.destrutor();
            exit(0);
    }


}

/***************************************************************************************************************/

void menuRemoverLivro(Biblioteca &biblioteca)
{
    int opcao;

    mostrarListaCategorias();
    cout << "[15] Voltar atras" << endl
         << "[16] Sair" << endl;

    opcao = verificarOpcao(1, 16);

    Livro* livro_a_remover = pedirISBN(biblioteca);

    switch (opcao)
    {
        case 1:
            //Arquitectura, Arte e Design
            confirmarRemocao(biblioteca);
            biblioteca.removerArquitecturaArteDesign(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 2:
            //Biografias
            confirmarRemocao(biblioteca);
            biblioteca.removerBiografia(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 3:
            //Ciencias Exatas e Naturais
            confirmarRemocao(biblioteca);
            biblioteca.removerCienciasExatasNaturais(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 4:
            //Ciencias Sociais e Humanas
            confirmarRemocao(biblioteca);
            biblioteca.removerCienciasSociaisHumanas(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 5:
            //Culinária e Alimentação
            confirmarRemocao(biblioteca);
            biblioteca.removerCulinaria(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 6:
            //Desenvolvimento Pessoal
            confirmarRemocao(biblioteca);
            biblioteca.removerDesenvolvimentoPessoal(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 7:
            //Engenharia e Informatica
            confirmarRemocao(biblioteca);
            biblioteca.removerEngenhariaInformatica(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 8:
            //Guias Turisticos e Mapas
            confirmarRemocao(biblioteca);
            biblioteca.removerGuiasTuristicosMapas(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 9:
            //História e Política
            confirmarRemocao(biblioteca);
            biblioteca.removerHistoriaPolitica(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 10:
            //Humor
            confirmarRemocao(biblioteca);
            biblioteca.removerHumor(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 11:
            //Infantil e Juvenil
            confirmarRemocao(biblioteca);
            biblioteca.removerInfantilJuvenil(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 12:
            //Policial e Thriller
            confirmarRemocao(biblioteca);
            biblioteca.removerPolicialThriller(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 13:
            //Romance
            confirmarRemocao(biblioteca);
            biblioteca.removerRomance(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 14:
            //Saúde e Bem Estar
            confirmarRemocao(biblioteca);
            biblioteca.removerSaude(livro_a_remover);
            mainMenu(biblioteca);
            break;
        case 15:
            mainMenu(biblioteca);
            break;
        case 16:
            biblioteca.destrutor();
            exit(0);

    }
}

/****************************************************************************************************************
                                            MENU PRINCIPAL
****************************************************************************************************************/
void mainMenu(Biblioteca &biblioteca)
{
    int opcao;

    cout << endl << "** Biblioteca **" << endl
         << "[1] Lista de todos os livros DONE" << endl
         << "[2] Lista de uma categoria de livros DONE" << endl
         << "[3] Procurar livro DONE" << endl
         << "[4] Alterar informacao" << endl
         << "[5] Adicionar livro DONE" << endl
         << "[6] Remover livro DONE" << endl
         << "[7] Sair" << endl;

    opcao = verificarOpcao(1, 7);

    switch (opcao)
    {
        case 1:
            menuListaTodosLivros(biblioteca);
            break;
        case 2:
            menuListaCategoriaLivros(biblioteca);
            break;
        case 3:
            menuProcurarLivro(biblioteca);
            break;
        case 4:
            menuAlteracaoInformacao(biblioteca);
            break;
        case 5:
            menuAdicionarLivro(biblioteca);
            break;
        case 6:
            menuRemoverLivro(biblioteca);
            break;
        case 7:
            biblioteca.destrutor();
            exit(0);
    }

}

/***************************************************************************************************************/



