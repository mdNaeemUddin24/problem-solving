#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin >> N;
    long long year, month, day, rem;

    year = N / 365;
    rem = N % 365;
    month = rem / 30;
    day = rem % 30;

    cout << year << " years\n";
    cout << month << " months\n";
    cout << day << " days\n";

    return 0;
}
