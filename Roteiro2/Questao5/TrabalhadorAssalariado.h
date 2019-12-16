#include "Trabalhador.h"
#include <iostream>
#include <string>

class TrabalhadorAssalariado : public Trabalhador
{
public:
    TrabalhadorAssalariado(std::string nome,double salario);
    double calculoDoSalarioSemanal();
    double calculoDoSalarioMensal();
};
