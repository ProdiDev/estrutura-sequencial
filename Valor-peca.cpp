#include <iostream>
using namespace std;

    int main(){

        float pc1, pc2, qpc1, qpc2, fpc1, fpc2, vtpc1, vtpc2, vtdpc;

        pc1=10, pc2=13, fpc1=2, fpc2=4;

        cout << "Valor de pecas. \n";
        cout << "Indique quantas pecas1 foram compradas: ";
        cin >> qpc1;
        cout << "Indique quantas pecas2 foram compradas: ";
        cin >> qpc2;
        vtpc1 = (pc1+fpc1)*qpc1;
        vtpc2 = (pc2+fpc2)*qpc2;
        cout << "O valor total pago em pecas1 mais frete foi de: " <<vtpc1 <<endl;
        cout << "O valor total pago em pecas2 mais frete foi de: " <<vtpc2 <<endl;
        vtdpc = vtpc1+vtpc2;
        cout << "O valor total pago nas pecas 1 e 2 mais frete foi de: " <<vtdpc <<endl;

}
