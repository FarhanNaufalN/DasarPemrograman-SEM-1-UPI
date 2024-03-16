#include <iostream>

using namespace std;


// code untuk 1B

int matriks(int c[2][2], int d[2][2], int e[2][2]){

	int counter = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{ 
			for (int k = 0; k < 2; ++k)
			{
				//kembalikan nilai yang tadi
				// counter = c[i][k] * d[k][j]. hasilnya bakal 2.3 seterusnya maka biar 2.3
				// 4.7 harus segera dihentikan perulangannya jadi 2.3 4.7 bisa dihasilkan menjadi 34
				counter = counter + c[i][k] * d[k][j];
			}
			// inialisasi ke array c / hasil
			e[i][j] = counter;
			// memakai ini untuk mereset agar tidak ditambahkan dengan nilai sebelumnya yaitu 34
			counter = 0;
		}
	}

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << e[i][j] << " ";
		}
		cout << endl;
	}

}


int	main(){
	int c[2][2] = {{2, 4},{6, 8}};
	int d[2][2] = {{3, 5},{7, 9}};
	int e[2][2];

	matriks(c, d, e);
}