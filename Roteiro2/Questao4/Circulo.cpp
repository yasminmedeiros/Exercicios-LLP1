#include "Circulo.h"
Circulo::Circulo(std::string nome,double tamanho) : FiguraGeometrica(nome,tamanho){
}
double Circulo::calculaArea(){
    return FiguraGeometrica::getTamanho()*FiguraGeometrica::getTamanho()*3.14;
}