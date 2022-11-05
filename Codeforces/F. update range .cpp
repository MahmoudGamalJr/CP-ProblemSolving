// Problem Name: F. update range
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/F
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/179331982
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;
const int MAX = 1e6;
long long arr[MAX];
void update(int a, int b, int c)
{
    for(int i = a - 1;i < b;i++)
    {
        arr[i] = arr[i] + c;
    }
}
int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        long long n , m ; cin >> n >> m;
        for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
        while(m--)
        {
            long long l , r , sum; cin >> l >> r >> sum;
            update(l , r , sum);
        }
        for(int i = 0; i < n;i++)
        {
            cout << arr[i] << " ";
        }







	 return 0;

}
