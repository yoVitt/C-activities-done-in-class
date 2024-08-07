#include <iostream>

using namespace std;

void cumprimenta(char inic1, char inic2)
{
    cout<<"Ola, meu amigo "<< inic1 << inic2 <<"!"<<endl;
}


int main()
{
    char primeiro, segundo;

    cout << "Entre com duas iniciais (sem separações) ";
    cin >>primeiro>>segundo;
    cumprimenta(primeiro, segundo);

    return 0;
}
