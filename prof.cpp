#include "prof.h"
Prof::Prof(std::string Nome,int Aulas){
    this->Nome = Nome;
    this->Aulas = Aulas;
}

void Prof::setDiaV(int ind){
    s.setDia(ind,1);
}

int Prof::getAulas(){
    return Aulas;
}

std::string Prof::getNome(){
    return Nome;
}

int Prof::getDia(int ind){
    return s.getDia(ind);
}

void Prof::setDiaF(int ind){
     s.setDia(ind,0);
}

void Prof::apagaDia(int ind){
    setDiaF(ind);
    if(Aulas>0)
        Aulas = Aulas - 1;
}

double Prof::Prioridade(){

    if(Disp()>0){
        double teste = (Aulas*1.0/Disp()*1.0)*100.00;
        return teste;
    }
    return 0;
}
int Prof::Disp(){
    int soma=0;
    for(int i=0;i<12;i++)
        soma = soma + getDia(i);
    return soma;
}
void Prof::showSemana(){
    std::cout<<Nome<<std::endl;
    s.ShowSemana();
}
void Prof::setAulas(int Aulas){
    this->Aulas = Aulas;
}
