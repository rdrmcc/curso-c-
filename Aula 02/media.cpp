#include <iostream>
#include <string>
using namespace std;

int main() {

    string nome;
    float nota1;
    float nota2;
    float nota3;
        
    cout << "Informe o nome do(a) aluno(a): ";
    cin >> nome;
    cout << "Informe a primeira nota do(a) aluno(a) " << nome;
    cin >> nota1;
    cout << "Informe a segunda nota do(a) aluno(a) " << nome;
    cin >> nota2;
    cout << "Informe a terceira nota do(a) aluno(a) " << nome;
    cin >> nota3;
    

    cout << "A media final de " << nome << "foi " << ((nota1 + nota2 + nota3) / 3);

    return 0;


}