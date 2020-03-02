#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

#define LimiteDePagamento 20000;

SistemaGerenciaFolha::SistemaGerenciaFolha(){
    this->id=0;
}
void SistemaGerenciaFolha::setFuncionarios(){
    //Todos os Funcionarios
    std::string nome;
    int matricula;
    //Horista
    double salarioPorHora;
    double horasTrabalhadas;
    //Comissionado
    double vendasSemanais;
    double percentualComissao;
    //Assalariado
    double salario;
    //1-Horista, 2-Comissionado, 3-Assalariado
    int tipo;

    std::cout<< "Cadastro de Funcionário"<<std::endl;
    std::cout<< "Nome: ";
    std::cin>>nome;
    std::cout<< "Matricula: ";
    std::cin>>matricula;
    std::cout<< "Tipo de Imovel:(1-Horista, 2-Comissionado, 3-Assalariado) ";
    std::cin>>tipo;
    if(tipo==1){
        std::cout<< "Salario por Hora: ";
        std::cin>>salarioPorHora;
        std::cout<< "Horas Trabalhadas: ";
        std::cin>>horasTrabalhadas;
        Horista *horista=new Horista();
        horista->setnome(nome);
        horista->setmatricula(matricula);
        horista->sethorasTrabalhadas(horasTrabalhadas);
        horista->setsalarioPorHora(horasTrabalhadas);
        funcionarios[id]=horista;
    }
    if(tipo==2){
        std::cout<< "Numero de Vendas Semanais: ";
        std::cin>>vendasSemanais;
        std::cout<< "Percentual de Comissão: ";
        std::cin>>percentualComissao;
        Comissionado *com=new Comissionado();
        com->setnome(nome);
        com->setmatricula(matricula);
        com->setvendasSemanais(vendasSemanais);
        com->setpercentualComissao(percentualComissao);
        funcionarios[id]=com;
    }
    if(tipo==3){
        std::cout<< "Salario: ";
        std::cin>>salario;
        Assalariado *ass=new Assalariado();
        ass->setnome(nome);
        ass->setmatricula(matricula);
        ass->setsalario(salario);
        funcionarios[id]=ass;
    }
    this->id=this->id +1;
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double total=0;
    int i;
    for(i=0; i<=this->id;i++){
        total+=funcionarios[i]->calcularSalario();
    }
    try{
        if(total<=LimiteDePagamento){
            return total
        }else
        {
            throw OrcamentoEstouradoException *e= new OrcamentoEstouradoException();
        }
        
    }catch(OrcamentoEstouradoException *e){
        std::cout<< e.what()<<std::endl;
    }
double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome){

}