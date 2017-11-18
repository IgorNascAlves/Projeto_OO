#ifndef PROF_H
#define PROF_H
#include<string>
#include "semana.h"
class Prof{
    public:
        Prof(std::string,int);
        void setDiaV(int);
        int getDia(int);
        std::string getNome();
        int getAulas();
        void setDiaF(int);
        void apagaDia(int);
        double Prioridade();
        int Disp();
        void showSemana();
        void setAulas(int);
    private:
        std::string Nome;
        int Aulas;
        Semana s;
};
#endif //PROF_H
