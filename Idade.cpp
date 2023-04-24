#include <iostream>
using namespace std;

int main(){

    int anoatual, anonasc, idade;

    cout << "Ano atual: ";
    cin >> anoatual;
    cout << "Ano de nascimento: ";
    cin >> anonasc;

    idade = anoatual-anonasc;

    cout << "A sua idade e: " <<idade <<endl;

}
