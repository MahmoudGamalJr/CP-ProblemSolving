// Problem Name: B. Count characters
// Problem Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/submission/162257106
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>
#define ll long long
#define el "\n"
#define ONLINE_JUDGE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int arr[100000]={0};
void solve()
{
	string s;
	cin>>s;
	for(int i = 0;i<(int)s.size();i++)
	{
		arr[s[i]]++;
	}
	for(int i = 0;i<100000;i++)
	{
		if(arr[i])
		{
			cout<<char(i)<< " "<<arr[i]<<el;
		}
	}
	
		
			
}
int main()
{
		
	ONLINE_JUDGE
	 	 
	 	
	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	} 
	
	
	   
	 
	return 0;
}
