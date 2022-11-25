// Problem Name: F. Deque
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/263096/problem/F
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/263096/submission/182526890
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;


int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);



        int m ; cin >> m;
        deque <int> dq;
        while(m--)
        {
            string s ; cin >> s;
            if(s=="push_back")
            {
                int a; cin >> a;
                dq.push_back(a);
            }
            else if(s=="push_front")
            {
                int a; cin >> a;
                dq.push_front(a);
            }
            else if(s=="front")
            {
                cout << dq.front() << "\n";
            }
            else if(s=="back")
            {
                cout<< dq.back() << "\n";
            }
            else if (s=="pop_back")
            {
                dq.pop_back();
            }
            else if(s=="pop_front")
            {
               dq.pop_front();
            }
            else
            {
                int a ; cin >> a;
                a--;
                cout << dq[a] << "\n";
            }
        }









	 return 0;

}
