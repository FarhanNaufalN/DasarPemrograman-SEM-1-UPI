#include <iostream>

using namespace std;

int main (){

    int a = 0;
    for (int i = 0; i < 7; i++){
        if(i%2 == 0){
            a+= i;
        }
    }
    cout << a << endl;
}
