#include "Poupanca.h"

Poupanca::Poupanca(){
    Conta("",0,0.00);
}
Poupanca::Poupanca(std::string nomeCliente, int numeroConta,double saldo, int variacao, double taxaRendimento){
    Conta(nomeCliente, numeroConta,saldo);
    setvariacao(variacao);
    settaxaRendimento(taxaRendimento);
}
double Poupanca::render(){
    if(getvariacao()==51){
        return taxaRendimento/100*getsaldo();
    }
    if(getvariacao()==1){
        return 0.5/100*getsaldo();
    }
}

int Poupanca::getvariacao(){return this->variacao;}
double Poupanca::gettaxaRendimento(){return this->taxaRendimento;}

void Poupanca::setvariacao(int variacao){this->variacao=variacao;}
void Poupanca::settaxaRendimento(double taxa){this->taxaRendimento=taxa;}