// Problem Name: S. Array
// Problem Link: https://codeforces.com/gym/404780/problem/S
// Language: CPP
// Submission Link: https://codeforces.com/gym/404780/submission/180202046
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;


int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);


        deque <int> arrA, arrB, arrC;
        
        int n ; cin >> n;
        for(int i = 0; i < n;i++)
        {
            int x ;cin >> x;

            if(x==0)
            {
                arrC.push_back(x);
            }
            else if(x>0)
            {
                arrA.push_back(x);
            }
            else
            {
                arrB.push_back(x);
            }
        }
        
        if(arrA.empty())
        {
            if(arrB.size()>arrC.size())
            {
                arrA.push_back(arrB.front());
                arrB.pop_front();
            }
            else
            {
                arrA.push_back(arrC.front());
                arrC.pop_front();
            }

        }
        
        if(arrB.empty())
        {
            if(arrA.size()>arrC.size())
            {
                arrB.push_back(arrA.front());
                arrA.pop_front();
            }
            else
            {
                arrA.push_back(arrC.front());
                arrC.pop_front();
            }
        }
        
        if(arrC.empty())
        {
            if(arrB.size()>arrA.size())
            {
                arrC.push_back(arrB.front());
                arrB.pop_front();
            }
            else
            {
                arrC.push_back(arrA.front());
                arrA.pop_front();
            }
        }
        
        cout << arrA.size() <<" ";
        for(int i = 0; i < arrA.size();i++)
        {
            cout << arrA[i] <<" ";
        }
        cout << '\n';
        
        cout << arrB.size() <<" ";
        for(int i = 0; i < arrB.size();i++)
        {
            cout << arrB[i] <<" ";
        }
        cout << '\n';
        
        cout << arrC.size() <<" ";
        for(int i = 0; i < arrC.size();i++)
        {
            cout << arrC[i] <<" ";
        }
        cout << '\n';




	 return 0;

}
