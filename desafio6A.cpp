#include <iostream>
//#include <math.h> eu preferi não usar esta biblioteca neste momento.

using namespace std;

int main()
{
    float familia1;
    cout << "Digite o gasto mensal(R$) da familia 1: \n";
    cin >> familia1;

    float familia2;
    cout << "Digite o gasto mensal(R$) da familia 2: \n";
    cin >> familia2;

    float familia3;
    cout << "Digite o gasto mensal(R$) da familia 3: \n";
    cin >> familia3;

    float familia4;
    cout << "Digite o gasto mensal(R$) da familia 4: \n";
    cin >> familia4;

    float familia5;
    cout << "Digite o gasto mensal(R$) da familia 5: \n";
    cin >> familia5;
    cout << endl;

    float mediaFamilias;
    mediaFamilias = (familia1 + familia2 + familia3 + familia4 + familia5) / 5;

    if (familia1 > mediaFamilias)
    { // Abertura de chave do if para faminia1
        cout << "O gasto da familia 1 eh maior do que a media das familias: \n";
        // cout << "* Familia 1 = " << familia1 << endl;
        // cout << "* A media do gasto mensal(R$) das familias eh: " << mediaFamilias << endl;

    } // Fechamento de chave do if para faminia1
    else
        cout << "O gasto da familia 1 eh menor do que a media das familias: \n";

    cout << "* Familia 1 = " << familia1 << endl;
    cout << "* A media do gasto mensal(R$) das familias eh = " << mediaFamilias << endl;
    cout << endl;

    if (familia2 > mediaFamilias)
    { // Abertura de chave do if para faminia2
        cout << "O gasto da familia 2 eh maior do que a media das familias: \n";

    } // Fechamento de chave do if para faminia2
    else
        cout << "O gasto da familia 2 eh menor do que a media das familias: \n";

    cout << "* Familia 2 = " << familia2 << endl;
    cout << "* A media do gasto mensal(R$) das familias eh =  " << mediaFamilias << endl;
    cout << endl;

    if (familia3 > mediaFamilias)
    { // Abertura de chave do if para faminia2
        cout << "O gasto da familia 3 eh maior do que a media das familias: \n";

    } // Fechamento de chave do if para faminia2
    else
        cout << "O gasto da familia 3 eh menor do que a media das familias: \n";

    cout << "* Familia 3 = " << familia3 << endl;
    cout << "* A media do gasto mensal(R$) das familias eh =  " << mediaFamilias << endl;
    cout << endl;

    if (familia4 > mediaFamilias)
    { // Abertura de chave do if para faminia4
        cout << "O gasto da familia 4 eh maior do que a media das familias: \n";

    } // Fechamento de chave do if para faminia4
    else
        cout << "O gasto da familia 4 eh menor do que a media das familias: \n";

    cout << "* Familia 42 = " << familia4 << endl;
    cout << "* A media do gasto mensal(R$) das familias eh =  " << mediaFamilias << endl;
    cout << endl;

    if (familia5 > mediaFamilias)
    { // Abertura de chave do if para faminia5
        cout << "O gasto da familia 5 eh maior do que a media das familias: \n";

    } // Fechamento de chave do if para faminia5
    else
        cout << "O gasto da familia 5 eh menor do que a media das familias: \n";

    cout << "* Familia 5 = " << familia5 << endl;
    cout << "* A media do gasto mensal(R$) das familias eh =  " << mediaFamilias << endl;
    cout << endl;

    return 0;
}
