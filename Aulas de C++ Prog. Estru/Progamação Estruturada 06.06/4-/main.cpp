#include <iostream>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char palavra1[20], palavra2[20];
    cout << "Digite a palvra 1: " << endl;
    cin >> palavra1;
    cout << "Digite a palvra 2: " << endl;
    cin >> palavra2;

    if (strcmp(palavra1, palavra2)==0){
        cout << "As palavras são iguais";
    }
    else{
        cout << "As palavras são diferentes.";
    }


    return 0;
}
