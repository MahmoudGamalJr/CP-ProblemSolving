// Problem Name: A. Life Without Zeros
// Problem Link: https://codeforces.com/contest/75/problem/A
// Language: CPP
// Submission Link: https://codeforces.com/contest/75/submission/175775590
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        long long first , second , sum = 0; cin >> first >> second ;
        sum = first + second ; // sum of the twom numbers

        ostringstream strFirst, strSecond, strSum; // cinvert from lom=ng long to string

        strFirst << first ; // converting process
        strSecond << second ;
        strSum << sum ;

        string str1 = strFirst.str(), str2 = strSecond.str(), str3 = strSum.str(); // make the strings
        string FirstNum, SecondNum, SumOfTwo;
        for(int i = 0 ; i < (int)str3.size() ; i++)
        {
            if(str1[i]!='0')
            {
                FirstNum += str1[i]; // calculate the numbers WITHOUT Zeros
            }
            if(str2[i]!='0')
            {
                SecondNum += str2[i];
            }
             if(str3[i]!='0')
            {
                SumOfTwo += str3[i];
            }
        }

        stringstream transfer1(FirstNum); // convert from string to long long
        transfer1 >> first ;

        stringstream transfer2(SecondNum);
        transfer2 >> second;

        stringstream transfer3(SumOfTwo);
        transfer3 >> sum;


        cout << ( first + second == sum ? "YES" : "NO" ); // if the first number without zeros + second number with out zeros = their sum without zeros print YES otherwies print NO











       return 0;
}
