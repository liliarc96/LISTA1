#include "Pessoa.h"

Pessoa::Pessoa(std::string nome) {
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco *e, std::string tel) {
    this->nome = nome;
    this->endereco = e;
    this->telefone = tel;
}
