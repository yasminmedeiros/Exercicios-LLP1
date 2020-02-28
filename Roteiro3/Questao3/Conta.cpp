#include "Conta.h"

Conta::Conta(std::string nomeCliente, int numeroConta,double saldo){
    this->nomeCliente=nomeCliente;
    this->numeroConta=numeroConta;
    this->saldo=saldo;
}
Conta::Conta(){
    this->nomeCliente="";
    this->numeroConta=0;
    this->saldo=0.0;
}


void Conta::sacar(double valor){
    if(valor<=getsaldo())
        setsaldo(getsaldo()-valor);
    else
        std::cout<< "\nSaldo Indisponivel\n"<<std::endl;
}
void Conta::depositar (double valor){
    setsaldo(getsaldo()+valor);
}
std::string Conta::getnomeCliente(){return this->nomeCliente;}
int Conta::getnumeroConta(){return this->numeroConta;}
double Conta::getsaldo(){return this->saldo;}

void Conta::setnomeCliente(std::string nome){this->nomeCliente=nome;}
void Conta::setnumeroConta(int numero){this->numeroConta=numero;}
void Conta::setsaldo(double saldo){this->saldo=saldo;}