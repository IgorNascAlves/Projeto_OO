/*
De: Igor do Nascimento Alves
Data: 21/Outubro/2017
Objetivo: Interface da classe Professor
*/
#ifndef PROF_H
#define PROF_H
#include <vector>
#include<cstring>
#include"semana.h"
class Prof{
	public:
		Prof(string, int);//cria prof (nome, quantidade_de_aulas)
		void setDia(int,int);// set dia (dia,valor)
		int getDia(int);// retorna o valor do dia (dia)
		void showSemana();//mostra a semana do prof
		void setProf(string,int);//set Prof(nome,quantidade_de_aulas)
		string getProf();//retorna o nome do Prof
		void setQuantAulas(int);//set quant_aulas(quantidade_de_aulas)
		int getQuantAulas();//get quant_aulas
    	int getDiasDisp();//soma e retorna os dias de valor 1 da semana
    	void limparSemana();// set semana em 0
    	void menosQuantAulas();// -1 no quant_aulas e se ZERO zeraSemana
		//funcoes para gerenciar vetor de ind de dias disp
		
		vector<int> indDisp; //ind do dia disponivel
	private: 
		string nome;
		int quantAulas;
		Semana s;
};
#endif //PROF_H
