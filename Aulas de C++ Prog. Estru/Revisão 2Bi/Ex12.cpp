#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

float IMC (float,float);

int main(){

struct imcPESSOA{
    string nome;
    float alt;
    float peso;
    float imcRES; 
};

cout<<"Programa para calcular MMC"<<endl;
cout<<endl;

int quantP;

cout<<"Quantas pessoas serão registradas?"<<endl;
cin>>quantP;
cin.ignore();

vector<imcPESSOA> regisP(quantP);

for (int i = 0; i < quantP; i++)
{
    cout<<"Qual o nome do cliente: ";
    cin.ignore();
    getline(cin,regisP[i].nome);
    cout<<"Qual a altura do cliente: ";
    cin>>regisP[i].alt;
    cout<<"Qual o peso do cliente: ";
    cin>>regisP[i].peso;

    regisP[i].imcRES = IMC(regisP[i].peso, regisP[i].alt);

    cout<<"O IMC é:  "<< fixed << setprecision(2) << regisP[i].imcRES <<endl;
    cout<<endl;
}



}


float IMC (float peso, float alt){
    float result;
    result=peso/(alt*alt);
    return result;
}
