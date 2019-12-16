#include "Triangulo.h"
Triangulo::Triangulo(std::string nome,double tamanho) : FiguraGeometrica(nome,tamanho){
}
double Triangulo::calculaArea(){
    return FiguraGeometrica::getTamanho()*FiguraGeometrica::getTamanho()*FiguraGeometrica::getTamanho()*0.43;
}