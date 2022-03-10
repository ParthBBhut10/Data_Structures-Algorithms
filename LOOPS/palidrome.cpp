// Palidrome 

#include<iostream>
using namespace std;

int main()
{
   int n,num,digit,rev=0;
   cin >> num;
   n = num;
   do
   {
       digit = num%10;
       num = num/10;
       rev = rev*10+ digit;
      
   }
   while(num != 0);
   cout << rev << endl;
   if(n == rev)
       cout << n << " Is a Palidrome" << endl;
    else  
       cout << n << " Is not a Palidrome" << endl;
   
return 0;

}