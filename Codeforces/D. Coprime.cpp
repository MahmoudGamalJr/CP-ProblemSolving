// Problem Name: D. Coprime
// Problem Link: https://codeforces.com/contest/1742/problem/D
// Language: CPP
// Submission Link: https://codeforces.com/contest/1244/submission/175237371
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int solve(int l, int r)
{
    if(__gcd(l, r)==1)
    {
        return 1;
    }
    return 0;
}

int main()
{




        int T = 1;
        cin >> T;
        while(T--)
        {
            int n ; cin >> n;
            vector <int>arrA(n), arrB;
            map <int , int> mp;
            for(auto &i : arrA)
            {
                cin >> i;
            }
            for(int i = n-1; i >= 0;i--)
            {
               if(!mp[arrA[i]])
               {
                   mp[arrA[i]] = i + 1;
                   arrB.push_back(arrA[i]);
               }
            }
            int maxy = -1 ;
            for(int i = 0; i < arrB.size();i++)
            {
                for(int j = i; j < arrB.size();j++)
                {
                    if(solve(arrB[i], arrB[j]))
                    {
                        maxy = max(maxy, mp[arrB[i]]+mp[arrB[j]]);
                    }
                }
            }
            cout << maxy << '\n';
        }








	 return 0;

}
