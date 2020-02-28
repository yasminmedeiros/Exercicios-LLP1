#pragma once
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{

public:
    ContaEspecial(std::string nomeCliente, int numeroConta,double saldo, double salario);
    ContaEspecial();
    void definirlimite();
};
