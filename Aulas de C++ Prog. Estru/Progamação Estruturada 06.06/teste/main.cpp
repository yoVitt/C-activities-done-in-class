#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    char palavra1[20], palavra2[20];
    cout << "Digite a palvra 1: " << endl;
    cin >> palavra1;
    cout << "Digite a palvra 2: " << endl;
    cin >> palavra2;
    cout << "Palavra 1 = " << palavra1 << endl;
    cout << "Palavra 2 = " << palavra2 << endl;
    cout << "Unindo temos palavra 1 e palava 2: " << strncat(palavra2, palavra1) << endl;

    return 0;
}
