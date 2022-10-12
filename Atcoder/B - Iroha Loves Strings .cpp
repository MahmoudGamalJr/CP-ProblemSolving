// Problem Name: B - Iroha Loves Strings
// Problem Link: https://atcoder.jp/contests/abc042/tasks/abc042_b
// Language: CPP
// Submission Link: https://atcoder.jp/contests/abc042/submissions/35611022
// User: MahmoudGamal

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);


        int first, second; cin >> first >> second ;
        
        deque<string> de;
        
        for(int i = 0; i < first;i++)
        {
            string str;
            cin >> str ;
            de.push_back(str); // push each string back
        }
        
        sort(de.begin(), de.end()); // sort the deque
        for(auto i : de)
        {
            cout << i;
        }








	 return 0;

}
