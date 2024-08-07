#include <iostream>
#include <vector>

using namespace std;

int main(){

    int vet[10];

    for (int i = 0; i < 10; i++)
    {
        vet[i] = i + 1;
    }


    cout << "Os valores do vetor é: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vet[i] << " - ";
    }
    cout<< " " << endl;


    cout << "Os valores do vetor invertidos é: " << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << vet[i] << " - ";
    }
    
}