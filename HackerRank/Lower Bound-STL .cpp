// Problem Link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem
// Langugae: C
// User: mahmoud_gamal_a3
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n;
        cin >> n;
        vector <int> ve(n);
        for(auto &i : ve)
        {
            cin >> i;
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++) 
        {
            int temp;
            cin >> temp;
            vector<int>::iterator it;
            it = lower_bound(ve.begin(), ve.end(), temp);
            if (*(it + 1) == temp || *it == temp)
            {
                cout << "Yes " << it - ve.begin() + 1 << '\n';
            }
            else
            {
                cout << "No " << it - ve.begin() + 1 << '\n';
            }
        }







       return 0;
}
