#ifndef SEMANA_H
#define SEMANA_H
#include <iostream>
class Semana{
    public:
        Semana();
        int getDia(int);
        void setDia(int,int);
        void ShowSemana();
    private:
        int dia[12];
};
#endif //SEMANA_H
