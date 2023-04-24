#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    float a, b, c, delta, x1, x2;

    // Solicita os valores de A, B e C
    cout << "Calcular as raízes e o delta de uma equação de segundo grau.\n";
    cout << "Digite os valores de A, B e C na equação ax^2 + bx + c = 0.\n";
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;

    // Calcula o delta e exibe seu valor
    delta = pow(b, 2) - 4 * a * c;
    cout << "O valor do delta é: " << delta << endl;

    // Verifica o valor de delta e exibe as raízes
    if (delta < 0) {
        cout << "Como o delta é negativo, as raízes são números complexos.\n";
    } else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "As raízes são x1 = " << x1 << " e x2 = " << x2 << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        cout << "Como o delta é igual a zero, a equação tem apenas uma raiz real: x = " << x1 << endl;
    }
    return 0;
}
