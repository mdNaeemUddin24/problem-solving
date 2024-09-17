#include <bits/stdc++.h>
using namespace std;


int main()
{
    double A, B, floorRes, ceilRes, roundRes; cin >> A >> B;
    floorRes = A / B;
    ceilRes = A / B;
    roundRes = A / B;

    cout << "floor " << A << " / " << B << " = " << floor(floorRes) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(ceilRes) << endl;
    cout << "round " << A << " / " << B << " = " << round(roundRes) << endl;

    return 0;
}
