#include<iostream>

using namespace std;

int main() {

    int nilai;
    
    

    cout << "Masukan Nilai = ";
    cin >> nilai;

   if (nilai > 80)
   {
       cout << "Nilai Anda = "<< " A " << "(Sangat Baik)";
   } else if ((nilai>70) && (nilai<=80)) {
       cout << "Nilai Anda = "<< " B " << "(Baik)";
   } else if ((nilai>50) && (nilai<=70)) {
       cout << "Nilai Anda = "<< " C " << "(Sedang)";
   } else if ((nilai>40) && (nilai<=50)){
       cout << "Nilai Anda = "<< " D " << "(Buruk)";
   } else if (nilai <= 40) {
       cout << "Nilai Anda = "<< " E " << "(Sangat Buruk)";
   }
      


}