// Problem Name: 123. The sum
// Problem Link: https://codeforces.com/problemsets/acmsguru/problem/99999/123
// Language: CPP
// Submission Link: https://codeforces.com/problemsets/acmsguru/submission/99999/175140005
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
        ll arrr[50];
        arrr[0] = 0;
        arrr[1] = 1;
        ll n, sum = 0 ; cin >> n;
        
        if(n==0)
        {
            cout << 0;
            return 0;
        }
        
        else if(n==1)
        {
            cout << 1;
            return 0;
        }
        for(int i = 2; i < 41;i++)
        {
            arrr[i] = arrr[i-1] + arrr[i-2];
        }
        for(int i = 0; i <= n;i++)
        {
            sum +=arrr[i];
        }
        cout << sum ;

  
       return 0;
}
