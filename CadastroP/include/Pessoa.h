#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <Endereco.h>

class Pessoa
{
    public:
        Pessoa(std::string nome, Endereco *e, std::string tel);
    private:
        std::string nome;
        Endereco *endereco;
        std::string telefone;
};

#endif // PESSOA_H
