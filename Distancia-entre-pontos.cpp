#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main(){
    setlocale (LC_ALL, "portuguese");
    float x1, x2, y1, y2, d, x1x2, y1y2, dr;
    cout << "Distancia entre pontos. \n";
    cout << "Diga as coordenadas de x1: ";
    cin >> x1;
    cout << "Diga as coordenadas de y1: ";
    cin >> y1;
    cout << "Diga as coordenadas de x2: ";
    cin >> x2;
    cout << "Diga as coordenadas de y2: ";
    cin >> y2;

    //calculando a distancia entre pontos.
    x1x2= pow(x2-x1,2);
    y1y2= pow(y2-y1,2);
    d=sqrt(x1x2+y1y2);
    dr=x1x2+y1y2;

    cout << "A distancia entre os dois pontos e igual a: RAIZ DE " <<dr <<". Se formos tirar a raiz: " <<d;
    }
