#include "ControleDeGastos.h"
#include "Despesa.h"

ControleDeGastos::ControleDeGastos()
{
    for (int i=0;i<30;i++){
        despesa[i].setValor(0);
        despesa[i].setTipoDeGasto(0);
    }
}
void ControleDeGastos::setDespesa (double d, int pos, int tipo){
    this->despesa[pos].setValor(d);
    this->despesa[pos].setTipoDeGasto(tipo);
}
double ControleDeGastos::calculaTotalDeDespesas(){
    double total=0;
    for(int i=0;i<30;i++){
        total=total + (despesa[i].getValor());
    }
    return total;
}
int ControleDeGastos::existeDespesaDoTipo(int tipo){
    for(int i=0;i<30;i++){
        if(despesa[i].getTipoDeGasto()== tipo){
            return 1;
        }
    }
    return 0;
}

ControleDeGastos::~ControleDeGastos()
{
    //dtor
}
