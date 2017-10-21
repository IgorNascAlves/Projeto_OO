/*
De: Igor do Nascimento Alves
Data: 12/Outubro/2017
Objetivo: Interface da Classe Facu
*/
#ifndef FACU_H
#define FACU_H
#include <iostream>
#include <vector>
#include <cstring>
#include "prof.h"
#include "semana.h"
using namespace std;
class Facu{
	public:
		Facu();
		void setDia(int,int);
		int getDia(int);
		void showSemana();
		bool semanaPronta();
		void criaProf(string,int);
		void setDiaProfV(string,int);
		void setDiaProfF(string,int);
		int diaMenosDisp();
		void limpaDiasProf(int);
		void showSemanaProf(string);
		int achaProf(string);
		void menosDiaProf(string);
		int getQuantProf();
	private:
		Semana s;
		vector<Prof> p; 
};
#endif //def FACU_H
