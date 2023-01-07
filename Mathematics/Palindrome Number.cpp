class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x==0)
        {
            return true;
        }
        if(x<0 || x%10==0)
        {
            return false;
        }
        long rev=0;
        long num=x;
        while(num>0)
        {
            long rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(rev==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
