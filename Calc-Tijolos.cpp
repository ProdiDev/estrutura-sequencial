#include <iostream>
using namespace std;

int main(){

    float ctijolo, atijolo, cparede, aparede, qtijolo, vtijolo, vparede;

    cout << "Calculadora de tijolos. " <<endl;
    cout << "Informe o comprimento do tijolo: ";
    cin >> ctijolo;
    cout << "Informe a altura do tijolo ";
    cin >> atijolo;
    cout << "Informe o tamanho da parede em CM: ";
    cin >> cparede;
    cout << "Informe a altura da parede em CM: ";
    cin >> aparede;

    vtijolo = ctijolo*atijolo;
    vparede = cparede*aparede;

    qtijolo = vparede/vtijolo;

    cout << "A quantidade de tijolos necessarios para a construcao da parede e: " <<qtijolo <<endl;
}
