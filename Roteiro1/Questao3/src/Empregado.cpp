#include "Empregado.h"

Empregado::Empregado()
{
    setSalario(0.0);
    setSobrenome("");
    setNome("");

}

Empregado::Empregado(double salario, std::string nome, std::string sobrenome)
{
    setSalario(salario);
    setSobrenome(sobrenome);
    setNome(nome);

}

void Empregado::setSalario(double salario){this->salario=salario;}
void Empregado::setNome(std::string nome){this->nome=nome;}
void Empregado::setSobrenome (std::string sobrenome){this->sobrenome=sobrenome;}

double Empregado::getSalario(){return this->salario;}
std::string Empregado::getNome(){return this-> nome;}
std::string Empregado::getSobrenome(){return this-> sobrenome;}

Empregado::~Empregado()
{
    //dtor
}
