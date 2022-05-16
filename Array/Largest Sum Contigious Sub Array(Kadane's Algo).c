class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_ending_here=0;
        int max_so_far=INT_MIN;
        for(int i=0;i<n;i++)
        {
            max_ending_here = max_ending_here + arr[i];
            if(max_ending_here>max_so_far)
            {
                max_so_far=max_ending_here;
            }
            if(max_ending_here<0)
            {
                max_ending_here=0;
            }
        }
        return max_so_far;
    }
};
