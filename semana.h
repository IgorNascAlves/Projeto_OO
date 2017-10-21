/*
De: Igor do Nascimento Alves
Data: 21/Outubro/2017
Objetivo: Interface da Classe Semana
*/
#ifndef SEMANA_H
#define SEMANA_H
#include <iostream>
using namespace std;
class Semana{
	public:
		Semana();//cria uma semana com dias em ZERO
		void setDia(int,int);//set da semana(dia, valor)
		int getDia(int);//retorna 1 se dia ocupado e zero se livre (dia)
		void showSemana();//mostra a semana da facu
	private:
		int dia[12];// dias da semana
};
#endif //def SEMANA_H
