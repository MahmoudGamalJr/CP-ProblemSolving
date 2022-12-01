// Problem Name: B. Atilla's Favorite Problem
// Problem Link: https://codeforces.com/problemset/problem/1760/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1760/submission/183513276
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
                int x; cin >> x;
                string str; cin >> str;
                sort(str.begin(), str.end());
                cout << (str[str.size()-1] - 'a') + 1 << "\n";
            }




         return 0;

    }
