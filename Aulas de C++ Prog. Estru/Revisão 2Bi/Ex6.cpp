#include <iostream>
#include <vector>

using namespace std;

int main(){

    int matriz[4][4];

    for (int lin = 0; lin < 4; lin++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<"Digite o valor que deseja colocar na Matriz linha "<< lin+1<<" coluna "<<col+1<<": "<<endl;
            cin>>matriz[lin][col];
        }
        
    }
    cout << "Os valores da Matriz são: "<<endl;
    for (int lin = 0; lin < 4; lin++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<matriz[lin][col]<<"\t";
        }
    cout<<endl;
    }
    
    
}