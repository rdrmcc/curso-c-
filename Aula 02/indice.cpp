#include <iostream>
#include <string>
using namespace std;

int main() {

    string nome;
    float peso;
    float altura;
    float imc;
    string mensagem;

    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Informe o seu peso: ";
    cin >> peso;
    cout << "Informe a sua altura: ";
    cin >> altura ;
    
    imc = (peso / (altura * altura)) ;
    mensagem = ((imc >= 18.5) &&  (imc <= 24.9)) ? "Peso normal" : "Fora da normalidade" ;
    cout << nome << ", seu IMC eh : " << imc ;
    cout << mensagem ;
    
     
    return 0;

}