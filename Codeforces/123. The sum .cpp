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
        ll arr[50];
        arr[0] = 0;
        arr[1] = 1;
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
            arr[i] = arr[i-1] + arr[i-2];
        }
        for(int i = 0; i <= n;i++)
        {
            sum +=arr[i];
        }
        cout << sum ;

  
       return 0;
}
