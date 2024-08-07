#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Digite a quantidades de nota que usará" << endl;
    cin >> a;

    int notas[a], media = 0, i;

    for (i=0; i<a; i++){
        cout << "Digite a nota do aluno " << (i+1) << "; " << endl;
        cin >> notas[i];
        media += notas[i];
    }
    cout << "\nMédia das notas: " << (media/a) << endl;

    return 0;
}
