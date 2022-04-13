#include <iostream>
using namespace std;

class Operator{
  public:
       long program(){
        cout<<"uang saku andi perbulan = 100000"<<endl;
        for (int i = 1; i <= 12; i++){
			    cout<<"pengeluaran bulan "<<i<<"=";cin>>pengeluaran[i];
          sisa[i]=100000-pengeluaran[i];
			    cout<<"sisa uang saku bulan "<<i<<"= "<<sisa[i]<<endl;
          }
         return (sisa[i]);
        };

        long proses2(){
          for (int i=1; i<=12; i++){
            total=totalbulan+=pengeluaran[i];
          }
          return (total);
        };

        long proses(){
            for (int i=1; i<=12; i++){
            tabungan=totalsisa+=sisa[i];
              }
           return (tabungan);
         };

  private:
      int total=0;
      int tabungan=0;
      int totalbulan=0; 
      int totalsisa=0;
		  int pengeluaran[100];
		  int sisa[100];
      int i;
};

int main() {
  Operator run;
  cout << run.program() << endl << endl;\
  cout<<"Total Pengeluaran = ";
  cout << run.proses2() << endl<<endl;
   cout<<"Total Tabungan = ";
  cout << run.proses();
  cout << endl;
  return 0;
}
