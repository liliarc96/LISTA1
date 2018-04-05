#include "Conta.h"
#include <iostream>

using namespace std;

int main(){
    string n;
    double slm, sl, lt , vl;
    int nc;
    int op;

    Conta c = Conta(n, slm, nc, sl);
    ContaEspecial ce;

    cout << "Digite o seu nome: " << endl;
    cin >> n;

    c.setNomeCliente(n);

    cout << "Digite o numero da conta: " << endl;
    cin >> nc;

    c.setNumeroConta(nc);

    cout << "Digite o seu salario mensal: " << endl;
    cin >> slm;

    c.setSalarioMensal(slm);

    c.setSaldo(slm);


    cout << endl;

    cout << "       Escolha a sua operacao" << endl;
    cout << "1 - Sacar" << endl;
    cout << "2 - Depositar" << endl;
    cin >> op;

    switch (op){
        case 1:
            cout << "Digite o valor para sacar: " << endl;
            cin >> vl;

            c.setValor(vl);

            c.sacar(c.getValor());

            break;
        case 2:
            cout << "Digite o valor para deposito: " << endl;
            cin >> vl;

            c.setValor(vl);

            c.depositar(c.getValor());

            break;
        default:
            break;
    }

    return 0;
}
