#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main(){

    setlocale (LC_ALL, "portuguese");
    int v1, v2, v3, v4, v5, media;
    cout << "Média ponderada, pesos 1, 2, 3, 4 e 5" <<endl;
    cout << "Primeiro valor: ";
    cin >> v1;
    cout << "Segundo valor: ";
    cin >> v2;
    cout << "Terceiro valor: ";
    cin >> v3;
    cout << "Quarto valor: ";
    cin >> v4;
    cout << "Quinto valor: ";
    cin >> v5;

    media = (v1*1) + (v2*2) + (v3*3) + (v4*4) + (v5*5) / 15;

    cout << "A média ponderada dos valores informados é igual a: " <<media <<endl;

}
