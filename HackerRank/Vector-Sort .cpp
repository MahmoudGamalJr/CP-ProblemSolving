// Problem Link: https://www.hackerrank.com/challenges/vector-sort/problem
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
        // size of vector
        vector <int> ve(n);
        for(auto &i : ve)
        {
            cin >> i;
        }
        // function to sort the vector
        sort(ve.begin(), ve.end());
        for(auto i : ve)
        {
            cout << i << " ";
        }






       return 0;
}
