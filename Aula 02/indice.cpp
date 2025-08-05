#include <iostream>
#include <string>
using namespace std;

int main() {

    string nome;
    float peso;
    float altura;
    float resultado;
    bool IMC;

    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Informe o seu peso: ";
    cin >> peso;
    cout << "Informe a sua altura: ";
    cin >> altura ;
    
    resultado = (peso / (altura * altura)) ;
    IMC = ((resultado >= 18.5) &&  (resultado <= 24.9)) ? "Peso normal" : "Fora da normalidade" ;
    cout << nome << ", seu IMC eh : " << resultado ;
    cout << IMC ;
    
     
    return 0;

}