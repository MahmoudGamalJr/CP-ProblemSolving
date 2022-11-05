// Problem Name: E. Range sum query
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/E
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/179331753
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        long long n , m ; cin >> n >> m;
        long long arr[n];
        arr[0] = 0;
        for(int i = 1; i <= n;i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] + arr[i-1];
        }
        while(m--)
        {
            long long l , r ; cin >> l >> r;
            cout << arr[r] - arr[l - 1] << '\n';
        }








	 return 0;

}
