/*
De: Igor do Nascimento Alves
Data: 28/Outubro/2017
Objetivo: Implementacao da classe Semana
*/
#include "semana.h"
Semana::Semana(){
	for(int i=0;i<12;i++)
		this->dia[i] = 0;
	std::cout<<"Objeto Semana criado"<<std::endl;		
}
void Semana::setDia(int i, int valor){
	this->dia[i] = valor;
	//std::cout<<"O DIA "<<i<<" VALE "<<this->dia[i]<<" AGORA"<<endl;
}
int Semana::getDia(int i){
	return this->dia[i];
}
void Semana::showSemana(){
		std::cout<<"  | SEG || TER || QUA || QUI || SEX || SAB ||"<<endl;
		std::cout<<"1º|  ";
		for(int i=0;i<12;i = i+2)
				std::cout<<this->dia[i]<<"  ||  ";
		std::cout<<endl<<"2º|  ";
		for(int i=1;i<12;i = i + 2)
				std::cout<<this->dia[i]<<"  ||  ";
		std::cout<<endl;
}
