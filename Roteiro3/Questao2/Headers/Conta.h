#pragma once
#include <iostream>
#include <iConta.h>
#include <string>

class Conta: public iConta
{
protected:
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;
public:
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);
    virtual void definirLimite();

    void setnomeCliente (std::string nomeCliente);
    void setsalarioMensal (double salarioMensal);
    void setnumeroConta (int numeroConta);
    void setsaldo (double saldo);
    void setlimite (double limite);

    std::string getnomeCliente();
    double getsalarioMensal();
    int getnumeroConta();
    double getsaldo();
    double getlimite();
};

