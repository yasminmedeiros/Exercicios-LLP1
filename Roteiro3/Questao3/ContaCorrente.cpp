#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){
    setnomeCliente("");
    setnumeroConta(0);
    setsaldo(0.0);
    setsalario(0.0);
    definirLimite();
}
ContaCorrente::ContaCorrente(std::string nomeCliente, int numeroConta,
                             double saldo, double salario){
    setnomeCliente(nomeCliente);
    setnumeroConta(numeroConta);
    setsaldo(saldo);
    setsalario(salario);
    definirLimite();
}
double ContaCorrente::getsalario(){return this->salario;}
int ContaCorrente::getlimite(){return limite;}

void ContaCorrente::setsalario(double salario){this->salario=salario;}
void ContaCorrente::setlimite(int limite){this->limite=limite;}

void ContaCorrente::definirLimite(){
    setlimite(2*getsalario());
}