#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    cout << endl;
    cout << "#### Calculo e Comparacao dos Gastos Mensais das Familias com Alimentacao ### \n";
    cout << endl;

    // Digitar o n° de familias.
    int nFamilias;
    cout << "Digite o numero de familias: \n";
    cin >> nFamilias;
    int *vetor = new int[nFamilias];

    // Digitar o gatos mensal de cada familia.
    float somaGastos = 0;
    for (int i = 0; i < nFamilias; i++)
    {
        cout << "Digite o Gasto da faminia " << i + 1 << " em R$/mes = \n";
        cin >> vetor[i];

        // Calculo da soma dos gastos das familias.
        somaGastos = somaGastos + vetor[i];
        cout << endl;
    }

    cout << "Soma dos Gatos das Familias = " << somaGastos;

    cout << endl;

    // Calculo da media do gasto mensal das familias.
    float mediaFamilias;
    mediaFamilias = somaGastos / nFamilias;
    cout << "Media dos gastos das familias = " << mediaFamilias << endl;
    cout << endl;

    // Comparação se o gasto da familia eh mior ou menor do que a media dos gastos.

    for (int i = 0; i < nFamilias; i++)
    {
        if (vetor[i] > mediaFamilias)
        {

            cout << "O gasto da familia " << i + 1 << " eh Maior do que a media dos gastos das familias. \n";
        }
        else

            cout << "O gasto da familia " << i + 1 << " eh menor do que a media dos gastos das familias.\n";
    }

    delete[] vetor;

    return 0;
}

// este código foi feito com 58 e a 1ª versão foi feita com 98, 41% de economia.
