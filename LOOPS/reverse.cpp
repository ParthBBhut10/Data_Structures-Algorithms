// Reverse a Number 

#include<iostream>
using namespace std;

int main()
{
    int n,r;
    cin >> n;
    while (n > 0)
    {
        r = n%10;
        n = n/10;
        //cout << n << " " <<r;
        cout << r << "\n";
    }
    
    
    return 0;

}