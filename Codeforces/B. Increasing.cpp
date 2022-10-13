// Problem Name: B. Increasing
// Problem Link: https://codeforces.com/contest/1742/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1742/submission/175936824
// User: Mahmoud_Gamal_


#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);



        int T = 1;
        cin >> T;
        while(T--)
        {

           int n ; cin >> n;
           int arr[n];
           for(int i = 0; i < n;i++)
           {
               cin >> arr[i];
           }
           bool ok = false;
           sort(arr, arr+n);
           for(int i = 0; i < n - 1;i++)
           {
               if(arr[i] >= arr[i+1])
               {
                   ok = true;
                   break;
               }
           }
           if(!ok)
           {
               cout << "YES\n";
           }
           else
           {
               cout << "NO\n";
           }



        }








	 return 0;

}
