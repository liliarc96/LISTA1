/*4*/

#include <iostream>
using namespace std;

float salario_bruto, desconto, salario_liquido;

int main(){

    cout << "Digite o seu salario: \n";
    cin >> salario_bruto;

    if (salario_bruto <= 954){
        cout << "O desconto de INSS eh de 8%\n";
        desconto = (salario_bruto*8)/100;
    }
    if (salario_bruto > 954 && salario_bruto <=1600){
        cout << "O desconto de INSS eh de 9%\n";
        desconto = (salario_bruto*9)/100;
    }
    if (salario_bruto > 1600){
        cout << "O desconto de INSS eh de 10%\n";
        desconto = (salario_bruto*10)/100;
    }
    cout << "Sera descontado um valor de " << desconto;
    salario_liquido = salario_bruto - desconto;
    cout << "\nO valor final eh de " << salario_liquido;
}
