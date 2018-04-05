#ifndef CONTA_H
#define  CONTA_H
#include <iostream>

class Conta: public IConta{
  private:
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
  public:
    Conta();
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);

    void setNomeCliente(std::string nome);
    std::string getNomeCliente();

    void setSalarioMensal(double sm);
    double getSalarioMensal();

    void setNumeroConta(int num);
    int getNumeroConta();

    void setSaldo(double s);
    double getSaldo();

    void setLimite(double lim);
    double getLimite();

    virtual void depositar(double v);
    virtual void sacar(double v);
};

#endif // CONTA_H
