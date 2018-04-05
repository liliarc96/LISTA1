#include "Data.h"
#include <iostream>
using namespace std;

Data::Data(int d, int m, int a)
{
    if (d>=1 && d<=31){
        dia = d;
    }else{
        cout << "INVALIDO\n";
    }
    if (m>-1 && m<=12){
        mes = m;
    }else{
       cout << "INVALIDO\n";
    }
    ano = a;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::setDia(int d){
    dia = d;
}
void Data::setMes(int m){
    dia = m;
}
void Data::setAno(int a){
    dia = a;
}

string Data::toString(){
    char text[50];
    sprintf (text, "%d/%d/%d \n", dia, mes, ano);
    return text;
}

void Data::avancarDia(){
    dia++;
    if (dia > 31){
        dia = 1;
        mes++;
        if (mes > 12){
            mes = 1;
            ano++;
        }
    }
}
