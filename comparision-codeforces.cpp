#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B; char S; cin >> A >> S >> B;

    if(S == '<')
    {
        if(A < B)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }
    else if(S == '>')
    {
        if(A > B)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }
    else
    {
        if(A == B)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }

    return 0;
}
