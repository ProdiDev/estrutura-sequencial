#include <iostream>
using namespace std;

int main (){

    float pag,  pagreal, preco, desconto, descontomulti;

    cout << "Calculadora de descontos. " <<endl;
    cout << "Infome o valor a ser pago pelo produto: ";
    cin >> preco;
    cout << "O valor esta correto? " <<preco << " R$, se sim, prossiga com a porcentagem de desconto: ";
    cin >> desconto;

    descontomulti = desconto/100;
    pag = preco*descontomulti;
    pagreal = (pag-preco)*(-1);

    cout << "O valor que se deve ser pago e: " <<pagreal <<endl;

}
