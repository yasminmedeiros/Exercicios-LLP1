#pragma once
#include <iostream>
#include <string>
class Conta 
{
protected:
    std::string nomeCliente;
    int numeroConta;
    double saldo;
public:
    Conta(std::string nomeCliente, int numeroConta,double saldo);
    Conta();

    void sacar(double valor);
    void depositar (double valor);
    
    std::string getnomeCliente();
    int getnumeroConta();
    double getsaldo();

    void setnomeCliente(std::string nome);
    void setnumeroConta(int numero);
    void setsaldo(double saldo);

};
