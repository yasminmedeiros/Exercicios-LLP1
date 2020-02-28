#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta,double saldo, double salario){
    Conta(nomeCliente, numeroConta,saldo);
    setsalario(salario);
    definirLimite();
}

void ContaEspecial::definirlimite(){
    setlimite(4*getsalario());
}
