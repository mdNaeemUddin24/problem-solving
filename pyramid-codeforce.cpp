#include <bits/stdc++.h>
using namespace std;

// Pyramid Problem shape

int main()
{
    long long n;
    cin >> n;
    for(long int i = 0; i < n; i++)
    {
        for(long int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
