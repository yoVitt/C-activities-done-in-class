#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char texto[] = "Este exemplo busca por um determinado caracter dentre de uma string.";
    char *ptr;
    cout << "Procurando por 's' no texto: \n\n" << texto << endl << endl;
    ptr=strchr(texto,'s');

    if  (*ptr){
        cout << "A letra s apareceu a primeira vez na posi��o: " << ptr-texto+1;
    }
    else {
        cout << "Letra n�o encontrada no texto.";
    }

    return 0;
}
