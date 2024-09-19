#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long X; cin >> X;
    vector <long long> arr;

    for(int i = 0; ; i++)
    {
        long long rem = X % 10;
        X = X / 10;
        arr.push_back(rem);
        if(X == 0)
            break;
    }

    long long firstDigit = arr.back();

    if(firstDigit % 2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";

    return 0;
}
