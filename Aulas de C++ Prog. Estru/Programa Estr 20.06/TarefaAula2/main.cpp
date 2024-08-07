#include <iostream>

using namespace std;

int fat (int);


int main()
{
    int n;
    cout<<"Entre com o valor do fatorial"<<endl;
    cin>>n;
    cout<<"O fatorial de "<<n<<" é "<< fat(n) <<"!"<<endl;
    return 0;
}


int fat(int n){
    if (n>1){
        return n*fat(n-1);
    }else return 1;
}
