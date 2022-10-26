/*You are given 2 numbers (n , m); the task is to find n√m (nth root of m).
 

Example 1:

Input: n = 2, m = 9
Output: 3
Explanation: 32 = 9
Example 2:

Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not
integer.*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	double mul(int mid,int n)
	{
	    double ans=1;
	    for(int i=0;i<n;i++)
	    {
	        ans=ans*mid;
	    }
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=0;
	    int high=m;
	    while(low<=high)
	    {
	        int mid=high+(low-high)/2;
	        if(mul(mid,n)==m)
	        {
	            return mid;
	        }
	        else if(mul(mid,n)>m)
	        {
	            high=mid-1;
	        }
	        else
	        {
	            low=mid+1;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
