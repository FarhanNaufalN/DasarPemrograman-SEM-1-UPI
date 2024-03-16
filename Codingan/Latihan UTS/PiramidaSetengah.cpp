#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Panjang Piramida : ";
    cin >> n;

    
    cout << "Piramida Setengah"<< endl;

    
    for (int i = 1; i <=n; i++){ 
        for (int j = 1; j < i; j++)
        {

            cout <<" "; 
        }
        for (int k = n; k >= i; k--)
        {
            cout << "*" ;
    
        }
        cout << endl;
        
    }
}
 