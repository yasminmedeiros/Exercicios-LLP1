#include "../Headers/Conta.h"

Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);
virtual void Conta::definirLimite();

void Conta::setnomeCliente (std::string nomeCliente);
void Conta::setsalarioMensal (double salarioMensal);
void Conta::setnumeroConta (int numeroConta);
void Conta::setsaldo (double saldo);
void Conta::setlimite (double limite);

std::string Conta::getnomeCliente();
double Conta::getsalarioMensal();
int Conta::getnumeroConta();
double Conta::getsaldo();
double Conta::getlimite();