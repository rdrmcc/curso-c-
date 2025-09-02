#include <iostream>
#include <string>

using namespace std;

int AnoNascimento;
int AnoAtual;
int Resultado;
string Mensagem;


int main () {

    cout << "Digite o ano atual" << endl;
    cin >> AnoAtual;

    cout << "Digite o ano de nascimento" << endl;
    cin >> AnoNascimento;

    Resultado = (AnoAtual - AnoNascimento);


    if (Resultado <= 17) {

        Mensagem = "Nao pode dirigir!";
    }
    else {
          
        Mensagem = "Pode dirigir!";

    }

    cout << "Em  " << AnoAtual << "  voce tera  " << Resultado << " anos e  " << Mensagem;
 
    
    


    return 0;

}