#pragma once
#include <iostream>
#include <string>

class Trabalhador
{
private:
    std::string nome;
    double salario;
public:
    Trabalhador(std::string nome, double salario);
    double calculoDoSalarioSemanal();
    double calculoDoSalarioMensal();
    std::string getNome();
    double getSalario();
    void setNome (std::string nome);
    void setSalario(double salario);
    
};


