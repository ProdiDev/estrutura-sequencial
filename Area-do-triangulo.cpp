#include <iostream>
using namespace std;

    int main(){

       float base, altura, area;

        cout << "Calculo de area de triangulo. \n";
        cout << "De entrada no valor da base do triangulo: ";
        cin >> base;
        cout << "Agora, de entrada na altura do triangulo: ";
        cin >> altura;

        area= (base*altura)/2;

        cout << "A area do triangulo é igual a: " <<area <<endl;
    }
