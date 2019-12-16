#pragma once
#include "FiguraGeometrica.h"
#include <string>
#include <iostream>

class Circulo : public FiguraGeometrica
{
private:
public:
    Circulo(std::string nome,double tamanho);
    double calculaArea();
};

