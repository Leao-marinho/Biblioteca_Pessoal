#include "utils.h"

int verificarOpcao(int menorOpcao, int maiorOpcao)
{
    int opcao;
    bool validade = true;

    while (validade)
    {
        cout << "Escolha uma opcao (" << menorOpcao << "-" << maiorOpcao << "): ";

        //Apenas aceita como input números entre o limite inferior e superior (inclusive)
        if (cin >> opcao && menorOpcao <= opcao && maiorOpcao >= opcao)
        {
            validade = false;
            cin.ignore(1000, '\n');
        }
        //Input é recusado, e ciclo é executada de novo até ser introduzido uma opção válida
        else
        {
            cout << "Opcao invalida, tente novamente..." << endl << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    return opcao;
}

string retirar_hifen_isbn(const string &isbn)
{
    string result;

    for(size_t i = 0; i < isbn.size(); ++i)
        if(isbn[i] != '-')
            result = result + isbn[i];

    return result;
}
