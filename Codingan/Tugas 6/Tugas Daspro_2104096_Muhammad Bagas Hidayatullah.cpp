#include <iostream>

using namespace std;
int main()

{
    int nilai;
    cout<<"masukan Nilai";
    cin>>nilai;

    if (nilai>80){
        cout<<"A = Sangat Baik"<<endl;
    }
    else if (70<nilai<80){
        cout<<"B = Baik"<<endl;
    }
    else if (50<nilai<70){
        cout<<"C = Sedang"<<endl;
    }
    else if (40<nilai<50){
        cout<<"D = Buruk"<<endl;
    }
    else if (nilai<40){
        cout<<"E = Sangat Buruk"<<endl;
    }
    else{
        cout<<"nilai tidak ada";
    }
    return 0;
}
