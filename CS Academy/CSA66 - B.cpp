#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        long long a, b, many = 1e15;
        cin >> a >> b;
        
        vector<pair<long long, long long>>vecPair(a);
        
        for (int i = 0; i < a; i++)
        {
            cin >> vecPair[i].first >> vecPair[i].second;
        }
        
        sort(vecPair.begin(), vecPair.end())
        vector<long long>res(a);
        
        res[0] = vecPair[0].second;
        
        for (int i = 1; i < n; i++)
        {
            res[i] = res[i - 1] + vecPair[i].second;
        }
        
        for (int i = 0; i < a; i++)
        {
            if (vecPair[i].first >= b)
            {
                many = min(many, vecPair[i].first - res[i]);
            }
            else 
            {
                many = min(many, b - res[i]);
            }
        }
        cout << min(many , b) << '\n';


	 return 0;

}
