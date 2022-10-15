// Problem Name: P25. The price is right
// Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P25
// Language: C
// Submission Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/submission/176294694
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n, mn = INT_MAX, position = 0;
        scanf("%d", &n);

        int arr[n];
        for(int i = 0; i < n;i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i] < mn)
            {
                mn = arr[i];
                position = i;
            }
        }
        printf("%d", position);




	 return 0;

}
