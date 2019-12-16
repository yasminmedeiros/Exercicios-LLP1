#pragma once
#include "FiguraGeometrica.h"
#include <string>
#include <iostream>

class Quadrado : public FiguraGeometrica
{
private:
public:
    Quadrado(std::string nome,double tamanho);
    double calculaArea();
};

