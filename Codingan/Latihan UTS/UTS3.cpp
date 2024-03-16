#include <iostream>
using namespace std;

int main()
{
	int baris; /* n */
	cout << "masukan baris n : ";
	cin >> baris;

for (int k = 1; k <= baris; k++){
    for (int l= baris+1; l > k; l--){
            cout << "0";
        }
    for (int m = 1; m <= k; m++){
			cout << "1";
        }
        cout << endl;
    }
    
}