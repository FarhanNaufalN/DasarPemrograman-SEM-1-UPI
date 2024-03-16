#include <iostream>

using namespace std;

int main (){

    int A [3][2] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    for (int a = 0; a < 3; a++)
    { 
        for (int b = 0; b < 4; b++)
    { 
       cout << A[a][b] << " ";
    }
    
        
    } cout << endl;
}