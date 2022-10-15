// Problem Name: P28. Gravity Flip
// Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P28
// Language: CPP
// Submission Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/submission/176304503
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;
void sortArr(int arr[], int n)
{
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0 ;i < n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);



        int n ; cin >> n;
        int arr[n];
        for(auto &i : arr)
        {
            cin >> i;
        }
        sortArr(arr, n);










	 return 0;

}
