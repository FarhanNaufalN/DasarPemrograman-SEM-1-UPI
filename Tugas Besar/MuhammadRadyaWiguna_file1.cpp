#include <iostream>

using namespace std;


// code untuk 1A
int matriks(int a, int b){
	int c = a * b;
	return c;
}

int	main(){
	int a = 23;
	int b[3] = {4, 6, 8};

	for (int i = 0; i < 3; ++i)
	{
		int c = matriks(a, b[i]);
		cout << c << " ";
	}
}