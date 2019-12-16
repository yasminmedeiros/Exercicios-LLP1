#include <iostream>
#include <Data.h>

using namespace std;

int main()
{
    Data data;
    int dia, ano, mes;

    cout<<"Digite uma data:"<<endl;
    cout<<"\t dia: ";
    cin>> dia;
    cout<<"\t mes: ";
    cin>>mes;
    cout<<"\t ano: ";
    cin>>ano;

    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);

    cout<<data.getDia()<<endl;
    cout<<data.getMes()<<endl;
    cout<<data.getAno()<<endl;

    data.avancarDia();

    cout<<data.getDia()<<endl;
    cout<<data.getMes()<<endl;
    cout<<data.getAno()<<endl;


    return 0;
}
