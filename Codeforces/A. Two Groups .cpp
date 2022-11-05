// Problem Name: A. Two Groups
// Problem Link: https://codeforces.com/contest/1747/problem/A
// Language: CPP
// Submission Link: https://codeforces.com/contest/1747/submission/179335546
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;


int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int T; cin >> T;
        while(T--)
        {
            long long n, ans = 0 ; cin >> n;
            while(n--)
            {
                int x  ;cin >> x;
                    ans += x;
            }
            cout << abs(ans) << '\n';
        }





	 return 0;

}
