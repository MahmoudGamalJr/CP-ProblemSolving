// Problem Name: C. Stripes
// Problem Link: https://codeforces.com/contest/1742/problem/C
// Language: CPP
// Submission Link: https://codeforces.com/contest/1742/submission/175971152
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

           char arr[8][8];
           for(int i = 0; i < 8;i++)
           {
               for(int j = 0; j < 8;j++)
               {
                   cin >> arr[i][j];
               }
           }
           int right = 0, bet = 0;
           for(int i = 0; i < 8;i++)
           {
               for(int j = 0; j < 8;j++)
               {
                   if(arr[i][j]=='R')
                   {
                       right++;
                   }
                   if(arr[j][i]=='B')
                   {
                       bet++;
                   }
               }
                if(right==8)
               {
                   cout <<"R\n";
                   break;
               }
               else if(bet==8)
               {
                   cout << "B\n";
                   break;
               }
               right = 0, bet = 0;

           }
          



        }








	 return 0;

}
