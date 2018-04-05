/*10*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int numero, palpite;

    srand(time(0));
    numero = rand() % 100 + 1;

    while (numero != palpite){
        cout << "Adivinhe o numero entre 1 e 100:\n";
        cin >>  palpite;
        if (numero < palpite){
            cout << "Muito alto. Tente novamente.\n";
        }
        if (numero > palpite){
            cout << "Muito baixo. Tente novamente.\n";
        }
    }
    cout <<  "Acertou!";
}
