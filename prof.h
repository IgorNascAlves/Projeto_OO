#include <string>
using namespace std;
class prof{
		public:
			void set_prof(string nome, int qt_aulas){
				this->nome = nome;
				this->qt_aulas = qt_aulas;
			}
			int get_s_livre(){
				int total = 0;
				for(int i=0;i<12;i++)
					total += this->s.get_dia(i);
				return total;
			}
			int pega_dia(int ind){
                s.get_dia(ind);
            }
            void set_semana(int i, int n){
                s.set_semana(i,n);
            }
        	void show_semana(){
                s.show_semana();
            }
		protected:
            semana s;
			string nome;
			int qt_aulas;
};
