// Problem Name: A - Iroha and Haiku
// Problem Link: https://atcoder.jp/contests/abc044/tasks/abc044_a
// Language: C
// Submission Link: https://atcoder.jp/contests/abc044/submissions/35610867
// User: MahmoudGamal

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);

          int N , K , X , Y , ans = 0;
          scanf("%d %d %d %d", &N, &K, &X, &Y);
          if ( N >= K )
          {
            ans = K * X + (N-K) * Y;
            printf("%d", ans);
          }
          else if( N < K )
          {
            ans = N * X ;
            printf("%d", ans);
          }








	 return 0;

}


