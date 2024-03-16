#include  <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
// deklarasi variabel untuk hambatan seri
    int a;
    float seri1,seri2 [1000], seri3; 
// deklarasi variabel untuk hambatan paralel
    float prl1;
    float prl2 [1000],prl3 =1,prl4 =1,prl5=0,prl6=0,prl7=0;
    float campuran1;
    cout << " " << endl;
    cout << "Selamat datang di Program Menghitung Rangkaian Listrik" << endl;
    cout << "=======================================================" << endl;
    cout << " " << endl;
    cout << "Apakah rangkaian terkecilnya ?" << endl;
    cout << "1.Seri" << endl;
    cout << "2.Paralel" << endl;
    cout << " " << endl;
    cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a;
    cout << "=======================================================" << endl;
    
    // eksekusi if apabila terdapat seri
    if (a==1)
    {   
        do
        {
            cout <<" "<<endl;
            cout << "Jumlah hambatan seri : ";  cin >> seri1 ;
            for (int i = 0; i < seri1; i++)
            {
                cout << " "<< endl;
                cout << "Besar hambatan seri ke-" << i+1 << " : ";
                cin >> seri2[i]; 
                seri3+=seri2[i];
            }
            cout << "Total hambatan seri : " << seri3 << " Ohm" << endl;
            cout << "=======================================================" << endl;
    // eksekusi if apabila terdapat paralel setelah seri;
            cout << " " << endl;
            cout << "Apakah ada rangkaian paralel ? "<< endl;
            cout << "1.iya" << endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a;
            cout << "=======================================================" << endl;
            if (a==1)
            {   
                cout <<" "<<endl;
                prl5=0;
                prl6=0;
                cout << "Jumlah hambatan paralel : ";  cin >> prl1 ;
                for (int i = 1; i <= prl1; i++)
                {
                    cout << " "<< endl;
                    cout << "Besar hambatan paralel ke-" << i << " : ";
                    cin >> prl2[i];
                    prl3+=prl2[i]; 
                    prl4*=prl2[i];     
                } 
                prl5+=prl3;
                prl5-=1;
                prl6+=prl4;
                prl7=prl5/prl6;
                cout << " " << endl;
                cout<<"Besar hambatan paralel total :  " << prl7 << " Ohm" << endl;
                cout << "=======================================================" << endl;
            }
    // mengkonfirmasi bagian dari rangkaian    
            cout << " " << endl;
            cout << "Apakah hanya itu rangkaian nya ?"<< endl;
            cout << "1.iya"<< endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a ;
            cout << "=======================================================" << endl;
            if (a==1)
            {
    // menghitung langsung jumlah total dari seluruh rangkaian
            campuran1=seri3+prl7;
            cout<<"Besar hambatan total paralel : " << campuran1 << " Ohm" << endl;
            cout << "=======================================================" << endl;
            }
        } 
        while (a!=1);
    }
    else
    {
    do
    {
    // eksekusi else apabila terdapat paralel
            prl5=0;
            prl6=0;
            cout << " "<< endl;
            cout << "Jumlah hambatan paralel : ";  cin >> prl1 ;
            for (int i = 1; i <= prl1; i++)
            {
                cout << " "<< endl;
                cout << "Besar hambatan seri ke-" << i << " : ";
                cin >> prl2[i];
                prl3+=prl2[i]; 
                prl4*=prl2[i];     
            } 
            prl5+=prl3;
            prl5-=1;
            prl6+=prl4;
            prl7=prl5/prl6;
            cout << " " << endl;
            cout<<"Besar hambatan total paralel : " << prl7 << " Ohm" << endl;
            cout << "=======================================================" << endl;
    // eksekusi apabila terdapat seri setelah paralel
            cout << " " << endl;
            cout << "Apakah terdapat rangkaian seri ?"<< endl;
            cout << "1.iya" << endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a;
            cout << "=======================================================" << endl;
            if (a==1)
            {
                cout <<" "<<endl;
                cout << "Jumlah hambatan seri : ";  cin >> seri1 ;
                for (int i = 0; i < seri1; i++)
                {
                    cout << " "<< endl;
                    cout << "Besar hambatan seri ke-" << i+1 << " : ";
                    cin >> seri2[i];
                    seri3+=seri2[i];
                }
            cout << "Total hambatan seri : " << seri3 << " Ohm" << endl;
            cout << "=======================================================" << endl;
            }
    // mengkonfirmasi bagian dari rangkaian
            cout << " " << endl;
            cout << "Apakah hanya itu rangkaian nya ?"<< endl;
            cout << "1.iya"<< endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a ;
            cout << "=======================================================" << endl;
            if (a==1)
            {
                campuran1=seri3+prl7;
                cout << " "<< endl;
                cout<<"Besar hambatan total paralel : " << campuran1 << " Ohm" << endl;
                cout << "=======================================================" << endl;
            }
        } while (a!=1);
        }
    
return 0;
}
