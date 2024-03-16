#include<iostream>
using namespace std;

int main()
{
    int data, jumlahdata;
    float angka,ratarata,min,max,hasil;

    cout << "masukan jumlah angka :  "; 
    cin >> jumlahdata;

    for (data=1; data<=jumlahdata; data++)
    {
        cout << "masukan data ke - "<< data << " : ";
        cin >> angka;
    if (data==1) {
        min = angka;
        max = angka;
    } else if (angka>max){
        max=angka;
     } else if (angka<min){
        min=angka;
     }
     hasil += angka;
     ratarata= hasil/data;
    }

    cout << "Nilai Maksimum" << max << endl;
    cout << "Nilai Minimum" << min << endl;
    cout << "Nilai Rata rata" << ratarata << endl;

    
    
    


}
