// Problem Name: XOR = Average
// Problem Link: https://codeforces.com/problemset/problem/1758/B
// Language: JAVA
// Submission Link: https://codeforces.com/contest/1758/submission/182914439
// User: Mahmoud_Gamal_

import java.util.Scanner;

public class Main
{
    public static void odd(int n)
    {
        for(int i = 0; i < n-1;i++)
        {
            System.out.print("1 ");
        }
        System.out.print("1\n");
    }
    public static void even(int n)
    {
        System.out.print("1 ");
        for(int i = 0; i < n-2;i++)
        {
            System.out.print("2 ");
        }
        System.out.print("3\n");
    }
    
	public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        
        
        int t = in.nextInt();
        for(int i = 0 ; i < t;i++)
        {
            int n = in.nextInt(); 
            if(n%2==1)
            {
                odd(n);
            }
            else
            {
                even(n);
            }

        }

	}
}
