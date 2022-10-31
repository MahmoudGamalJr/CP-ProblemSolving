// Problem Name: Palindrome Number
// Problem Link: https://leetcode.com/problems/palindrome-number/
// Language: CPP
// Submission Link: 
// User: 


class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while(x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10
        
    }
      return x == revertedNumber || x == revertedNumber/10;
};
