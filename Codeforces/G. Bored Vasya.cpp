// Problem Name: G. Bored Vasya
// Problem Link: https://codeforces.com/group/kbZwsm35Bw/contest/267827/problem/G
// Language: CPP
// Submission Link: https://codeforces.com/group/kbZwsm35Bw/contest/267827/submission/184393890
// User: Mahmoud_Gamal_
#include<bits/stdc++.h>
using namespace std;

int main()
{
            ios_base :: sync_with_stdio(0),
            cin.tie(0);

            int n ,m ; cin >> n >> m;
            int arr[m];
            for(int i  = 0; i < m;i++)
            {
                cin >> arr[i];
            }
            vector<int> ans;
            for(int i = 0;i < m;i++)
            {
                if(arr[i]%n==0)
                {
                    ans.push_back(i);
                }
            }
            if(ans.size())
            {
                cout << ans.size() << "\n";
            }
            else
            {
                return cout << 0, 0;
            }
            reverse(ans.begin(), ans.end());
            for(int i = 0; i < ans.size() - 1;i++)
            {
                cout << ans[i]+1 << " ";
            }
            cout << ans[ans.size() - 1]+1;

        return 0;

}
