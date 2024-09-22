#include <bits/stdc++.h>
using namespace std;

//

int main()
{
    long long n, maxNum; cin >> n;
    vector<long long> arr;

    long long i = 0, j = 0;

    while(i < n)
    {
        long long nn; cin >> nn;
        arr.push_back(nn);
        i++;
    }


    maxNum = arr[0];
    while(j < arr.size())
    {
        if(maxNum < arr[j])
            maxNum = arr[j];

        j++;
    }

    cout << maxNum << endl;
    return 0;
}
