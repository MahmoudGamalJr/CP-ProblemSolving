// Problem Name: B. Permutation Value
// Problem Link: https://codeforces.com/problemset/problem/1743/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1743/submission/176877347
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
                    int n;
                    cin >> n;
                    
                    cout << "1 " << n << " ";
                    for(int i = 2; i < n;i++)
                    {
                        cout << i << " ";
                    }

                cout << '\n';
        }












	 return 0;

}
