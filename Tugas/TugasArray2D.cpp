#include <iostream>
using namespace std;

int main (){

    int baris;
    int kolom;

    cout << "Banyak baris = " << " ";
    cin >> baris;
    cout << "Banyak kolom = ";
    cin >> kolom;

    int array [baris][kolom];
    int gabungan_array;

        for ( int a = 0; a < baris; a++){
            for (int b = 0; b < kolom; b++)
            {
                cout << "array " << "[" << a << "]" << "[" << b << "]" << "=";
                cin >> gabungan_array;
            }
        }
        
         for (int a=0;a<=2;a++){ 
            for (int b=0;b<=3;b++)
            { 
                cout << array[a][b]<<" ";
            }    
        } cout << endl;
    
}