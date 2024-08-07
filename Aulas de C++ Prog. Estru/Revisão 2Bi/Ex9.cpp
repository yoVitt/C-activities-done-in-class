#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pet {
    string nomePET;
    string esp;
    string raca;
    string sex;
    int idPET;
    string nomeDON;
    long long int RG;
    long long int TEL;
};

int main() {
    int quantAni;

    cout << "Quantos animais você irá cadastrar? " << endl;
    cin >> quantAni;
    cin.ignore();  //ignorar cache

    //Tive que usar std::vector, por causa do ignorante do meu vsCODE dando piti..
    vector<Pet> pets(quantAni);

    for (int i = 0; i < quantAni; i++) {
        cout << "INFORME O NOME DO PET: ";
        getline(cin, pets[i].nomePET);
        cout << "INFORME A ESPÉCIE DO PET: ";
        getline(cin, pets[i].esp);
        cout << "INFORME A RAÇA DO PET: ";
        getline(cin, pets[i].raca);
        cout << "INFORME O SEXO DO PET: ";
        getline(cin, pets[i].sex);
        cout << "INFORME A IDADE DO PET: ";
        cin >> pets[i].idPET;
        cin.ignore();  
        cout << "INFORME O NOME DO DONO DO PET: ";
        getline(cin, pets[i].nomeDON);
        cout << "INFORME O RG DO DONO DO PET: ";
        cin >> pets[i].RG;
        cin.ignore();  
        cout << "INFORME O TELEFONE DO DONO DO PET: ";
        cin >> pets[i].TEL;
        cin.ignore();
        cout<<endl;
    }

    // Exibir
    cout<<endl;
    cout << "\nDados cadastrados:" << endl;
    for (int i = 0; i < quantAni; i++) {
        cout << "PET #" << i + 1 << endl;
        cout << "Nome: " << pets[i].nomePET << endl;
        cout << "Espécie: " << pets[i].esp << endl;
        cout << "Raça: " << pets[i].raca << endl;
        cout << "Sexo: " << pets[i].sex << endl;
        cout << "Idade: " << pets[i].idPET << endl;
        cout << "Nome do Dono: " << pets[i].nomeDON << endl;
        cout << "RG do Dono: " << pets[i].RG << endl;
        cout << "Telefone do Dono: " << pets[i].TEL << endl;
    }

    return 0;
}
