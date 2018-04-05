/*7*/

#include <iostream>
using namespace std;

int isPrimo (int numero){
    int i;
    int div;
    for (i = 1; i <= numero; i++){
        if (numero % i == 0){
            div++;
        }
    }
   if (div == 2){
    cout << "O numero " << numero << " eh primo\n";
   } else{
    cout << "O numero " << numero << " nao eh primo\n";
   }
   return 0;
}

int main(){
    int n;

    for (n = 1;  ; ++n){
        isPrimo(n);
    }
}
