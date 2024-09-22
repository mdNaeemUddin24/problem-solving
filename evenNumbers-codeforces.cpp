#include <bits/stdc++.h>
using namespace std;

//

int main()
{
    long long n, i = 1 ; cin >> n;
    vector<long long> arr;

    while(i <= n)
    {
        if(i % 2 == 0)
        {
            arr.push_back(i);
        }

        i++;
    }

    if(arr.size() == 0)
        cout << "-1\n";
    else
    {
        for(int i = 0; i < arr.size(); i++)
            cout << arr[i] << endl;
    }

    return 0;
}
