#include "Trabalhador.h"
#include <iostream>
#include <string>

class TrabalhadorPorHora : public Trabalhador
{
private:
   int valorDaHora;
public:
    TrabalhadorPorHora(std::string nome,double salario, int valorDaHora);
    double calculoDoSalarioSemanal();
    double calculoDoSalarioMensal();
    double horasTrabalhadas();
};
