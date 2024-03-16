#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float seri1;
    float seri2 [1000];
    float seri3;
    int prl1;
    int prl2  [1000];
    int prl3 =1 ;
    int prl4 =1;
    int prl5;
    int prl6;
    int prl7;
    int prl8;
    int prl9;

// algoritma rangkaian seri
    cout << "jumlah hambatan seri : ";  cin >> seri1 ;
        for (int i = 0; i < seri1; i++)
        {
            cout << "besar hambatan seri ke-" << i+1 << " : ";
            cin >> seri2[i];
            seri3+=seri2[i];
        }
    cout << "Total hambatan seri : " << seri3 << endl;

// algoritma rangkaian paralel
    cout << "jumlah hambatan paralel : ";  cin >> prl1 ;
        for (int i = 1; i <= prl1; i++)
        {
            cout << "besar hambatan seri ke-" << i << " : ";
            cin >> prl2[i];
            prl3+=prl2[i]; 
            prl4*=prl2[i];
        } 
        prl3-=1;
        prl6=prl3%2;
        prl7=prl4%2;
        
        if (prl6==0 & prl7==0)
        {
            prl8=prl3/2;
            prl9=prl4/2;
            cout << prl8 << endl;
            cout <<"-----" <<endl;
            cout << prl9 << endl;
        }
        else
        {
            cout << prl3<< endl;
            cout << "-----" <<endl;
            cout << prl4<< endl;
        }
    
    cin.get();
    return 0;
}


