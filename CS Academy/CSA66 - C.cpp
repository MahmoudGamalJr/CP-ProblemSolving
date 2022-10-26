#include<bits/stdc++.h>

using namespace std;

const int N = 1000000 + 20;
int arr[N];

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

        int a;
        long long b;
        cin >> a >> b;
        map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }
        for (auto it : mp)
        {
            int numA = it.first;
            int numB = it.second;
            for (int j = numA; j <= b; j += numA){
                arr[j] += numB;
            }
        }
        int maxy = 0;
        for (int i = 1; i <= b; i++)
        {
            maxy = max(arr[i], maxy);
        }
        cout << maxy << " ";
        int ans = 0;
        for (int i = 1; i <= b; i++){
            if (arr[i] == maxy)
            {
                ans++;
            }
        }
        cout << ans << '\n';


	 return 0;

}
