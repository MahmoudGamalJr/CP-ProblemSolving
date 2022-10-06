
// Problem Link: https://www.hackerrank.com/challenges/recursion-in-c/problem
// Langugae: C
// User: mahmoud_gamal_a3

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int find_nth_term(int n, int a, int b, int c) 
{
    // base case 1
    if(n == 1)
    {
        return a;
    }
    // base case 2
    else if (n == 2)
    {
        return b;
    }
    // base case 3
    else if (n == 3)
    {
        return c;
    }
    return find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
}
int main()
{

        ios_base :: sync_with_stdio(0),
        cin.tie(0);
        
        int n, a, b, c;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        int ans = find_nth_term(n, a, b, c);
     
        printf("%d\n", ans); 

       

       return 0;
}
