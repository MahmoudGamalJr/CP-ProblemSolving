// Problem Link: https://www.hackerrank.com/challenges/cpp-maps/problem
// Langugae: C
// User: mahmoud_gamal_a3


#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        map <string,int> mp;
        int N = 0;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int q = 0;
            cin >> q ;
            string x;
            if (q == 1)
            {
                int y = 0;
                cin >> x;
                cin >> y;
                mp[x] += y;
            }
            else if (q == 2)
            {
                cin >> x;
                mp.erase(x);
            }
            else
            {
                cin >> x ;
                map<string,int>::iterator it = mp.find(x);
                if (it != mp.end())
                {
                    cout << mp[x] << '\n';
                }
                else
                {
                    cout << 0 << '\n';
                }
            }
        }


       return 0;
}
