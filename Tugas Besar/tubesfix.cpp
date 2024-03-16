#include  <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
// deklarasi variabel untuk hambatan seri
    int a;
    int x=0;
    int b;
    float a1,t1;
    float seri1,seri2 [1000], seri3; 
    float prl1;
    float prl2 [1000],prl3=0,prl4 =1,prl5=0,prl6=0,prl7=0,prl8=0,prl9=0,prl10=0,prl11=0,prl12=0,prl13=0,prl14=0,prl15=0;
    float campuran1;
//======================================================================================================================================  
    do
    {
        
    } while (/* condition */);
    
    cout << "Selamat datang di Program Menghitung Rangkaian Listrik" << endl;
    cout << "=======================================================" << endl;
    cout << " " << endl;
    cout << "Apakah rangkaian terkecilnya ?" << endl;
    cout << "1.Seri" << endl;
    cout << "2.Paralel" << endl;
    cout <<" "<<endl;
    cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a;
    cout <<" "<<endl;
    cout << "=======================================================" << endl;
    cout <<" "<<endl;
//=======================================================================================================================================
    if (a==1)
    {   
        do
        {
            cout << "Jumlah hambatan seri : ";  cin >> seri1 ;
            cout << " "<< endl;
            for (int i = 0; i < seri1; i++)
            {
                cout << "Besar hambatan seri ke-" << i+1 << " : ";
                cin >> seri2[i]; 
                seri3+=seri2[i];
            }
            cout << "Total hambatan seri : " << seri3 << " Ohm" << endl;
            cout << " " << endl;
            cout << "=======================================================" << endl;
            cout << " " << endl;
//===========================================================================================================================================
            cout << "Apakah ada rangkaian paralel ? "<< endl;
            cout << "1.iya" << endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a;
            cout << " " << endl;
            cout << "=======================================================" << endl;
//============================================================================================================================================
            if (a==1)
            {   
                cout <<" "<<endl;
                prl3*=0;
                prl4*=0;
                prl4+=1;
                cout << "Jumlah hambatan paralel : ";  cin >> prl1 ;
                cout << " " << endl;
                for (int i = 1; i <= prl1; i++)
                {
                    cout << "Besar hambatan paralel ke-" << i << " : ";
                    cin >> prl2[i];
                    prl3+=prl2[i]; 
                    prl4*=prl2[i];     
                } 
                switch (x)
                {
                case 0:
                    prl5+=prl3;
                    prl6+=prl4;
                    prl7=prl6/prl5;
                    break;
                case 1:
                    prl8+=prl3;
                    prl9+=prl4;
                    prl10=prl9/prl8;
                    break;
                default:
                   prl11+=prl3;
                   prl12+=prl4;
                   prl14=prl12/prl11;
                    break;
                }
                cout <<prl10;
                cout <<prl14;
                prl15=prl10+prl7+prl14;
                cout << " " << endl;
                cout<<"Besar hambatan paralel total :  " << prl15 << " Ohm" << endl;
                cout << " " << endl;
                cout << "=======================================================" << endl;
                cout <<" "<<endl;
            }
//=============================================================================================================================================
            cout << "Apakah hanya itu rangkaian nya ?"<< endl;
            cout << "1.iya"<< endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a ;
            cout <<" "<<endl;
            cout << "=======================================================" << endl;
            cout <<" "<<endl;
//============================================================================================================================================
            if (a==1)
            {  
                cout << "Apakah yang akan anda cari ?" << endl;     
                cout << "1.Arus listrik" << endl;
                cout << "2.Tegangan listrik" << endl;
                cout <<" "<<endl;
                cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> b;
                campuran1=seri3+prl15;

                if (b==1)
                {   
                    cout << "masukan nilai tegangan listrik : "<< endl;
                    cin >> t1;
                    cout <<" "<< endl;
                    cout << campuran1 << endl;
                    cout << t1 << endl;
                    a1=t1/campuran1;
                    cout << "Nilai arus listrik :" << a1 <<endl;
                    cout <<" "<<endl;
                    cout << "=======================================================" << endl;
                    cout <<" "<<endl;
                }
                else
                {   
                    cout << "masukan nilai arus listrik : "<< endl;
                    cin >> a1;
                    cout <<" "<< endl;
                    cout << campuran1 << endl;
                    cout << a1 << endl;
                    t1=a1*campuran1;
                    cout << "Nilai Tegangan listik : "<< t1 <<endl;
                    cout <<" "<<endl;
                    cout << "=======================================================" << endl;
                    cout <<" "<<endl;
                }
            }
        x++;
        } 
        while (a!=1);
    }
