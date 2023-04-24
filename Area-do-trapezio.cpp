#include <iostream>
using namespace std;

    int main(){

        float b1, b2, altura, area;

            cout << "Calculo de area do trapezio. \n";
            cout << "Informe a primeira base do trapezio: ";
            cin >> b1;
            cout << "Informe a segunda base do trapezio; ";
            cin >> b2;
            cout << "Informe a altura do trapezio: ";
            cin >> altura;
            area = ((b1+b2)*altura)/2;
            cout << "A area do trapezio e igual a: " <<area <<endl;
}
