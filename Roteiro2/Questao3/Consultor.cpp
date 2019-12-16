#include "Consultor.h"

Consultor::Consultor() : Funcionario() {}

Consultor::Consultor(int matricula, double salario, std::string nome) : Funcionario(matricula, salario, nome){}
double Consultor::getSalario(float percentual){
    double salario= Funcionario::getSalario();
    return (salario *(1+percentual));
}