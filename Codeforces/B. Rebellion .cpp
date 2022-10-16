// Problem Name: B. Rebellion
// Problem Link: https://codeforces.com/contest/1746/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1746/submission/176343717
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
            int n ; cin >> n;
            int arr[n];
            for(int i = 0; i < n;i++)
            {
                cin >> arr[i];
            }
            int ans = 0,first = 0, second = n - 1;
            while(first < second)
            {
                if(arr[second]==1)
                {
                    second--;
                }
                else if(arr[first] == 1 && arr[second]==0)
                {
                    ans++;
                    first++,second--;
                }
                else if(arr[first] == 1 && arr[second]==1)
                {
                    first++, second--;
                }
                else
                {
                    first++;
                }
            }
            cout << ans << '\n';
        }












	 return 0;

}
