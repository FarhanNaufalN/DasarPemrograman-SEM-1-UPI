#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Masukan baris (m) : ";
    cin >> m;
    cout << "Masukan kolom (n) : ";
    cin >> n;
    int x = 0;
	if (m*n <= 25) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (j <= n) {
					if (x <= 9) {
						cout << "0" << x << " ";
					}
					else {
						cout << x << " ";
					}
					x++;
				}
			}
			cout << endl;
		}
	}
	else {
		cout << "Dimensi Lebih Dari 25" << endl;
	}

    cin.get();
	return 0;
	
}