#include <iostream>
#include <string>
using namespace std;

int main() {

    int numero1;
    int numero2;

    cout << "Informe o primeiro numero: " << endl;
    cin >> numero1;

    cout << "Informe o segundo numero: " << endl;
    cin >> numero2;

    if (numero1 > numero2) {

        cout << "O primeiro numero digitado :" << numero1 << " eh maior!" << endl;

    }

    if (numero1 < numero2) {

        cout << "O segundo numero digitado :" << numero2 << " eh maior!" << endl;
    }

    if (numero1 == numero2) {

        cout << "Os numeros sao iguais!" << endl;
    }

    return 0;
}