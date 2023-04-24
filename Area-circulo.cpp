#include <iostream>
#include <math.h>
using namespace std;

 int main(){

    float raio, area, pi;
    pi=3.14;
        cout << "Calculando a area do circulo. \n";
        cout << "Informe o raio do circulo: ";
        cin >> raio;
        area = pi*pow(raio, 2);
        cout << "A area do circulo e igual a: " <<area <<endl;

 }
