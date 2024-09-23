#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, cnt = 0; cin >> n;
    vector<long long> arr;

    for(long long i = 1; i <= n; i++)
    {
        if(i == 1)
            continue;
        else if(i == 2 || i == 3)
            arr.push_back(i);
        else if(i > 3)
        {
            for(long long j = 2; j <= n; j++)
            {
                if(i % j == 0)
                    cnt++;
            }

            if(cnt < 2)
                arr.push_back(i);

            cnt = 0;
        }
    }

    for(auto i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}
