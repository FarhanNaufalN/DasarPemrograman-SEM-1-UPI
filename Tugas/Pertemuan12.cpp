#include <iostream>
using namespace std;

int main()
{






    //int array [5] = {1, 2, 3, 4, 5}; //1dimensi v1
    //for(int i=0; i<=4; i++){ //1 1 1 1 1 
    //    cout << array[i] <<" ";
    //}
    //cout << array [4] << endl;
    int nilai [3][4]={
        {1,3,5,7},
        {2,4,6,8},
        {1,2,3,4}
        };

    for (int a=0;a<=2;a++){ //0 //1 //2 //3
        for (int b=0;b<=3;b++){ //0 //1 //2 //3 //4
        cout<<nilai[a][b]<<" ";
        
         }cout <<endl;
    } 
     
    //cout<< array [0][0]<<endl;
    //2dimensi v1 

    //int nilai [5]; 1dimensi v2
    //nilai [0] = 1;
    //nilai [1] = 2;
    //nilai [2] = 3;
    //nilai [3] = 4;
    //nilai [4] = 5;

/*
int array[3][4];

array[0][0]=1;
array[0][1]=2;
array[0][2]=3;
array[0][3]=4;
array[1][0]=6;
array[1][1]=7;
array[1][2]=8;
array[1][3]=9;
array[2][0]=11;
array[2][1]=12;
array[2][2]=13;
array[2][3]=14;
*/  
    /*int angka [3][2][3]={
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
    }; /*
    //cout<< array [0][3]<<endl;
    
    cout << angka [2][0][1]<<endl; */
}
