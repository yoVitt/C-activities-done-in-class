#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo ("C:/Users/Aluno/Desktop/Programa Estr 20.06/test.txt");
    if(arquivo.is_open()){
            //"is_open" serve para ver se o arquivo est� realmente aberto, mas se for abrir direito ele, apenas coloque .open()
            //"ios::(out) or (in) � para saida e entrada, agora o ios::app � para por sempre no final da linha, depois do ultimo caractere."
        arquivo << "Cardapio do m�s" <<endl;
        arquivo << "Macarr�o > R$00,00"<<endl;
        arquivo << "Feij�o > R$00,00"<<endl;
        arquivo << "Arroz > R$00,00"<<endl;
        arquivo.close();
    }
    else{
        cout<<"Arquivo n�o existe ou n�o foi aberto"<<endl;
    }
    return 0;
}







