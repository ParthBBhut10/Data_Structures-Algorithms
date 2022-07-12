#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int d, r, n, x;
    d = a & b;
    r = a | b;
    n = ~a;
    x = a ^ b;
    cout << d << endl;
    cout << r << endl;
    cout << n << endl;
    cout << x << endl;
}