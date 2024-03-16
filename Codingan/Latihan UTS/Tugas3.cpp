#include <iostream>
#include <string>

using namespace std;

int main (){
    string kalimat ;
    int panjang;
    cout << "Masukan kalimat = " << kalimat;
    if (getline(cin,kalimat)) {
        panjang = kalimat.length();
        if ((panjang % 2) == 1) {
            cout << kalimat.substr(panjang / 2, 8);
        } else {
            cout << kalimat.substr((panjang / 2) - 4, 8);
        }
    }
}

    

