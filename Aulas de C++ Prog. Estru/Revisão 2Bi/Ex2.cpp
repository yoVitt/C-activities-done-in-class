#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num[5],total=0,cont=0;
    

    for (int i=0; i<8; i++){
        cout<<"Digite o um valor no vetor "<< i+1 <<"!"<<endl;
        cin>>num[i];
        if (num[i] %3==0)
        {
            cont++;
        }
        
    }
    cout<<"Os valores digitados são: ";
    for (int i = 0; i < 8; i++)
    {
        cout<<num[i]<<" - ";
    }
    cout<<""<<endl;
    cout<<"Foi digitado "<<cont<<" multiplos de 3!"<<endl;
    

}