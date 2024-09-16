#include <bits/stdc++.h>
using namespace std;

// code force newbie problems : Digits summation

int main()
{
    long long N, M; cin >> N >> M;
    long long lastDigitOfN, lastDigitOfM, sumOfBothLastDigit;
    lastDigitOfN = N % 10; lastDigitOfM = M % 10;

    sumOfBothLastDigit = lastDigitOfN + lastDigitOfM;
    cout << sumOfBothLastDigit << endl;

    return 0;
}
