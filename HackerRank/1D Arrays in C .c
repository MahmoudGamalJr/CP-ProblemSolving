// Problem Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
// Langugae: C
// User: mahmoud_gamal_a3

#include<stdio.h>

int main()
{

        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        int SumOfArray = 0;
        for(int i = 0; i < n; i++)
        {
             // summation of all elements
            SumOfArray = SumOfArray + arr[i];
        }

        printf("%d\n", SumOfArray);




       return 0;
}
