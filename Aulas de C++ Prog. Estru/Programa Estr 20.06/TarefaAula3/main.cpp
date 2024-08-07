#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream arq;
    string nome;
    int idade,quant;

    arq.open("pessoas.txt",ios::app);
    cout << "Quantas pessoas você deseja registrar?: " <<endl;
    cin >> quant;
    fflush(stdin);
    arq << "Registro de pessoas" <<endl;
        for(int n=1;n<=quant;n++){
            cout<<"Digite o nome da pessoa:"<<endl;
            getline(cin, nome);
            fflush(stdin);
            cout<<"Digite a idade da pessoa:"<<endl;
            cin>>idade;
            fflush(stdin);
            arq << nome <<" ||  "<< idade <<endl;
        }

    return 0;
}
