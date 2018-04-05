/*1*/

#include <iostream>
#include <cctype>
using namespace std;

int main(){

    int caractere;
    int desconhecido = 0;
    int resultado;
    int nao_visivel = 0, pontuacao = 0, letra = 0, digito = 0;

    cout << "Digite um caractere\n";

    while (desconhecido != 1){
        cin >> caractere;

        resultado = isspace(caractere);

        if (resultado == 1){
            cout << "O caractere " << caractere << " nao eh visivel.\n";
            nao_visivel = 1;
        }
        if (((caractere == '!' || caractere == '?') || (caractere == ';' || caractere == ':')) || (caractere == '.' || caractere == ',')){
            cout << "O caractere " << caractere << " eh uma pontuacao.\n";
            pontuacao = 1;
        }
        if (isalpha(caractere)){
            cout << "O caractere " << caractere << " eh uma letra.\n";
            letra = 1;
        }
        if (isdigit(caractere)){
            cout << "O caractere " << caractere << " eh um digito.\n";
            digito = 1;
        }
        if ((nao_visivel+pontuacao+letra+digito) == 0){
            desconhecido = 1;
            cout << "O caractere "<< caractere << " eh desconhecido.\n TERMINANDO PROGRAMA.";
        }
    }
    return 0;
}
