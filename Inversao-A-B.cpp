#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main(){

    setlocale (LC_ALL, "portuguese");
    int a, b, aux;
    cout << "Inversão." <<endl;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    aux=a;
    a=b;
    b=aux;
    cout << "O valor invertido de A e B é: " <<a <<" | " <<b <<endl;

}

