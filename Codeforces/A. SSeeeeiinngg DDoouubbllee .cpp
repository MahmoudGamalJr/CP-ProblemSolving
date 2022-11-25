// Problem Name: A. SSeeeeiinngg DDoouubbllee
// Problem Link: https://codeforces.com/contest/1758/problem/A
// Language: CPP
// Submission Link: https://codeforces.com/contest/1758/submission/182545795
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
           string  s;
           cin >> s;
           cout << s;
           for(int i = s.size()-1;i>=0;i--)
           {
                cout << s[i];
           }
           cout << "\n";
       }








	 return 0;

}
