/*
De: Igor do Nascimento Alves
Data: 21/Outubro/2017
Objetivo: Implementacao da Classe Facu
*/
#include "facu.h"
Facu::Facu(){
	std::cout<<"Objeto Faculdade criada"<<endl;
}
void Facu::setDia(int i,int valor){
	s.setDia(i,valor);
}
int Facu::getDia(int i){
	s.getDia(i);
}
void Facu::showSemana(){
	s.showSemana();
}
bool Facu::semanaPronta(){
	for(int i=0;i<p.size();i++)
		if(p[i].getQuantAulas()!=0)
			return 0;
	return 1;
}
void Facu::criaProf(string nome,int QuantAulas){
	p.push_back(Prof(nome,QuantAulas));
}
void Facu::setDiaProfF(string nome,int i){

			p[achaProf(nome)].setDia(i,0);
			
}
void Facu::setDiaProfV(string nome,int i){

			int ind = achaProf(nome);
			p[ind].setDia(i,1);
			p[ind].setIndDisp(i);
}
int Facu::diaMenosDisp(){
	int indDia = 0;
	int diaMenosDisp=0;
	for(int ind=0;ind<p.size();ind++)
			diaMenosDisp += p[ind].getDia(0);
	for(int i=1;i<12;i++){
		int somaDia = 0;
		for(int ind=0;ind<p.size();ind++)
			somaDia += p[ind].getDia(i);
		if(somaDia < diaMenosDisp){
			diaMenosDisp = somaDia;
			indDia = i;
		}
	}
	return indDia;
}
void Facu::limpaDiasProf(int i){
	for(int ind=0;ind<p.size();ind++)
		p[ind].setDia(i,0);
}
void Facu::showSemanaProf(string nome){
			p[achaProf(nome)].showSemana();
}
int Facu::achaProf(string nome){
		for(int ind=0;ind<p.size();ind++)
			if(p[ind].getProf() == nome)
				return ind;
}
void Facu::menosDiaProf(int ind){
	p[ind].menosQuantAulas();
}
int Facu::getQuantProf(){
	return p.size();
}
int Facu::getIndDisp(int i){
	return p[i].getIndDisp();
}
