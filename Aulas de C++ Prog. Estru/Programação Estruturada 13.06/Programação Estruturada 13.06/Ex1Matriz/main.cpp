#include <iostream>

using namespace std;

int main()
{
int matriz[2][3];
int i, j;

    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            cout << "Digite um valor para a matriz [" <<i+1<< ", "<<j+1<<"]:" << endl;
            cin >> matriz[i][j];

        }
    }

    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}
