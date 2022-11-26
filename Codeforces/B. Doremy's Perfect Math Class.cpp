// Problem Name: B. Doremy's Perfect Math Class
// Problem Link: https://codeforces.com/contest/1764/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1764/submission/182724295
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;
void getAC()
{
     long long n , ans = 0;
              cin >> n;
              long long arr[n];
              for(int i = 0; i < n;i++)
              {
                  cin >> arr[i];
                  ans = __gcd(ans, arr[i]);
              }
              cout << arr[n-1] / ans << '\n';

}
int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);



        int T ; cin >> T;
        while(T--)
        {
            getAC();
        }




	 return 0;

}
