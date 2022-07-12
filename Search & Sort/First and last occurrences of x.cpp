/*Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. */
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
/*vector<int> find(int arr[], int n , int x )
{
    // code here
    int i,j;
    vector<int> v;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            v.push_back(i);
            count++;
        }
    }
    if(v.size()==0)
    {
        return {-1,-1};
    }
    return {v[0],v[count-1]};
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int firstocc=-1;
        int lastocc=-1;
        //for first occurnace
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                firstocc=mid;
                high=mid-1;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        low=0;
        high=n-1;
        //for last occurance
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                lastocc=mid;
                low=mid+1;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return {firstocc,lastocc};
    }
};
