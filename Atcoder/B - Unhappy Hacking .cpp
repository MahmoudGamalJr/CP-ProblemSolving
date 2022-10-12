// Problem Name: B - Unhappy Hacking
// Problem Link: https://atcoder.jp/contests/abc043/tasks/abc043_b
// Language: CPP
// Submission Link: https://atcoder.jp/contests/abc043/submissions/35611075
// User: MahmoudGamal

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);



        string str; cin >> str;

        vector <char> ve;

        for(int i = 0; i < (int)str.size(); i++)
        {
            if(str[i] == 'B'&& ve.size() )
            {
                ve.pop_back(); // delete if str[i] = 'B' and ve is NOT empty
                continue;
            }
            else if( str [i] == 'B'&& !ve.size())
            {
                continue; //reloop if str[i] = 'B' and ve is empty
            }
            ve.push_back(str[i]); // otherwise push into ve

        }
        for(auto i : ve)
        {
            cout << i;
        }








	 return 0;

}
