#include "TrabalhadorAssalariado.h"
#include "Trabalhador.h"
TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario) :
 Trabalhador::Trabalhador(nome,salario) {}
double TrabalhadorAssalariado::calculoDoSalarioSemanal(){return Trabalhador::getSalario()/4;}
double TrabalhadorAssalariado::calculoDoSalarioMensal(){return Trabalhador::getSalario();}
