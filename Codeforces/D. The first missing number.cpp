// Problem Name: D. The first missing number
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/D
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/182227172
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;


int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);
        int n , m ; cin >> n >> m;
        int arr[n];
        map <int, int> mp;
        for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(int i = -m;i<=-1;i++)
        {
            if(!mp[i])
            {
                return cout << i, 0;
            }
        }
        for(int i = 0;i <=m;i++)
        {
            if(!mp[i])
            {
                return cout << i, 0;
            }
        }



	 return 0;

}
