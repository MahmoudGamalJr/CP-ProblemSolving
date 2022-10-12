// Problem Name: C1. Good Subarrays
// Problem Link: https://codeforces.com/contest/1736/problem/C1
// Language: CPP
// Submission Link: https://codeforces.com/contest/1736/submission/175437409
// User: Mahmoud_Gamal_
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{


        ll T = 1;
        cin >> T; // test cases
        while(T--)
        {
               ll n ; cin >> n;
               ll arr[n];
               for(int i = 0; i < n;i++)
               {
                   cin >> arr[i];
               }
               ll first = 0, second = 0, res = 1, sum = 0;
               for( ;second < n; )
               {
                   while(first < n && res > arr[second])
                   {
                       res--, first++;
                   }
                   sum +=(second-first+1);
                   second++;
                   res++;

               }
               cout << sum << '\n';

        }




       return 0;
}
