#include <cstdlib>
using namespace std;
class semana{
	public:
		semana(){
			for(int i=0;i<12;i++)
			    dia[i] = 0;
		}
		void set_semana(int dia, int disp){
			this->dia[dia] = disp;
		}
		int get_dia(int ind){
			return dia[ind];
		}
		void show_semana(){
            cout<<"| seg0| seg1| ter0| ter1| qua0| qua1| qui0| qui1| sex0| sex1| sab0| sab1\n";
			for(int i=0;i<12;i++)
				cout<<"|   "<<get_dia(i)<<" ";
			cout<<endl;
		}
	protected:
		int dia[12];
};
