#ifndef FACU_H
#define FACU_H
#include <vector>
#include <string>
#include"semana.h"
#include"prof.h"
class Facu{
    public:
        Facu();
        void CriaProf(std::string,int);
        std::string getNomeProf(int);
        int getIndProf(std::string);
        int getDia(int);
        void showSemana();
        int getQuantProfs();
        bool checaNome(std::string);
        //Algoritimo
        bool SemanaPronta();
        int MaiorPrioridade();
        void Preenche(int);
        int SomaD(int);
        void ApagaDiaProfs(int,int);
        void setDia(int,int);
        int PrimeiroUm(int);
        //Prof
        void setDiaProfV(int,int);
        void setDiaProfF(int,int);
        void showSemanaProf(int);
        int getDiaProf(int,int);
        int getQuantAula(int);
        void setAulasProf(int,int);
        void backup();
        void recovery();
        void apagaProf(int);

    private:
        Semana s;
        std::vector <Prof> p;
        std::vector <Prof> p2;
};
#endif //FACU_H
