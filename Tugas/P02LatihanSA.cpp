include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int ary[] = {4,3,2,1,5,8,7,6};
    int i,j,tmp;
    int n = sizeof(ary)/sizeof(ary[0]);
    
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (ary[j] < ary[j+1])
            {
                tmp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = tmp;

                
            }
            
        }
        cout << ary[j] << " ";
    }
     

    return 0;
}
