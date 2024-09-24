#include <bits/stdc++.h>
using namespace std;
// not completed
int main()
{
    long long n; cin >> n;
    for(long int i = n; i >= 1; i--)
    {
        for(long int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
