#include <iostream>
using namespace std;


int main (){

    //float dolares, real, cot;

    //cout << "Cambio do real e dolar." <<endl;
    //cout << "Quantos dolares voce possui no cofre? " ;
    //cin >> dolares;
    //cout << "Qual é a atual cotacao do dolar? " ;
    //cin >> cot;
    //real = (cot * dolares);
    //cout << "Voce tem " << real << "R$. " <<endl;

    float dolar, real, cot, vdolar, vreal;
    string cambio;

    cout << "Calculadora de cambio." << endl;
    cout << "Qual moeda voce deseja cambiar? ";
    cin >> cambio;

    if (cambio == "dolar") {
        cout << "Quanto voce deseja cambiar? ";
        cin >> vreal;
        cout << "Certo, voce deseja cambiar "  << vreal << "R$, para a moeda do dolar, e qual e a cotacao atual do dolar? ";
        cin >> cot;
        vdolar = vreal / cot;
        cout << "Voce tem " << vdolar << "$ dolares." << endl;}

    else if (cambio == "real") {
        cout << "Quanto voce deseja cambiar? ";
        cin >> vdolar;
        cout << "Certo, voce deseja cambiar "  << vdolar << "$ dolares, e qual e a cotacao atual do dolar? ";
        cin >> cot;
        vreal = vdolar * cot;
        cout << "Voce tem " << vreal << "R$." << endl;}
    else {
        cout << "Moeda nao suportada." << endl;}
}
