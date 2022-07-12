#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        int nextNum;
        nextNum = a + b;
        a = b;
        b = nextNum;
        cout << nextNum << " ";
    }
}