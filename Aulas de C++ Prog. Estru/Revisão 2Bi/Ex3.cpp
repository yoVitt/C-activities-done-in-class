#include <iostream>

using namespace std;

int main(){

    int vet1[10],vet2[10];
    float mult[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Digite o numero do vetor 1, da posição "<< i+1<<": " << endl;
        cin>>vet1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"Digite o numero do vetor 2, da posição "<< i+1<<": " << endl;
        cin>>vet2[i];
    }
    cout << "Os Números do vetor 1 são: ";
    for (int i = 0; i < 10; i++)
    {
        mult[i]=vet1[i]*vet2[i];
        cout<< vet1[i] <<" - ";
    }
    cout<<""<<endl;
    cout << "Os Números do vetor 2 são: ";
    for (int i = 0; i < 10; i++)
    {
        cout<< vet2[i] <<" - ";
    }
    cout<<""<<endl;
    cout << "Os Números das multiplicação são : ";
    for (int i = 0; i < 10; i++)
    {
        cout<< mult[i] <<" - ";
    }
}