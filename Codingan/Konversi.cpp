  #include <iostream>
  using namespace std;

 int main(int argc, char const *argv[])

    int nilai;
    string hasil;

    cin >> nilai;
 {
     if (nilai >= 80 && nilai <=100)
        {
        hasil = "A";
        } 
        else if (nilai >= 75 && nilai <= 79)
        {
        hasil = "AB";
        }
        else if (nilai >= 70 && nilai <= 74)
        {
        hasil = "B";
        }
        else if (nilai >= 65 && nilai <= 69)
        {
        hasil = "BC";
        }
        else if (nilai >= 60 && nilai <= 64)
        {
        hasil = "C";
        }
        else if (nilai >= 50 && nilai <= 59)
        {
        hasil = "D";
        }
        else if (nilai >= 0 && nilai <= 49)
        {
        hasil = "E";
        }
        
        cout << hasil;
    
    return 0;
 }
  
  