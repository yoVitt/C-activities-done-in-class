#include <iostream>

using namespace std;

int main()
{
int i,j;
int n;

    cout << "Digite qual o tamanho vai ser o seu cubo, por exemplo 3x3, mas apenas coloque 1 número: " << endl;
    cin >> n;

int matriz[n][n];


    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "Digite o valor para ocupar na matriz no lugar " << i+1 << ", " << j+1 << ":" << endl;
            cin >> matriz[i][j];
        }
    }
    cout << endl;

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i != j){
                cout << matriz[i][j];
            }
        }
        cout << endl;
    }



    return 0;
}
