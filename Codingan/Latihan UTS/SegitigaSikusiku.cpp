#include<iostream>
using namespace std;

int main(){

    int n;
    string tekkom;
    cout << "Panjang Pola : ";
    cin >> n;

    cout << "Pola 1\n";

    for (int i = 1; i <=n; i++){ 
        for (int j = 1; j <= i; j++)
    { 
        cout << "*" ;
    }
    cout << endl; 
        
    }
    
    cout << tekkom;
    cin >> tekkom;

    for (int i = 1; i <=n; i++){ 
        for (int j = n; j >= i; j--)
    { 
        cout << "*" ;
    }
    cout << endl; 
        
    }
}