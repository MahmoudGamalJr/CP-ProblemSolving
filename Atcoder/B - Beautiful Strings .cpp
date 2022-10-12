// Problem Name: B - Beautiful Strings
// Problem Link: https://atcoder.jp/contests/abc044/tasks/abc044_b
// Language: CPP
// Submission Link: https://atcoder.jp/contests/abc044/submissions/35610759
// User: MahmoudGamal

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        string str; cin >> str;
        
        vector <int> alph(26);
        
        for(int i = 0; i  < (int)str.size();i++)
        {
            alph[str[i]-'a']++; // frequency technique
        }
        for(int i = 0; i < 26;i++)
        {
            if(alph[i]%2!=0)
            {
                cout << "No";
                return 0;
            }
        }
cout << "Yes";









	 return 0;

}
