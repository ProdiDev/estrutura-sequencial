#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int horas, valorhora, filhos, salario;
    string nome;


    cout << "Calculadora de salarios." <<endl;
    cout << "Qual e o funcionario que deseja consultar o salario? ";
    cin >> nome;
    cout << "Quantas horas " <<nome <<" trabalhou? ";
    cin >> horas;
    cout << "Qual e o valor da hora de " <<nome <<"?";
    cin >> valorhora;
    cout << "Quantos filhos o " <<nome <<" tem?";
    cin >> filhos;
    salario = (((horas * valorhora)*0.3)*filhos) + (horas * valorhora);
    cout << "Salario: " <<salario;

}
