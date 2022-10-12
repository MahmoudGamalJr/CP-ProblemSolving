// Problem Name: B. Funny Permutation
// Problem Link: https://codeforces.com/contest/1741/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1741/submission/175793754
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);


        int T ; cin >> T; // test cases
        while(T--)
        {
            ll n;
            cin >> n;
            if(n == 3)
            {
                cout << "-1\n";
                    continue;
            }

            vector<ll> ans;
            if(n%2 == 0)
            {
                for(int i=1; i<=n; i+=2)
                {
                    ans.push_back(i+1);
                    ans.push_back(i);
                }
            }
            else
            {
                for(int i=4; i<=n; i+=2)
                {
                    ans.push_back(i+1);
                    ans.push_back(i);
                }
                ans.push_back(1);
                ans.push_back(2);
                ans.push_back(3);
            }
            for(auto x : ans) cout << x << " ";
            cout << "\n";

        }








       return 0;
}
