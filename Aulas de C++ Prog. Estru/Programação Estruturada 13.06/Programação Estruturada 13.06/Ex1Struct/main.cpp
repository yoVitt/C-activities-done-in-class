#include <iostream>
#define naluno 2
#include <cstring>

using namespace std;

int main()
{
    struct EstruturaAluno{
    char nome[60];
    char matricula[10];
    int anoIngresso;
    } strAluno[naluno];

    int i;
    for(i=0;i<naluno;i++){
        cout << "Informe o nome do aluno:   ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matricula do aluno:   ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso do aluno:   ";
        cin >> strAluno[i].anoIngresso;
        cout<<endl;
        fflush(stdin);
    }
    cout<<"\nAlunos Cadastrados com sucesso!\n\n";
    for(i=0;i<naluno;i++){
        cout<<"Aluno: " <<strAluno[i].nome <<endl;
        cout<<"Matricula: " <<strAluno[i].matricula <<endl;
        cout<<"Ano de Ingresso: " <<strAluno[i].anoIngresso <<endl;
        cout<<endl;
    }

}
