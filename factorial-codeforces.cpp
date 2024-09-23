#include <bits/stdc++.h>
using namespace std;


void anotherShortSolutionIs()
{
    long long t, n, product = 1; cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cin >> n;

        for(int j = 1; j <= n; j++)
        {
            if(n == 0)
                cout << 1 << "\n";
            else
                product = j * product;
        }

        cout << product << "\n";
        product = 1;
    }
}

int main()
{
    long long t, n, product = 1; cin >> t;
    vector<long long> arr;

    for(int i = 1; i <= t; i++)
    {
        cin >> n;
        arr.push_back(n);
    }

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 1; j <= arr[i]; j++)
        {
            if(arr[i] == 0)
                cout << 1 << "\n";
            else
                product = j * product;
        }

        cout << product << "\n";
        product = 1;
    }

    return 0;
}
