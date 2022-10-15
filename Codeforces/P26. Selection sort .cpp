// Problem Name: P26. Selection sort
// Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P26
// Language: CPP
// Submission Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/submission/176297106
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n;
        cin >> n;
        vector <int> vec(n);
        for (int i = 0; i < n; i++)
        {
             cin >> vec[i] ;
        }

        for (int i = 0; i < n - 1; i++)
        {
            int mi = i;
            for (int j = i + 1; j < n ; j++)
                if (vec[mi] > vec[j])
                    mi = j;

            swap(vec[i], vec[mi]);
            for (int j = 0; j < n && cout << vec[j] << (j == n - 1 ? "" : " "); j++)
                ;
            cout << (i == n - 2 ? "" : "\n");
        }





	 return 0;

}
