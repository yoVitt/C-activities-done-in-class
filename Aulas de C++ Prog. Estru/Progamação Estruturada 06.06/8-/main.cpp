#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palavra[20];
    cout << "Exemplo que substitui caracter de uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "Substituindo " << strset(palavra, '*');
    return 0;
}
