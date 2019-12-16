#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data();
        Data(int dia, int mes, int ano);

        void avancarDia();

        void setDia(int dia);
        void setMes(int mes);
        void setAno (int ano);

        int getDia ();
        int getAno ();
        int getMes ();

        virtual ~Data();

    private:
        int dia,mes,ano;
};

#endif // DATA_H
