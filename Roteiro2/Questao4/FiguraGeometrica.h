#pragma once
#include <iostream>
#include <string>

class FiguraGeometrica
{
private:
    std::string nome;
    double tamanho;
public:
    FiguraGeometrica(std::string nome, double tamanho);
    double calculaArea();
    std::string getNome();
    double getTamanho();
    void setNome (std::string nome);
    void setTamanho(double tamanho);

};
