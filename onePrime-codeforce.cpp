#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, cnt = 0; cin >> x;

    if(x == 1)
        cout << "NO\n";
    else
    {
        for(long long i = 2; i < x; i++)
        {
            if(x % i == 0)
                cnt++;
        }

        if(cnt == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
