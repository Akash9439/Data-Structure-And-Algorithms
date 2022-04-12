class Solution {
    static int setBits(int N) {
        // code here
        int res=0;
        while(N>0)
        {
            N=(N&(N-1));
            res++;
        }
        return res;
    }
}
