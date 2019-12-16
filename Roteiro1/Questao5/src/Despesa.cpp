#include "Despesa.h"

Despesa::Despesa()
{
    setValor(0.0);
    setTipoDeGasto(0);
}
Despesa::Despesa( int tipoDeGasto, double valor)
{
    setValor(valor);
    setTipoDeGasto(tipoDeGasto);

}
Despesa::Despesa(double valor)
{
    setValor(valor);
    setTipoDeGasto(0);

}

double Despesa::getValor(){return this->valor;}
int Despesa::getTipoDeGasto(){return this->tipoDeGasto;}

void Despesa::setValor(double valor){this->valor=valor;}
void Despesa::setTipoDeGasto(int tipoDeGasto){this->tipoDeGasto=tipoDeGasto;}

Despesa::~Despesa()
{
    //dtor
}
