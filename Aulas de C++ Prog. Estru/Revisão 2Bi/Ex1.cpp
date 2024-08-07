#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num[10],total=0;
    

    for (int i=0; i<10; i++){
        cout<<"Digite o um valor no vetor "<< i+1 <<"!"<<endl;
        cin>>num[i];
        total += num[i];
    }
    cout<<"Os valores digitados são: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<num[i]<<" - ";
    }
    cout<<""<<endl;
    cout<<"As soma dos valores digitados é: "<<total<<endl;
    


}