/*9*/
#include <iostream>
using namespace std;

void dados(float h[], char g[]){
        for (int i = 0; i< 10; i++){
            cout << "Digite a altura da pessoa " << i << ":\n";
            cin >> h[i];
            cout << "Digite o genero da pessoa (M/F) " << i << ":\n";
            cin >> g[i];
        }
}


void calculoh(float h[], char g[]){
    int i, maior = 0, menor = 0;
    float maior_valor = 0, menor_valor = 9999;

    menor_valor = maior_valor = h[0];
    for (i = 0; i < 10 ; i++){
        if (h[i] > maior_valor){
            maior_valor = h[1];
        }
        if (h[i] < menor_valor){
            menor_valor = h[i];
        }
    }
    cout << "A menor altura eh de " << menor_valor << " do genero " << g[menor] << endl;
    cout << "A maior altura eh de " << maior_valor << " do genero " << g[maior] << endl;
}

void media (float h[], char g[]){
    int i, numero_M = 0, numero_F = 0;
    float media_M = 0, media_F = 0;

    for (i = 0; i < 10 ; i++){
        if (g[i] == 'F'){
            numero_F++;
            media_F += h[i];
        }
        if (g[i] == 'M'){
            numero_M++;
            media_M+= h[i];
        }
    }
    media_F = media_F/numero_F;
    media_M = media_M/numero_M;
    cout << "A media masculina eh de: " << media_M << endl;
    cout << "O total de homens eh de: " << numero_M << endl;
    cout << "A media feminina eh de: " << media_F << endl;
    cout << "O total de mulheres eh de: " << numero_F << endl;
}

int main (){
    float altura[10];
    char genero[10];
    int selecao;

    while (1){
        cout << "\n::MENU::\n";
        cout << "[1] Inserir Genero e Altura\n";
        cout << "[2] Mostrar Maior e Menor Altura\n";
        cout << "[3] Calcular Media e Mostrar Numero de Individuos\n";
        cout << "[0] Sair\n\n";

        cin >> selecao;

        switch(selecao){
            case 1:
                dados(altura, genero);
                break;
            case 2:
                calculoh(altura, genero);
            case 3:
                media(altura, genero);
                break;
            default:
                break;
        }
    }
}
