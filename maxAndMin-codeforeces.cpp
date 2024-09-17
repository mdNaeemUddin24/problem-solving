#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long A, B, C, maxNum, minNum, maxOfTwo, minOfTwo; cin >> A >> B >> C;
    maxOfTwo = max(B, C); minOfTwo = min(B, C);
    maxNum = max(A, maxOfTwo); minNum = min(A, minOfTwo);
    cout << minNum << " " << maxNum << endl;

    return 0;
}
