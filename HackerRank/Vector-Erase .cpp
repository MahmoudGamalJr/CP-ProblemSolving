// Problem Link: https://www.hackerrank.com/challenges/vector-erase/problem
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
  
        int pos , start, end;
        cin >> pos >> start >> end;

        ve.erase(ve.begin()+(pos-1));
        ve.erase(ve.begin()+start-1,ve.begin()+end-1);

        int vec_size = ve.size();
        cout << vec_size << '\n';
        for(int i = 0 ; i < vec_size ; i++)
        {
            cout << ve[i] << " ";
        }







       return 0;
}
