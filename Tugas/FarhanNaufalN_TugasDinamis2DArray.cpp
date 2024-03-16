#include <iostream>

using namespace std;

int main (){

    int baris;
    int kolom;
    int array [100][100];
    int array_gabungan;
    
    cout << "Banyak baris = ";
    cin >> baris;
    cout << "Banyak kolom = ";
    cin >> kolom;

        for ( int a = 0; a < baris; a++){
            for (int b = 0; b < kolom; b++)
            {
                cout << "array " << "[" << a << "]" << "[" << b << "]" << "= ";
                cin >> array [a][b];
            }
        } cout << endl;

        for (int a = 0; a <baris; a++){ 
            cout << endl;
            for (int b = 0; b <kolom; b++)
            { 
                cout << array[a][b] <<" ";
            }    
        } cout << endl;
    
}
	

	

        