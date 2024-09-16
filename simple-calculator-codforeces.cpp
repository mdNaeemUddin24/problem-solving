#include <bits/stdc++.h>
using namespace std;


// code force newbie problems : Simple Calculator

int main()
{
    long long int X, Y;
    cin >> X >> Y;

    long long sum, mult, sub;
    sum = X + Y;
    mult = X * Y;
    sub = X - Y;

    cout << X << " + " << Y << " = " << sum << endl;
    cout << X << " * " << Y << " = " << mult << endl;
    cout << X << " - " << Y << " = " << sub << endl;

    return 0;
}
