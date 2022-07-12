// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0, pro = 1;
    cin >> n;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        pro *= rem;

        n /= 10;
    }
    int ans = pro - sum;
    cout << ans;
}