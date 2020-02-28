#pragma once
#include "Conta.h"

class ContaCorrente : public Conta
{
protected:
    double salario;
    int limite;
public:
    ContaCorrente();
    ContaCorrente(std::string nomeCliente, int numeroConta,double saldo, double salario);
    virtual void definirLimite();

    double getsalario();
    int getlimite();

    void setsalario(double salario);
    void setlimite(int limite);

};

