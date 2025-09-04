#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Informe a idade do nadador: ";
    cin >> idade;  

    if (idade < 5) {
        cout << "Idade Invalida.\n";
    } 
    else if (idade = 5 || idade <= 7) {
        cout << "O nadador se engrada na categoria: Infantil A.\n";
    }  
    else if (idade = 8 || idade <= 10) { 
        cout << "O nadador se engrada na categoria: Infantil B.\n";  
    } 
    else if (idade = 11 || idade <= 13) { 
        cout << "O nadador se engrada na categoria: Juvenil A.\n";
    }  
    else if (idade = 14 || idade <= 17) { 
        cout << "O nadador se engrada na categoria: Juvenil B.\n";
    } 
    else if (idade = 18 || idade <= 40) { 
        cout << "O nadador se engrada na categoria: Adulto.\n";
    } 

    else {
        cout << "O nadador se engrada na categoria: Master.\n"; 
    }
    
    return 0; 
}