/*
De: Igor do Nascimento Alves
Data: 21/Outubro/2017
Objetivo: Segunda versão da implementacao do Algoritimo do projeto de Orientacao Objeto
*/
#include <iostream>
#include "semana.h"
#include "prof.h"
#include "facu.h"
void CasoBase(Facu f){
	for(int i=0;i<f.getQuantProf();i++)
		if(f.getDiasDisp(i) == 1){
			f.setDia(f.getIndDisp(i),i);
			f.limpaDiasProf(f.getIndDisp(i));
			f.menosDiaProf(i);
		}
}
int main(){
	Facu f;
	f.criaProf("PS",1);
	f.setDiaProfV("PS",10);
	f.showSemanaProf("PS");
	f.criaProf("Gui",1);
	f.setDiaProfV("Gui",10);
	f.showSemanaProf("Gui");
	f.showSemana();
	do{
		CasoBase(f);
	}while(!f.semanaPronta());
	f.showSemanaProf("PS");
	f.showSemanaProf("Gui");
	f.showSemana();
	return 0;	
	
	/* VERSAO ANTIGA
	Facu f;
	int ind;
	while(!f.semanaPronta()){
		ind = f.diaMenosDisp();
		
	}
	
	std::cout<<"Hello World"<<std::endl;
	return 0;
	*/
	/* TESTE CLASSE SEMANA
	Semana s;
	for(int i=0;i<12;i = i + 2)
		s.setDia(i,1);
	int a=0;
	s.setDia(a,0);
	std::cout<<"O DIA "<<a<<" TEM VALOR "<<s.getDia(a)<<endl;
	s.showSemana();
	*/
	
	/* TESTE CLASSE PROF
	Prof p("Paulo",5);
	for(int i=0;i<12;i = i + 2)
		p.setDia(i,1);
	int a=2;
	p.setDia(a,0);
	std::cout<<"O DIA "<<a<<" TEM VALOR "<<p.getDia(a)<<endl;
	p.showSemana();
	
	p.setProf("PS",5);
    p.setQuantAulas(4);
	std::cout<<"O numero de aulas que o "<<p.getProf()<<" tem que dar eh "<<p.getQuantAulas()<<" e tem "<<p.getDiasDisp()<<" dias disponiveis"<<endl;
   	p.limparSemana();
   	
 	p.showSemana();
	*/
	
	/* TESTE CLASSE FACULDADE
	Facu f;
	for(int i=0;i<12;i = i + 2)
		f.setDia(i,1);
	int a=0;
	f.setDia(a,0);
	std::cout<<"O DIA "<<a<<" TEM VALOR "<<f.getDia(a)<<endl;
	f.showSemana();    
   
	f.criaProf("PS",4);
	for(int i=0;i<12;i++)
		f.setDiaProf("PS",i,1);
	f.showSemanaProf("PS");
	f.limpaDiasProf(2);
	f.setDiaProf("PS",1,3);
	f.showSemanaProf("PS");
	std::cout<<"O dia menos disponivel eh "<<f.diaMenosDisp()<<endl;
	
    if(f.semanaPronta())
    	std::cout<<"Esta pronta a semana"<<endl;
    else
    	std::cout<<"Nao esta pronta a semana"<<endl; 
	*/
}
