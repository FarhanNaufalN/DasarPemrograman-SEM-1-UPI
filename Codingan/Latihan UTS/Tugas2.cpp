#include <iostream>
#include <string>

using namespace std;

int main (){
    string kalimat ;
    cout << "Masukan kalimat = ";
    getline(cin,kalimat);
    
    for ( int i = 0; i < 1; i++)
    {
        cout << kalimat[0] << endl;
    } 
    for ( int i = 0; i < 1; i++)
    {
        cout << kalimat[kalimat.length()- 1] << endl;
    } 
}
