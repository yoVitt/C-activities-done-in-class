#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


struct Pet {
    string nomePET;
    string esp;
    string raca;
    string sex;
    int idPET;
    string nomeDON;
    int RG;
    int TEL;
};

int main() {
    int quantAni;

    cout << "Quantos animais você irá cadastrar? " << endl;
    cin >> quantAni;
    cin.ignore();

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
        cout << endl;
    }


    ofstream File("dataPET.txt");
    if (!File) {
        cerr << "Erro ao abrir o arquivo para escrita!" << endl;
        return 1;
    }

    // Salvando os dados no arquivo
    for (int i = 0; i < quantAni; i++) {
        File << "PET " << i + 1 << endl;
        File << "Nome: " << pets[i].nomePET << endl;
        File << "Espécie: " << pets[i].esp << endl;
        File << "Raça: " << pets[i].raca << endl;
        File << "Sexo: " << pets[i].sex << endl;
        File << "Idade: " << pets[i].idPET << endl;
        File << "Nome do Dono: " << pets[i].nomeDON << endl;
        File << "RG do Dono: " << pets[i].RG << endl;
        File << "Telefone do Dono: " << pets[i].TEL << endl;
        File << endl;
    }

    File.close();

    cout << "Dados salvos em 'dataPET.txt'" << endl;

}
