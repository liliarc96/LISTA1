/*5*/

#include <iostream>
#include <string>
using namespace std;

int soma (int valor){
    int i;
    int resultado;
    for (i = 0; i < 50; i++){
        cout << "Digite o valor da nota...\n";
        cin >> valor;
        if (i == 0){
           resultado = valor;
        }else{
           resultado = resultado + valor;
        }
    }
    return resultado;
}

int main(){
    int numero;
    int media_aritmetica;

    numero = soma (0);

    media_aritmetica = numero/50;

    cout << "A media aritmetica eh de " << media_aritmetica;
    return 0;
}
