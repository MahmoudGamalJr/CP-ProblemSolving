// Problem Name: I. Using vector
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/I
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/179017958
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);


        vector <int> vect;

        int n ,m ; cin >> n >> m;

        for(int i = 0; i < n;i++)
        {
            int x ; cin >> x;
            vect.push_back(x);
        }

        while(m--)
        {
            string str; cin >> str;
            if(str == "sort")
            {
                int l , r ; cin >> l >> r;
                sort(vect.begin()+ l - 1, vect.begin()+r);
            }
            else if(str == "reverse")
            {
                int l , r ; cin >> l >> r;
                reverse(vect.begin()+ l - 1, vect.begin()+r);
            }
            else
            {
                if(str == "pop_back")
                {
                    vect.pop_back();
                }
                else if(str == "back")
                {
                    cout << vect.back() << '\n';
                }
                else if(str == "front")
                {
                    cout << vect.front() << '\n';
                }
                else
                {
                    int x ; cin >> x;
                    if(str == "print")
                        cout << vect[x - 1] << '\n';
                    else
                        vect.push_back(x);
                }


            }
        }




	 return 0;

}
