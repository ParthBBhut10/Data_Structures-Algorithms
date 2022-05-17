// Character is Numeric or Alphabet
#include <iostream>
using namespace std;

int main()
{
    char n;
    cin >> n;
    if (n >= 65 && n <= 90)
    {
        cout << "n is Capital Character (A-Z)" << endl;
    }
    else if (n >= 97 && n <= 122)
    {
        cout << "n is Small Character (a-z) " << endl;
    }
    else if (n >= 48 && n <= 57)
    {
        cout << "n is Number (0-9)" << endl;
    }
    else
    {
        cout << "n is Symbol" << endl;
    }

    return 0;
}