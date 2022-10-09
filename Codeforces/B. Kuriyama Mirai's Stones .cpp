// Problem Name: B. Kuriyama Mirai's Stones
// Problem Link: https://codeforces.com/contest/433/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/433/submission/174860962
// User: Mahmoud_Gamal_


#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n, test,type, right, left; cin >> n;
        ll arrA[n + 9], arrB[n + 9];
        arrA[0] = arrB[0] = 0; // dynamic programming step (base 1 NOT 0).
        for(int i = 1; i <=n;i++)
        {
            cin >> arrA[i];
            arrB[i] = arrA[i];
                // prefix sum the first array
            arrA[i] = arrA[i] + arrA[i-1];
        }
        // sort the second array before prefix sum it
        sort(arrB, arrB + n + 1);
        for(int i = 1;i<=n;i++)
        {
                // prefix sum the second array
            arrB[i] = arrB[i] + arrB[i-1];
        }

        cin >> test;
        while(test--)
        {
            cin >> type >> left >> right;
            if(type==1)
            {
                    // the value of right - (left - 1) - 
                cout << arrA[right] - arrA[left-1] ;
            }
            else
            {
                cout << arrB[right] - arrB[left-1] ;
            }
            cout << '\n';
        }


       return 0;
}
