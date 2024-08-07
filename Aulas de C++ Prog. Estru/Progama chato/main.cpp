#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() 
{
    char resp1, resp4, resp5, resp6, resp8; 
    int num, result, tab, idade = 0;
    string nome, cidade;

    cout << "Eae, tá afim de bater um papo?" << endl;
    cout << "Irei fazer perguntas de sim e não, então me responta com 's' ou 'n' sempre em minusculo." << endl;
    cout << "Você está de acordo?" << endl;
    // pergunta 1
    cin >> resp1;
        if (resp1 == 's'){
            cout << "Otimo. Vamos lá ser vivo. Ah sim, Me diga seu nome." << endl;
        }else{
            cout << "Ado, ado, quem não falar comigo é viado. Me diga seu nome." << endl;
        }
     // pergunta 2
    cin.ignore(1000, '\n');
    getline (cin, nome);
    cout << "Okay " << nome << " Agora podemos continuar." << endl;
    cout << "Quantos anos você tem? Essa pode responder por número." << endl;
    // pergunta 3
    cin >> idade;
        if(idade >= 18){
            cout << "Se já pode ser preso bixo kkkk." << endl;
        }else{
            cout << "Crianção." << endl;
        }
    cout << "Você acredita que eu posso te mostrar qualquer tabuada que você quiser? (s=sim/n=nao)" << endl;
    // pergunta 4
    cin >> resp4;
        switch (resp4){
        case 's':
            cout << "Otimo!!! Vamo lá, me lança qual a tabuada que deseja ver." << endl;
            break;
        case 'n':
            cout << "Nem você consegue fazer a tabuada de cabeça, vamos logo, me lança qual a tabuada que deseja ver." << endl;
            break;
        default:
        cout << "Pedra. Não sabe responder com s ou n. Dizem que os computadores é que não pensam. Fala logo qual tabuada deseja ver." << endl;
        }

    cin >> tab;
    cout << " " << endl;
        for (int i = 0; i < 11; i++){
            result = i*tab;
            cout << i << " x " << tab << " = " << result << endl;
        }
    do
    {
        cout << "Tem gostado de conversar comigo? (s=sim/n=nao)" << endl;
    // pergunta 5
        cin >> resp5;
    } while (resp5 == 'n');
    cout << "Ainda bem rsrs." << endl;
    cout << "Agora me diga quais desses paises você moraria. Responda com uma das letras." << endl;
    cout << "México [m]" << endl;
    cout << "Alemanha [a]" << endl;
    cout << "Canadá [c]" << endl;
    cout << "Estados Unidos [e]" << endl;
    cout << "Outros [o]" << endl;
    // pregunta 6
    cin >> resp6;
        switch (resp6)
        {
        case 'm':
            cout << "Que daora, México parece ter umas comida daora." << endl;
            break;
        case 'a':
            cout << "Rapaz... Alemanha é um otimo pais agora... É, talvez eu não gostaria de ficar muito proximo de você." << endl;
            break;
        case 'c':
            cout << "CARAMBA, EU TAMBÉM MORARIA LÁ... Mesmo sendo um robo, rsrs." << endl;
            break;
        case 'e':
            cout << "Modinha." << endl;
            break;
        case 'o':
            cout << "Vixi, então nem quero saber." << endl;
            break;
            default:
                cout << "Seu burro, não sabe responder do jeito que pedi? Nem quero mais falar com você." << endl;
                return 1;
            break;
        }
    cout << "Okay, okay, estamos acabando, foi bom enquanto durou..." << endl;
    cout << "Bom " << nome << ", me fale alguns números inteiros para que eu diga se é par ou impar." << endl;
    // pergunta 7
        for (int i=0; i<5; i++){
            cout << "Digite o número: ";
            cin >> num;
            if  (num % 2 == 0 ) {
                cout << "Esse número é par." << endl;
            }else{
                 cout << "Esse número é impar." << endl;
            }
        }
    cout << "Agora para finalizar, você deseja conversar comigo outro dia? (s=sim/n=nao)" << endl;
    // pergunta 8
    cin >> resp8;
        if (resp8 == 's'){
            cout << "Estou muito feliz." << endl;
        }else if(resp8 == 'n'){
            cout << "Tá muito engraçadinho né, melhor voltar um dia." << endl;
        }else{
            cout << "Você só precisava respoder certo. Se é loko viu." << endl;
        }
    cout << "De qualquer forma, foi muito bom conversar com você. Adeus..." << endl;

return 0;

}
