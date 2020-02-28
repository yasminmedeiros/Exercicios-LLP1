#pragma once
#include "Conta.h"

class Poupanca : public Conta{
    private:
        int variacao;
        double taxaRendimento;
    public:
        Poupanca();
        Poupanca(std::string nomeCliente, int numeroConta,double saldo, int variacao, double taxaRendimento);
        
        double render();

        int getvariacao();
        double gettaxaRendimento();

        void setvariacao(int variacao);
        void settaxaRendimento(double taxa);
};
