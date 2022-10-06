// Problem Link: https://www.hackerrank.com/challenges/prettyprint/problem
// Langugae: C
// User: mahmoud_gamal_a3



#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        // test cases
        int T; cin >> T;
        cout << setiosflags(ios::uppercase);
        cout << setw(0xf) << internal;
        while(T--) 
        {
            double A; cin >> A;
            double B; cin >> B;
            double C; cin >> C;
            
            // First Line
            cout << std::hex << std::left << std::showbase << std::nouppercase; 
            cout << (long long) A << '\n';

            // Second Line
            cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2); 
            cout << B << '\n';

            // Third Line
            cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9); 
            cout << C << '\n';

        }

       return 0;
}
