// Problem Name: K. Sorting pairs
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/K
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/182225316
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

struct empo{

        string name ;
        int sum;
        void get()
        {
            cin >> name >> sum;
        }
        void out()
        {
            cout << name << " " << sum << '\n';
        }

};

bool compare(empo &a, empo &b)
{
    if(a.sum==b.sum)
    {
        return a.name < b.name;

    }
        return a.sum > b.sum;
}

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);
        int n ; cin >> n ;
        empo arr[n];
        for(int i = 0; i < n;i++)
        {
            arr[i].get();
        }
        sort(arr, arr+n, compare);
        for(int i = 0;i < n;i++)
        {
            arr[i].out();
        }




	 return 0;

}
