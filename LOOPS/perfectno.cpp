// Perfect Number 

#include<iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            sum = sum + i;
            cout << sum << " " ;
        }
    }
    if(2*n == sum)
    {
        cout << "\n";
        cout << n <<" Is a Perfect No. \n" ; 
    }
    else 
        cout << n << " Is not a Perfect No. \n";
    
    

}