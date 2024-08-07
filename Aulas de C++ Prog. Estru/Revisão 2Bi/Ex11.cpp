#include <iostream>
#include <iomanip>


using namespace std;

float IMC (void);

int main(){


cout<<"Programa para calcular MMC"<<endl;
cout<<endl;
cout<<"O seu IMC é "<< fixed << setprecision(2) << IMC() <<endl;

}





float IMC (void){
    float alt, peso, result;
    cout<<"Digite sua altura: ";
    cin>>alt;
    cout<<"Digite seu peso: ";
    cin>>peso;
    result=peso/(alt*alt);
    return result;
}
