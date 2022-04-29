// Max element in the array 
#include<iostream>
using namespace std;

int main()
{
    int n,a[100],max;
    max = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    cout << max;   
}