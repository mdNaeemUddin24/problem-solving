#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long x, y, t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> x >> y;

        if(x < y)
            cout << x << " " << y << endl;
        else if(x > y)
            cout << y << " " << x << endl;
        else
            cout << x << " " << y << endl;
    }

    return 0;
}
