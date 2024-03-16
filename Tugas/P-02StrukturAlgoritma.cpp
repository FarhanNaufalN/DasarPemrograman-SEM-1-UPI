#include <iostream>
using namespace std;

void BS01(int arr[], int n){
   
    int i,j,tempo;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                tempo  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempo;
            }
            
        }
        
    }
}

int main(int argc, char const *argv[])
{
    int i, j, arr[1000],n;
    cout << "Masukan panjang angka yang anda inginkan = " << endl;
    cin >> n;

    cout << "Masukan angkanya berapa saja = " << endl;
    cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
             cout << "Masukan angkanya berapa saja = " << endl;
             cin >> arr[i];
        }
        

    BS01(arr,n);

    return 0;
}
