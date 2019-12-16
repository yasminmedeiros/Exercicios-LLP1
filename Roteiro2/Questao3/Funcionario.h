#pragma once
#include <iostream>
#include <string>

class Funcionario
{
private:
    int matricula;
    double salario;
    std::string nome;
public:
    Funcionario();
    Funcionario(int matricula, double salario, std::string nome);
    void setMatricula(int matricula);
    void setSalario(double salario);
    void setNome(std::string nome);
    std::string getNome();
    double getSalario();
    int getMatricula();
    
};