#include <iostream>
using namespace std;

int main (){

  int nilai[5];
    int jumlah = sizeof(nilai)/sizeof(*nilai);
    int pencarian, c;

    for (int a = 0; a < jumlah; a++)
    {
        cout << "Masukkan nilai ke-" << a+1 << ": ";
        cin >> nilai[a];
    }
  
    cout << "Nilai yang dimasukan : ";
    for (int b = 0; b < jumlah; b++)
    {
        cout << nilai[b] << ", ";
    }
    cout << endl;
   
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> pencarian;
 
    for(int c = 0; c < jumlah; c++)
    {
    	if(pencarian == nilai[c])
        {
    		cout << "Nilai " << pencarian <<  " berada pada index = " << c;
	        break;
        }
	}

}