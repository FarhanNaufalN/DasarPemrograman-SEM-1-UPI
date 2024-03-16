#include <iostream>

using namespace std;

int main (){

    int angka [3][2][3]={
        {
            {10,2,5},
            {5,7,9}
        },
        {
            {9, 2, 3},
            {8, 7, 0}
        },
        {
            {10, 11, 12},
            {9, 8, 7}
            
        }
    };
    //cout<< array [0][3]<<endl;
    
    cout << angka [2][0][1]<<endl;
}
