#include <bits/stdc++.h>

using namespace std;

int n, arr[16];

int main() {
    for(int i = 0; i < 16; i++)
    {
        cin >> arr[i];
    }
  
    reverse(arr, arr + n);
    
    int res = 0;
    for(int i = 0; i < 16; ++i) {
        arr[i] += 300;
        int cnt = 1;
        for(int j = 0; j < 16; ++j)
            if(i != j && arr[i] > arr[j])
                ++cnt;
        if(cnt > 12)
            ++res;
        arr[i] -= 300;
    }
    
    cout << res << endl;
    
    return 0;
}
