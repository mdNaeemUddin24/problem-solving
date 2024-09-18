#include <bits/stdc++.h>
using namespace std;

// codeforces problems beginner : Capital or Small or Digit

int main()
{
    char X; cin >> X;

    // 48 - 57 : (0-9),A-Z : 65-90, a-z: 97-122

    if(X >= 48 && X <= 57)
        cout << "IS DIGIT\n";
    else
    {
        cout << "ALPHA\n";
        if(X >= 65 && X <= 90)
            cout << "IS CAPITAL\n";
        else if(X >= 97 && X <= 122)
            cout << "IS SMALL\n";
    }

    return 0;
}

