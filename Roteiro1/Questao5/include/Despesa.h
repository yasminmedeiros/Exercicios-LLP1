#ifndef DESPESA_H
#define DESPESA_H


class Despesa
{
    public:
        Despesa();
        Despesa(double valor);
        Despesa(int tipoDeGasto, double valor);

        double getValor();
        int getTipoDeGasto();

        void setValor(double valor);
        void setTipoDeGasto(int tipoDeGasto);

        virtual ~Despesa();

    private:
        int tipoDeGasto;
        double valor;
};

#endif // DESPESA_H
