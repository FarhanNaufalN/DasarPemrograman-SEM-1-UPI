#include<iostream>
using namespace std;

int main()
{
    int n, beda, banyak, suku, hasil, jumlahderet;

  cout << "input bilangan 1 :";
  cin >> n;

  cout << "input beda bilangan  :";
  cin >> beda;

  cout << "input banyak bilangan  :";
  cin >> banyak;

   for (int i = 1; i <=banyak; i++)
   {
      hasil = n +(i-1)*beda;
      jumlahderet += hasil;


       cout << hasil << ", " ;
   }
   cout << endl;
   cout << "Jumlah deret : " << jumlahderet << endl;
   
 }
 


