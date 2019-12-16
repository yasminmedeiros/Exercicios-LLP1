#pragma once
#include "FiguraGeometrica.h"
#include <string>
#include <iostream>

class Triangulo : public FiguraGeometrica
{
private:
public:
    Triangulo(std::string nome,double tamanho);
    double calculaArea();
};

