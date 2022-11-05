// Problem Name: A. Count numbers
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/A
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/179329564
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n, m ; cin >> n >> m;
        map <int , int> mp;
        for(int i = 0; i < m;i++)
        {
            int x, a ; cin >> x >> a;
            if(x==1)
            {
                mp[a]++;  
            }
            else
            {
                cout << mp[a] << '\n';
            }
        }







	 return 0;

}
