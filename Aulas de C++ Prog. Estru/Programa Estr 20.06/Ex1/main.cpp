#include <iostream>

using namespace std;

 void troca(int, int);   // Aqui � a mesma coisa da fun��o, por�m estou declarando como prototico, para l� no final eu deixar a real estrutura de fun��o.

int main()
{

    int a,b;
    cout << "Entre dois numeros: ";
    cin >>a>>b;
    cout << "Voce entrou com " <<a<< " e " <<b<< endl;

    troca(a, b);

    cout << "Trocados, eles sao " <<a<< " e " <<b<< endl;
    return 0;
}




 void troca(int&x, int&y){
        int temp;
        temp=x;                   //� usado o &(e-comercial) para chamar por referencia, ele pega o endere�o na memoria. Caso usado dentro do main, n�o precisa utilizar o &.
        x=y;
        y=temp;
    }
