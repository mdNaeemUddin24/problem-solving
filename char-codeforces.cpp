#include <bits/stdc++.h>
using namespace std;

// codeforces beginner problems : Char

int main()
{
    char X; cin >> X;
    if(X >= 'a' && X <= 'z')
    {
        X = (X - 32);
        cout << X << endl;
    }else
    {
        X = X + 32  ;
        cout << X << endl;
    }

    return 0;
}

