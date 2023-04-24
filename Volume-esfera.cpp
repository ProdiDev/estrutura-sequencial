#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float raio, volume;
    const float pi=3.14;
    cout << "Calculo de volume de esfera\n";
    cout << "De entrada no valor do raio da esfera que deseja calcular o volume: ";
    cin >> raio;
    raio =  4/3.0 * pi * pow(raio,3);
    cout << "O volume da esfera e igual a: " <<raio <<endl;


}
