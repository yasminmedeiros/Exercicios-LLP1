#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>


class Empregado
{
    public:
        Empregado();
        Empregado(double salario, std::string nome, std::string sobrenome);

        void setSalario(double salario);
        void setNome(std::string nome);
        void setSobrenome (std::string sobrenome);

        double getSalario();
        std::string getNome();
        std::string getSobrenome();


        virtual ~Empregado();

    private:
        std::string nome, sobrenome;
        double salario;
};

#endif // EMPREGADO_H
