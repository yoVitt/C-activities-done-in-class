#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i;
    cout << setprecision(2);

    for (i=0; i<tamanho; i++){
        cout << "Digite a nota do aluno " << (i+1) << "; " << endl;
        cin >> notas[i];
        media += notas[i];
    }
    cout << "\nMédia das notas: " << (media/tamanho) << endl;
    return 0;
}
