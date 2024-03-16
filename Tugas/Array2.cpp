#include <iostream>

using namespace std;

int main()
{
    int jumlah;
    cout << "Masukkan jumlah data : ";
    cin >> jumlah;

    int nilai[jumlah];
    float total = 0;

   
    for (int a = 0; a < jumlah; a++)
    {
        cout << "Masukkan nilai ke-" << a+1 << ": ";
        cin >> nilai[a];
        total = total + nilai[a];
    }
  
    cout << "Rata-rata nilai : " << total/jumlah;
  
}