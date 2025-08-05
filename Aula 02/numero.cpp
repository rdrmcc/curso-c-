#include <iostream>
#include <string>

using namespace std;


int main() {

    int numero;
    int resto;
    string mensagem;

    cout << "Digite um numero: \n";
    cin >> numero;

    resto = (numero % 2);
    mensagem = resto == 1 ? "O numero eh impar" : "O numero eh par";

    cout << mensagem << endl;

    return 0;




}