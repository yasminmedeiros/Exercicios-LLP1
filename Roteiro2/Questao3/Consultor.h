#pragma once
#include "Funcionario.h"
#include <iostream>
#include <string>

class Consultor : public Funcionario
{
public:
    Consultor();
    Consultor(int matricula, double salario, std::string nome);
    double getSalario(float percentual);
    
};
