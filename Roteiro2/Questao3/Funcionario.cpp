#include "Funcionario.h"
#include <string>

Funcionario::Funcionario(){
    setMatricula(0);
    setSalario(0.0);
    setNome("0");
    
}
Funcionario::Funcionario(int matricula, double salario, std::string nome){
    setMatricula(matricula);
    setSalario(salario);
    setNome(nome);

}
void Funcionario::setMatricula(int matricula){this->matricula=matricula;}
void Funcionario::setSalario(double salario){this->salario=salario;}
void Funcionario::setNome(std::string nome){this->nome=nome;}
std::string Funcionario::getNome(){return this->nome;}
double Funcionario::getSalario(){return this->salario;}
int Funcionario::getMatricula(){return this->matricula;}