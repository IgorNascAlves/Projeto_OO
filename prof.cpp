/*
De: Igor do Nascimento Alves
Data: 21/Outubro/2017
Objetivo: Implementacao da classe Professor
*/
#include "prof.h"
Prof::Prof(string nome, int quantAulas){
	this->nome = nome;
	this->quantAulas = quantAulas;
	std::cout<<"Professor "<<nome<<" criado"<<endl;
}
void Prof::setDia(int i,int valor){
	s.setDia(i,valor);
}
int Prof::getDia(int i){
		return s.getDia(i);
}
void Prof::showSemana(){
	s.showSemana();
}
void Prof::setProf(string nome,int quantAulas){
	this->nome = nome;
	this->quantAulas  = quantAulas;
}
string Prof::getProf(){
	return nome;
}
void Prof::setQuantAulas(int quantAulas){
	this->quantAulas = quantAulas;
}
int Prof::getQuantAulas(){
	return quantAulas;
}
int Prof::getDiasDisp(){
	int DiasDisp = 0;
	for(int i=0;i<12;i++)
		if(s.getDia(i))
			DiasDisp++;
	return DiasDisp;
}
void Prof::limparSemana(){
	for(int i=0;i<12;i++)
		s.setDia(i,0);
}
void Prof::menosQuantAulas(){
	if(quantAulas > 1)
		quantAulas -= 1;
	else{
		quantAulas = 0;
		limparSemana();
}
void Prof::setIndDisp(int i){
	indDisp.push_back(int(i));
}
int Prof::getIndDisp(){
	return indDisp[0];
}
