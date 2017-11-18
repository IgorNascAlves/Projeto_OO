#include "facu.h"
Facu::Facu(){

}
void Facu::CriaProf(std::string Nome,int Aulas){
    p.push_back(Prof(Nome,Aulas));
}

std::string Facu::getNomeProf(int ind){
    if(ind > -1)
        return p[ind].getNome();
    return "VAGA";
}
int Facu::getIndProf(std::string nome){
    for(unsigned int i=0;i<p.size();i++)
        if(nome == p[i].getNome())
            return i;
    std::cout<<"ERROU !!!"<<std::endl;
    return -1;
}

bool Facu::SemanaPronta(){
    for(unsigned int i=0;i<p.size();i++)
        if(p[i].getAulas()>0)
            return 0;
    return 1;
}

int Facu::MaiorPrioridade(){
    int ind = 0;
    for(unsigned int i=1;i<p.size();i++){
        double t1=0,t2=0;
        t1 = p[ind].Prioridade();
        t2 = p[i].Prioridade();
        if(t1<t2)
            ind = i;
    }
    return ind;
}

void Facu::Preenche(int Prof){
    while(p[Prof].getAulas()>0){
        int ind=PrimeiroUm(Prof);
        for(int i=ind+1;i<12;i++)
            if(p[Prof].getDia(i)==1)
                if(SomaD(ind)>SomaD(i))
                    ind = i;
        setDia(ind,Prof);
        ApagaDiaProfs(ind,Prof);
    }
}
int Facu::PrimeiroUm(int Prof){
    for(int i=0;i<12;i++)
        if(p[Prof].getDia(i)==1)
            return i;
    std::cout<<"Erro no primeiro_Um do prof: "<<getNomeProf(Prof)<<std::endl;
    return -1;
}
int Facu::SomaD(int ind){
    int Soma=0;
    for(unsigned int i=0;i<p.size();i++)
        Soma +=p[i].getDia(ind);
    return Soma;
}

void Facu::ApagaDiaProfs(int ind,int Prof){
    p[Prof].apagaDia(ind);
    for(unsigned int i=0;i<p.size();i++)
        p[i].setDiaF(ind);
}

void Facu::setDia(int ind,int Prof){
    s.setDia(ind,Prof+1);
}
int Facu::getDia(int ind){
    return s.getDia(ind) - 1;
}
void Facu::showSemana(){
    std::cout<<"Facu"<<std::endl;
    s.ShowSemana();
}

void Facu::setDiaProfV(int i,int ind){
    p[i].setDiaV(ind);
}
void Facu::setDiaProfF(int i,int ind){
    p[i].setDiaF(ind);
}

void Facu::showSemanaProf(int ind){
    p[ind].showSemana();
}
int Facu::getQuantProfs(){
    return p.size();
}
int Facu::getDiaProf(int ind, int i){
    return p[ind].getDia(i);
}
int Facu::getQuantAula(int ind){
    return p[ind].getAulas();
}
bool Facu::checaNome(std::string nome){
    for(unsigned int i=0;i<p.size();i++)
        if(p[i].getNome() == nome)
            return 1;
    return 0;
 }
void Facu::backup(){
    p2 = p;
}

void Facu::recovery(){
    p = p2;
}
void Facu::setAulasProf(int ind,int Aulas){
    p[ind].setAulas(Aulas);
}
void Facu::apagaProf(int ind){
    p.erase(p.begin()+ind);
}