//=========================================================================================================================================================


//============================================================================================================================================
    else
    {
        do
        {
            prl3*=0;
            prl4*=0;
            prl4+=1; 
            cout << "Jumlah hambatan paralel : ";  cin >> prl1 ;
            cout << " "<< endl;
            for (int i = 1; i <= prl1; i++)
            {
                cout << "Besar hambatan seri ke-" << i << " : ";
                cin >> prl2[i];
                prl3+=prl2[i]; 
                prl4*=prl2[i];     
            } 
            switch (x)
            {
                case 0:
                    prl5+=prl3;
                    prl6+=prl4;
                    prl7=prl6/prl5;
                    break;
                case 1:
                    prl8+=prl3;
                    prl9+=prl4;
                    prl10=prl9/prl8;
                    break;
                case 2:
                   prl11+=prl3;
                   prl12+=prl4;
                   prl14=prl12/prl11;
                    break;
                
            }
            cout <<prl7 << endl;
            cout <<prl10 << endl;   
            cout << prl14 << endl;
            prl15=prl10+prl7+prl14;
            cout << " " << endl;
            cout<<"Besar hambatan paralel total :  " << prl15 << " Ohm" << endl;
            cout << " " << endl;
            cout << "=======================================================" << endl;
            cout <<" "<<endl;
//======================================================================================================================================
            cout << "Apakah terdapat rangkaian seri ?"<< endl;
            cout << "1.iya" << endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a;
            cout << "=======================================================" << endl;
//=================================================================================================================================
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
            cout <<" "<<endl;
            cout << "=======================================================" << endl;
            cout << " " << endl;
            }
//==========================================================================================================================
            cout << "Apakah hanya itu rangkaian nya ?"<< endl;
            cout << "1.iya"<< endl;
            cout << "2.tidak"<< endl;
            cout << " " << endl;
            cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> a ;
            cout << " " << endl;
            cout << "=======================================================" << endl;
            cout << " " << endl;
//=========================================================================================================================================
            if (a==1)
            {
                cout << "Apakah yang akan anda cari ?" << endl;     
                cout << "1.Arus listrik" << endl;
                cout << "2.Tegangan listrik" << endl;
                cout <<" "<<endl;
                cout << "Pilih dengan memasukan angka (1/2) : " ; cin >> b;
                campuran1=seri3+prl15;
                if (b==1)
                {
                    cout << "masukan nilai tegangan listrik : "<< endl;
                    cin >> t1;
                    cout <<" "<< endl;
                    cout << campuran1 << endl;
                    cout << t1 << endl;
                    a1=t1/campuran1;
                    cout << "Nilai arus listrik :" << a1 <<endl;
                    cout <<" "<<endl;
                    cout << "=======================================================" << endl;
                    cout <<" "<<endl;
                }
                else
                {
                    cout << "masukan nilai arus listrik : "<< endl;
                    cin >> a1;
                    cout <<" "<< endl;
                    cout << campuran1 << endl;
                    cout << a1 << endl;
                    t1=a1*campuran1;
                    cout << "Nilai Tegangan listik : "<< t1 <<endl;
                    cout <<" "<<endl;
                    cout << "=======================================================" << endl;
                    cout <<" "<<endl;
                } 
            }
        x++;
//=====================================================================================================================================
        } while (a!=1);
    }
    
return 0;
}
