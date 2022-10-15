// Problem Name: P27. Scores in Order
// Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P27
// Language: CPP
// Submission Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/submission/176303808
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int test, n;
        cin >> test;

        vector<pair<int, int>> vec;
        while (test--)
        {
            cin >> n;
            vec.push_back({ n, -1 });
            sort(vec.rbegin(), vec.rend());
            int ans = 0;
            for (int i = 0; i < (int)vec.size()&& !ans; i++)
                (vec[i].second == -1 ? ans = i + 1 : 0), (vec[i].second == -1 ? vec[i].second = i + 1 : 0);
            cout << ans << "\n";
        }
        for (int i = 0;	i < (int)vec.size() && cout << vec[i].first << (i == (int)vec.size() - 1 ? "" : " "); i++)
            ;






	 return 0;

}
