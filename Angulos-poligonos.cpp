#include <iostream>

using namespace std;

int main (){

    int lados, angint, angext;

        cout << "Calculadora de angulo de poligonos. " <<endl;
        cout << "Informe quantos lados o poligo tem: " << endl;
        cin >> lados;

        angint = (lados-2)*180;
        angext = (lados+2)*180;

        cout << "A soma dos angulos internos do poligono e igual a: " <<angint << endl;
        cout << "A soma dos angulos externos do poligono e igual a: " <<angext << endl;

        cout << "Obrigado por ultilizar o meu programa <3" <<endl;
}
