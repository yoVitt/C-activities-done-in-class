#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    string linha;
    fstream arq;
    arq.open ("nomes.txt", ios::out | ios::app);
    if (arq.is_open()){
        arq << "==========="<<endl;
        arq << "==========="<<endl;
    arq.close();

    arq.open("nomes.txt", ios::in);
        while (! arq.eof()){
            getline (arq,linha);
            cout<<linha<<endl;
        }
    arq.close();
    }else{
    cout<<"Arquivo não foi encontrado ou não criado."<<endl;
    }
    return 0;
}
