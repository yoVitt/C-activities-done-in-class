#include <iostream>
#include <locale>
#define DIM 5

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[DIM] = {10, 15, 20, 25, 30};
    int vetor1[] = {10, 20, 30, 40, 50, 60, -1};
    int i;

    cout << "Vetor com tamanho pr�-definido com define \n";
    for (i=0; i<DIM; i++){
        cout << "Vetor na posi��o " << i << " = " << vetor[i] << endl;
    }

    cout << "\n\nVetor terminado por -1 \n";
    for (i=0; vetor1[i] > 0; i++){
        cout << "Vetor na posi��o " << i << " = " << vetor1[i] << endl;
    }


    return 0;
}
