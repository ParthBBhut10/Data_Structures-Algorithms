// Prime Number 

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
            sum++;   
        }
    }
    if(sum == 2)
    {
        cout << sum << " Prime Number";
    }    
    else 
        cout << sum << " Not a Prime Number";
    
    

}