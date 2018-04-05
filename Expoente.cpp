/*8*/

#include <iostream>
using namespace std;

int basePot (int b, int e){
    int resultado;
    int apoio;
    apoio = b;

    if (e == 0){
        resultado = 1;
    }
    while (e > 0){
        b = apoio*resultado;
        e--;
        resultado = b;
        }
    return resultado;
    }


int main(){
    int base;
    int expoente;
    int resposta;

    cout << "Digite a base:\n";
    cin >> base;
    cout << "Digite o expoente:\n";
    cin >> expoente;

    cout << base << "^" << expoente << " = ";
    resposta = basePot(base, expoente);
    cout << resposta;
}
