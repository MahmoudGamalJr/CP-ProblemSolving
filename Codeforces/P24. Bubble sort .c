// Problem Name: P24. Bubble sort
// Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P24
// Language: C
// Submission Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/submission/176295496
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i = 0; i < n;i++)
        {
            scanf("%d", &arr[i]);
        }
        int test = n - 1;
        while(test--)
        {
            for(int i = 0;i < n - 1;i++)
            {
                if(arr[i] > arr[i+1])
                {
                    swap(arr[i], arr[i+1]);
                }
            }

            for(int i = 0; i < n;i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }




	 return 0;

}
