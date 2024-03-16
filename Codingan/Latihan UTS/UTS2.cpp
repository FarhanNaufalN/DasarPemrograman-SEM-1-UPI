#include <iostream>
using namespace std;

int main(){

    int m;
    int n;
    int kolom , baris;
    int hasil;

    
    
   
    cout << "Isi Baris : ";
    cin >> baris;

    cout << "Isi Kolom : ";
    cin >> kolom;

    
    
    for (m = 1; m <= 1; m++)
    { for (n = 1; n <= 1; n++)
    {        
     hasil = baris*kolom;
    if (hasil > 25)
    {
        cout << "Dimensi Lebih dari 25";
    }else
    {
     cout << "00 01 02 03 04" << endl;
     cout << "05 06 07 08 09" << endl;  
     cout << "10 11 12 13 14" << endl; 
     cout << "15 16 17 18 19" << endl; 
     cout << "20 21 22 23 24" << endl; 
    }
    
    
    }
     cout << endl;
    }
  
}