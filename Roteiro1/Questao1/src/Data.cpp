#include "Data.h"

Data::Data()
{
    setDia(28);
    setMes(11);
    setAno(2019);
}
Data::Data(int dia, int mes, int ano)
{   setDia(dia);
    setMes(mes);
    setAno(ano);
}

int Data::getDia (){return this->dia;}
int Data::getMes (){return this->mes;}
int Data::getAno (){return this->ano;}

void Data::setDia (int dia){this->dia=(dia>0 && dia<31) ? dia : 28;}
void Data::setMes (int mes){this->mes=(mes<13 && mes>0) ? mes : 11;}
void Data::setAno (int ano){this->ano=(ano>0) ? ano : 2019;}

void Data::avancarDia()
{
    int d,m,a;

    d=getDia();
    m=getMes();
    a=getAno();

    if(d==30 && m==12){a++;}


    if (m==12 && d==30){m=1;}
    else if (d==30 && m!=12){m++;}

    if(d==30){d=1;}
    else{d++;}



    setDia(d);
    setMes(m);
    setAno(a);
}

Data::~Data()
{
    //dtor
}
