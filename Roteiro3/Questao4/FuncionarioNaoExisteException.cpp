#include "FuncionarioNaoExisteException.h"
FuncionarioNaoExisteException::FuncionarioNaoExisteException ()throw(){
    this->mensagem="Não existe esse funcionário cadastrado.";
}
    
std::string FuncionarioNaoExisteException::getMensagem(){return this->mensagem;}