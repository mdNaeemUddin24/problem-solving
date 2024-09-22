#include <bits/stdc++.h>
using namespace std;

//

int main()
{
   long int n, even = 0, odd = 0, pos = 0, neg = 0; cin >> n;
   vector<long int> arr;

   int i = 0;
   while(i < n)
   {
       long int x; cin >> x;
       arr.push_back(x);
       i++;
   }

   for(auto i : arr)
   {
       if(i % 2 == 0)
            even++;
       if(i % 2 != 0)
            odd++;
       if(i > 0)
            pos++;
       if(i < 0)
            neg++;
   }

   cout << "Even: " << even << endl;
   cout << "Odd: " << odd << endl;
   cout << "Positive: " << pos << endl;
   cout << "Negative: " << neg << endl;

   return 0;
}
