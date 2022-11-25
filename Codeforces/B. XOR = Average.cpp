// Problem Name: B. XOR = Average
// Problem Link: https://codeforces.com/contest/1758/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1758/submission/182547138
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
           int n ; cin >> n;
           if(n&1)
           {
                for (int j = 0; j < n-1; j++)
                {
                                cout << "1 ";
                }
                cout << 1;
           }
           else
           {
                  cout << 1 << ' ';
                  for (int j = 0; j < n - 2; j++)
                  {
                    cout << 2 << ' ';
                  }
                  cout << 3;
           }
           cout << '\n';
       }








	 return 0;

}
