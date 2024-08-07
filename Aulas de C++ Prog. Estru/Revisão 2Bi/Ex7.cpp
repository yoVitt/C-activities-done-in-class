#include <iostream>


using namespace std;

int main(){
    int N = 6;
    int matriz[6][6];


    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            cout << "Digite o valor que deseja colocar na Matriz linha " << lin+1 << " coluna " << col+1 << ": ";
            cin >> matriz[lin][col];
        }
    }


    cout << "Os valores da Matriz são:" << endl;
    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            cout << matriz[lin][col] << "\t";
        }
        cout << endl;
    }


    cout << "Os valores da diagonal secundaria da matriz são:" << endl;
    for (int lin = 0; lin < N; lin++) {
        for (int space = 0; space < N-1-lin; space++) {
            cout << "\t"; 
        }
        cout << matriz[lin][N-1-lin] << endl;
    }


}