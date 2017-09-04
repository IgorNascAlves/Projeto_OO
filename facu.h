#include "semana.h"
#include "prof.h"
class facu{
    soma_dias(int num, prof p(num)){
        int total = 0;
        for(int i=0;i<num;i++)
            for(int j=0;j<12;j++)
                total += p(i).pega_dia(j);
        return total;
    }
    int dia_menos_disp(int num, prof p(num)){
        menor = 0;
        int j=0;
        for(int i=11;i>0;i--)
            if(somaDias(j,p)>somaDias(i,p))
                j = i;
        
        return j;
    }
    facu(int num, prof p(num)){
        while(soma_dias() != 0)
            int a;
            int ind = dia_menos_disp();
            if(somaDias(ind,p) == 0)
                for(int i=0;i<num;i++)
                    if(prof(i).pega_dia(ind) == 1)
                        
                        
    }
	protected:
		semana s;
};
