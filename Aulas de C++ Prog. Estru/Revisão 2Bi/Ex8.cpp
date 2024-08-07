#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 3;
    float matriz[3][3];
    float matrizMeia[3][3];



    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            cout << "Digite o valor que deseja colocar na Matriz linha " << lin+1 << " coluna " << col+1 << ": ";
            cin >> matriz[lin][col];
            matrizMeia[lin][col]=(matriz[lin][col]/2);
        }
    }
    cout << "Os valores da Matriz são:" << endl;
    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            cout << matriz[lin][col] << "\t";
        }
        cout << endl;
    }
   cout << "Os valores da Matriz resultante é:" << endl;
    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            cout << matrizMeia[lin][col] << "\t";
        }
        cout << endl;
    }
 

    
}