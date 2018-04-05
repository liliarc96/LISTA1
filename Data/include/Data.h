#ifndef DATA_H
#define DATA_H

#include <string>

class Data
{
    public:
        Data (int d, int m, int a);
        int getDia ();
        int getMes ();
        int getAno ();
        void setDia (int d);
        void setMes (int m);
        void setAno (int a);
        void avancarDia();
        std::string toString();
    private:
    int dia, mes, ano;
};

#endif // DATA_H
