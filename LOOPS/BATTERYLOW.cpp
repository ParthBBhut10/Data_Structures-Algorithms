// https://www.codechef.com/problems/BATTERYLOW  
 

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    cin >> n;
	    if(n <= 15)
	    {
	        cout << "Yes \n";
	    }
	    else 
	        cout << "No \n";
	}
	return 0;
}
