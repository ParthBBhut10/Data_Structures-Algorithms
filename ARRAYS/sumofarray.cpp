// Sum of Elements in Array 
#include<iostream> 
using namespace std;


int main()
{
    int n,A[7],sum = 0;
    cin >> n ;
    for(int i = 0;i<n;i++)
    {
        cin >> A[i];
        sum += A[i];
        
    }
    cout << sum << " " ;


    return 0;
}