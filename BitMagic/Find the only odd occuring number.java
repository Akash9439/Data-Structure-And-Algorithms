class Solution{
    static int findSingle(int N, int arr[]){
       int res=0;
       for(int i=0;i<N;i++)
       {
           res=res^arr[i];
       }
       return res;
    }
}
