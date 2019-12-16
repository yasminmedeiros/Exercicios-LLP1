#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos
{
    public:
        ControleDeGastos();

        void setDespesa (double d, int pos, int tipo);
        double calculaTotalDeDespesas();
        int existeDespesaDoTipo(int tipo);
        virtual ~ControleDeGastos();

    private:
        Despesa despesa[30];

};

#endif // CONTROLEDEGASTOS_H
