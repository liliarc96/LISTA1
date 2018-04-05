#ifndef ENDERECO_H
#define ENDERECO_H


class Endereco
{
    public:
        Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep);
    private:
        std::string rua, bairro, cidade, estado, cep;
        int numero;
};

#endif // ENDERECO_H
