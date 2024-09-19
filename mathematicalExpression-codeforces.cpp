#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, exp; char q = '=', s;
    cin >> a >> s >> b >> q >> c;

    if(s == '+')
    {
        exp = a + b;
        if(exp == c)
            cout << "Yes\n";
        else
            cout << exp << endl;

    }
    else if(s == '-')
    {
        exp = a - b;
        if(exp == c)
            cout << "Yes\n";
        else
            cout << exp << endl;

    }
    else
    {
        exp = a * b;
        if(exp == c)
            cout << "Yes\n";
        else
            cout << exp << endl;

    }

    return 0;
}
