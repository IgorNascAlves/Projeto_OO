#include "semana.h"
Semana::Semana(){
    for(int i=0;i<12;i++)
        dia[i] = 0;
}

int Semana::getDia(int ind){
    return dia[ind];
}

void Semana::setDia(int ind, int valor){
    dia[ind] = valor;
}

void Semana::ShowSemana(){
            std::cout<<"  | SEG || TER || QUA || QUI || SEX || SAB ||"<<std::endl;
            std::cout<<"1º|  ";
            for(int i=0;i<12;i = i+2)
                    std::cout<<this->dia[i]<<"  ||  ";
            std::cout<<std::endl<<"2º|  ";
            for(int i=1;i<12;i = i + 2)
                    std::cout<<this->dia[i]<<"  ||  ";
            std::cout<<std::endl;
}
