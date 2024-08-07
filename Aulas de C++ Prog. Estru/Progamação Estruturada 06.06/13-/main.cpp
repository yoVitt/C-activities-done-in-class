#include <iostream>

using namespace std;

int main()
{
    int num = 5;
    char vetor[num];

    for (int i = 0; i < num; i++){
        cout << "Digite uma letra: " << endl;
        cin >> vetor[i];
    }
    for (int i =0; i < num; i++){
        cout << "\nA letra armazenada na posição " << i << " do vetor é: " << vetor[i] << endl;
    }

    cout << "O vetor armazena as letras: " << vetor << endl;
    cout << "A segunda posição do vetor armazena a letra: " << vetor[1] << endl;

    return 0;
}
