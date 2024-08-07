#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num[15];

    for (int i = 0; i < 15; i++){
        cout << "Digite um número inteiro positivo: " << endl;
        cin >> num[i];
    }

    
    for (int i = 0; i < 15; i++){
        if (num[i] % 2 == 0){
            cout << "O número " << num[i] << " é par." << endl;
        }
        else {
            cout << "O número " << num[i] << " é ímpar." << endl;
        }
    }


    return 0;
}