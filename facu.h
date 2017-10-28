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
		void setDia(int,int);//Set dia da semana da Facu
		int getDia(int);//Pega valor de um dia da Facu
		void showSemana();//Mostra semana da Facu
		bool semanaPronta();//Verifica se todos os profs tem 0 aulas
		void criaProf(string,int);//Cria objeto prof (recebe nome e quantAulas)
		void setDiaProfV(string,int);//Set dia como disp(1)
		void setDiaProfF(string,int);//Set dia como ñ disp(0)
		int diaMenosDisp();//retorna dia menos disp
		void limpaDiasProf(int);//limpa vertical(dia dos profs)
		void showSemanaProf(string);//mostra semana de um prof
		int achaProf(string);//acha ind do professor
		void menosDiaProf(int);//diminui quantAulas ou limpa Semana
		int getQuantProf();// retorna quant profs
		int getIndDisp(int);
		int getDiasDisp(int);
	private:
		Semana s;
		vector<Prof> p; 
};
#endif //def FACU_H
