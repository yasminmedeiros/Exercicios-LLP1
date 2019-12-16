#include "Trabalhador.h"
#include<string>
Trabalhador::Trabalhador(std::string nome, double salario){
    this->nome=nome;
    this->salario=salario;
}
double Trabalhador::calculoDoSalarioSemanal(){return 0.0;}
double Trabalhador::calculoDoSalarioMensal (){return 0.0;}
std::string Trabalhador::getNome(){return this->nome;}
double Trabalhador::getSalario(){return this->salario;}
void Trabalhador::setNome (std::string nome){this->nome=nome;}
void Trabalhador::setSalario(double salario){this->salario=salario;}