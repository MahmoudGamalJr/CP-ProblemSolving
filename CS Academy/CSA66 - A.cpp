#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int a, b;
        cin >> a >> b;

        vector<int>vecA(a), vecB(b);
        for (int i = 0; i < a; i++)
        {
            cin >> vecA[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin >> vecB[i];
        }
        
        sort(vecA.begin(), vecA.end());
        sort(vecA.begin(), vecA.end());
        reverse(vecB.begin(), vecB.end());
  
        int ansA = 0, ansB = 0, idx = 0;
        for (int i = a - 1; i >= 0; i--)
        {
            if (idx == vecB.size())
            {
                break;
            }
            if (vecA[i] > vecB[idx++])
            {
                ansA++;
            }
            else 
            {
                ansB++;
            }
        }
	
        cout << ansA << " " << ansB << '\n';


	 return 0;

}
