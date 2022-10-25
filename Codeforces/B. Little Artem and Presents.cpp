// Problem Name: B. Little Artem and Presents
// Problem Link: https://codeforces.com/gym/404780/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/gym/404780/submission/177891912
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n, ans = 0 ; cin >> n;
        if(n==1||n==2)
        {
            cout << 1;
        }
        else
        {
            int ans = 0;
            while(n>=3)
            {
                n-=3;
                ans++;
            }
            ans *=2;
            if(n > 0)
            {
                ans++;
            }
            cout << ans;
        }





	 return 0;

}
