#include <iostream>
using namespace std;

int main(){

    int A[3][2][4] = {
                    //Kedalaman 1 (0)
                    {{1,2,3,4},
                    {5,6,7,8}},
                    //Kedalaman 2 (1)
                    {{9,10,11,12},
                    {13,14,15,16}},
                    //Kedalaman 3 (2)
                    {{17,18,19,20},
                    {21,22,23,24}}
                     };
    for (int a = 0; a < 3; a++){
        cout << "Kedalam ke " << "[" << a+1 << "]" << endl;
        for (int b = 0; b < 2; b++){
            for (int c = 0; c < 4; c++)
            {
                cout << A[a][b][c] << " " ; 
            } cout << endl;
            cout << endl;
        } 
        
    } 
    
}