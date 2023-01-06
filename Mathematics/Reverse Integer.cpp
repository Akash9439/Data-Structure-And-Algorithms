class Solution {
public:
    int reverse(int x) 
    {
        /*while(x%10==0)
        {
            x=x/10;
        }
        int a=x;
        if(x<0)
        {
            a=-1*a;
        }*/
        long rev=0;
        int a=x;
        while(a!=0)
        {
            int rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        /*if(x<0)
        {
            rev=-1*rev;
        }*/
        if(rev>INT_MAX || rev<INT_MIN)
        {
            return 0;
        }
        else
        {
            return rev;
        }
    }
};
