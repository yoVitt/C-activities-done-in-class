#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string abc;

    ifstream arq_ler ("ArquivoFor.txt");
    if (arq_ler.is_open()){
        while (! arq_ler.eof()){
            getline (arq_ler, abc);
            cout<<abc<<endl;
        }
    arq_ler.close();
    } else{
        cout<<"Erro: Arquivo n�o aberto ou n�o existe."<<endl;
    }
    return 0;
}
