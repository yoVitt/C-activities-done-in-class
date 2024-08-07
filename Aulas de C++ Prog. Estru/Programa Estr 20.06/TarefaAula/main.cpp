#include <iostream>

using namespace std;

    int calc (float);

int main()
{
    float a;
    cout << "Digite a temperatura em Fahrenheit: "<<endl;
    cin >> a;
    cout<<"A temperatura em Celcius é: "<<calc(a)<<"C."<<endl;
    return 0;
}


int calc (float x){
    int result;
    result=(x-32)/1.8;
}
