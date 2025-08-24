#include <iostream>
#include <string>
using namespace std;

int main() {

    float valor_produto;
    float preco_vista;
    float preco_parcelado;
    float valor_parcela;
    float comissao_vendedor_v;
    float comissao_vendedor_p;
    

    cout << "Informe o valor do produto: ";
    cin >> valor_produto;
    
    
    preco_vista = (valor_produto * 0.95);
    cout << "O preco a vista, com 5 por cento de desconto, eh: R$ " << preco_vista << endl;

    preco_parcelado = (valor_produto * 1.10);
    cout << "O preco parcelado, com acrescimo de 10 por cento, eh: R$ " << preco_parcelado << endl;

    valor_parcela = (preco_parcelado / 5);
    cout << "O parcelamento pode ser feito em 5 parcelas de: R$ " << valor_parcela << endl;

    comissao_vendedor_v = (preco_vista * 0.06);
    comissao_vendedor_p = (preco_parcelado * 0.06);
    cout << "Comissao do vendedor com pagamento a vista: R$ " << comissao_vendedor_v << endl;
    cout << "Comissao do vendedor com pagamento parcelado: R$ " << comissao_vendedor_p << endl; 
    
     
    return 0;

}