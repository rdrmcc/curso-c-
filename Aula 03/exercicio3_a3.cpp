#include <iostream>
using namespace std;

int main() {
    int opcao; 

    cout << "Digite um numero de um canal de TV (5 - 7 - 11 - 16): ";
    cin >> opcao; 

    switch (opcao) {
        case 5:
            cout << "TV Ponta Verde.\n";
            break;  
        case 7:
            cout << "TV Gazeta.\n";
            break;
        case 11:
            cout << "TV Pajucara.\n";
            break;
        case 16:
            cout << "TV Farol.\n";    
        default:
            cout << "Opção inválida.\n";  
    }

    return 0;  
}