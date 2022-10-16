// Problem Name: A. Maxmina
// Problem Link: https://codeforces.com/contest/1746/problem/A
// Language: CPP
// Submission Link: https://codeforces.com/contest/1746/submission/176340552
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);


        int T ; cin >> T;
        while(T--)
        {
            int n , m; cin >> n >> m;
            bool ok = false;
            int arr[n];
            for(int i = 0; i < n;i++)
            {
                cin >> arr[i];
                ok |= (arr[i]==1); // Bitwise AND operator
            }
            cout << (ok ? "YES\n" : "NO\n");
        }












	 return 0;

}
