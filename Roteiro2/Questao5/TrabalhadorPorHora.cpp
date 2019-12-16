#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"
TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, double salario, int valorDaHora) : Trabalhador::Trabalhador(nome,salario) {
    this->valorDaHora=valorDaHora;
}
double TrabalhadorPorHora::calculoDoSalarioSemanal(){return Trabalhador::getSalario();}
double TrabalhadorPorHora::calculoDoSalarioMensal(){return Trabalhador::getSalario()*4;}
double TrabalhadorPorHora::horasTrabalhadas(){return Trabalhador::getSalario()/this->valorDaHora;}

