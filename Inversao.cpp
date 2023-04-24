#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num, digito1, digito2, digito3;
    cout << "De entrada em numero inteiro de 3 digitos: ";
    cin >> num;
    digito1 = num % 10;
    digito2 = (num/10) %10;
    digito3 = num/100;
    cout << "O numero invertido é igual a:" <<digito1 <<digito2 <<digito3 <<endl;
}
