#include <cstdlib>
#include <iostream>
#include <string>
#include "facu.h"
#include "prof.h"

/*
codificado por Igor do Nascimento Alves e Augusto Turolla
algoritimo de Alexandre Kenjy de Siqueira Kumagai e Giovane Jose Fernandes 


*/
using namespace std;

int somaDias(int ind, prof p[3]){
		int total = 0;
		for(int i=0;i<3;i++)
			total += p[i].s.get_dia(ind);
		return total;
	}

int main(int argc, char *argv[])
{
	facu f1;
	
	prof p[3];
	
	p[0].set_prof("Paulo",5);
	p[1].set_prof("Pedro",1);
	p[2].set_prof("popo",2);
	
	for(int i=0;i<5;i++)
		p[0].s.set_semana(i,1);

	for(int i=4;i<12;i++)
		p[1].s.set_semana(i,1);
		
    for(int i=3;i<8;i++)
		p[2].s.set_semana(i,1);
	
	cout<<"dias livres: "<<p[0].get_s_livre()<<endl;
	p[0].s.show_semana();
	
	cout<<"dias livres: "<<p[1].get_s_livre()<<endl;
	p[1].s.show_semana();
	
	cout<<"dias livres: "<<p[1].get_s_livre()<<endl;
	p[2].s.show_semana();
	
	for(int i=0; i <12; i++)
		cout<<"soma dia("<<i<<") "<<somaDias(i,p)<<endl;
		
		

	
	system("pause");
	return 0;
}
