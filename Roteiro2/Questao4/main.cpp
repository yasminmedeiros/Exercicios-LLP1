#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(void){
    FiguraGeometrica *qualquer=new FiguraGeometrica("Qualquer", 1.00);
    Quadrado *quadrado= new Quadrado("quadrado", 2.25);
    Triangulo *triangulo=new Triangulo("triangulo", 3.00);
    Circulo *circulo= new Circulo("circulo", 2.00);

    double areaQualquer=qualquer->calculaArea();
    double areaQuadrado=quadrado->calculaArea();
    double areaTriangulo=triangulo->calculaArea();
    double areaCirculo=circulo->calculaArea();

    cout<<"Nome da Figura Geometrica: "<<qualquer->getNome();
    cout<<"\n\tTamanho: "<<qualquer->getTamanho();
    cout<<"\n\tArea: "<<areaQualquer<<endl;

    cout<<"Nome do Triangulo: "<<triangulo->getNome();
    cout<<"\n\tTamanho: "<<triangulo->getTamanho();
    cout<<"\n\tArea: "<<areaTriangulo<<endl;

    cout<<"Nome do Quadrado: "<<quadrado->getNome();
    cout<<"\n\tTamanho: "<<quadrado->getTamanho();
    cout<<"\n\tArea: "<<areaQuadrado<<endl;

    cout<<"Nome do Circulo: "<<circulo->getNome();
    cout<<"\n\tTamanho: "<<circulo->getTamanho();
    cout<<"\n\tArea: "<<areaCirculo<<endl;
    

    return 0;
}