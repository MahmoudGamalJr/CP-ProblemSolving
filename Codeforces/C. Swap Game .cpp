// Problem Name: C. Swap Game
// Problem Link: https://codeforces.com/contest/1747/problem/C
// Language: CPP
// Submission Link: https://codeforces.com/contest/1747/submission/179335731
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
                int n;
                cin >> n;
                vector<int> a(n);
                for (int i = 0; i < n; i++) 
                {
                    cin >> a[i];
                }
                int x = *min_element(a.begin(), a.end());
                cout << (x != a[0] ? "Alice\n" : "Bob\n");
        }





	 return 0;

}
