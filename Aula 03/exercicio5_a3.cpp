#include <iostream>
using namespace std;

int main() {
    string dia_semana;
    float preco_produto;
    string opcao_produto;
    string nome;
    float resultado;
    
    cout << "Informe o dia da semana: ";
    cin >> dia_semana;

    cout << "Informe o preco do produto: ";
    cin >> preco_produto;

    cout << "Informe a opcao do produto: ";
    cin >> opcao_produto;

    cout << "Informe o nome do produto: ";
    cin >> nome;
      

    if (dia_semana == "segunda" || dia_semana == "terca" || dia_semana == "quarta" && opcao_produto == "ouro") {
        resultado = (preco_produto / 2 );
    } 
    else if (dia_semana == "quinta" || dia_semana == "sexta" && preco_produto >= 10.00 || preco_produto <= 100.00) {
        resultado = (preco_produto / 3 );
    }  
    else if (dia_semana == "sabado" && opcao_produto == "prata") { 
        resultado = (preco_produto * 3 );  
    } else {
        resultado = (preco_produto * 2 ); 
    }
    
    cout << "O preco do produto " << nome << "no dia " << dia_semana <<  "é  " << resultado ;
    return 0; 
}