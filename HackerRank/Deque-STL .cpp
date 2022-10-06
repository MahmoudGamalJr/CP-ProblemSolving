// Problem Link: https://www.hackerrank.com/challenges/deque-stl/problem
// Langugae: CPP
// User: mahmoud_gamal_a3

#include<bits/stdc++.h>

using namespace std;

#define ll long long

void print(int arr[], int n, int k){
      deque<int> dq;
    
        for(int i = 0 ; i < n ; i++)
        {
        
        // base case for first element
        if (dq.empty())
        {
            dq.push_back(i);
        }
        
        // remove elements
        if (dq.front() <= (i - k))
        {
            dq.pop_front();
        }
        
        // move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        // print out only when the first window is completed
        if (i >= (k - 1))
        {
            cout << arr[dq.front()] << " ";
        }    
    }
    cout << '\n' ;
}
int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);
        
        int T;
        cin >> T;
        // test cases
        while(T--)
        {
            int n , k;
            cin >> n >> k;
            int arr[n];
            for(int i = 0 ; i < n ; i++)
            {
                cin >> arr[i];
            }
            print(arr, n, k);
        }

       

       return 0;
}
