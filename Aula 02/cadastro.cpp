#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome;
    int idade;
    float peso;
    char genero;

    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "informe a sua idade: ";
    cin >> idade;
    cout << "Informe o seu peso: ";
    cin >> peso;
    cout << "Informe o seu genero (M/F): ";
    cin >> genero;

    cout << "Cadastro realizado com sucesso!" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Peso: " << peso << endl;
    cout << "Genero: " << genero << endl;

    return 0;
}