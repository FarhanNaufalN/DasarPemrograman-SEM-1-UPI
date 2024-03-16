#include <iostream>
#include <string>

using namespace std;

int main (){
    int jumlah;
    string kalimat = "ABCDEFGHIJK EFAN EFUL";
    cout << kalimat << endl;
    
    for (int i = 4; i < 5; i++)
    {
        cout << i << endl;
    }
    
    for (int i = 11; i < 12; i++)
    {
        cout << i << endl;
    }
    
    for (int i = 16; i < 17; i++)
    {
        cout << i << endl;
    }
    for (int i = 0; kalimat[i] != 0; i++)
        if (kalimat[i] == ' ')
        {
            jumlah++;
        }
        
    cout << "jumlah kata = " << jumlah + 1;

}