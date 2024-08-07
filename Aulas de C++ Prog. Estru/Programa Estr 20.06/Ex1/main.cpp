#include <iostream>

using namespace std;

 void troca(int, int);   // Aqui é a mesma coisa da função, porém estou declarando como prototico, para lá no final eu deixar a real estrutura de função.

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
        temp=x;                   //é usado o &(e-comercial) para chamar por referencia, ele pega o endereço na memoria. Caso usado dentro do main, não precisa utilizar o &.
        x=y;
        y=temp;
    }
