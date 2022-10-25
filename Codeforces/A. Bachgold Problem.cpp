// Problem Name: A. Bachgold Problem
// Problem Link: https://codeforces.com/gym/404780/problem/A
// Language: CPP
// Submission Link: https://codeforces.com/gym/404780/submission/177879339
// User: Mahmoud_Gamal_A.

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);



        int n ; cin >> n;
        if(!(n&1))
        {
            cout << n/2 << '\n';
            for(int i = 0; i < n/2;i++)
            {
                cout <<"2 ";
            }
        }
        else
        {
            cout << n/2 << '\n';
            for(int i = 0; i < n/2-1;i++)
            {
                cout << "2 ";
            }
            cout << '3';
        }






	 return 0;

}
