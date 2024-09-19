#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    vector<long long> num;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);

    auto first = num.begin();
    auto second = num.end();
    sort(first, second);
    for(auto i : num)
        cout << i << endl;

    cout << endl <<  a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
