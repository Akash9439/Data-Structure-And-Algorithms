/*Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit, there will be N bars height of each bar will be given by the array arr.

Example 1:

Input:
N = 7
arr[] = {6,2,5,4,5,1,6}
Output: 12
Explanation: 


Example 2:

Input:
N = 8
arr[] = {7 2 8 9 1 3 6 5}
Output: 16
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.
Your Task:
The task is to complete the function getMaxArea() which takes the array arr[] and its size N as inputs and finds the largest rectangular area possible and returns the answer.

Expected Time Complxity : O(N)
Expected Auxilliary Space : O(N)*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<long long> NSL(long long arr[],int n)
    {
        vector<long long> left;
        stack<pair<long long,long long>> s;
        int pseudoindex=-1;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                left.push_back(pseudoindex);
            }
            else if(s.size()>0 && s.top().first<arr[i])
            {
                left.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=arr[i])
            {
                while(s.size()>0 && s.top().first>=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    left.push_back(pseudoindex);
                }
                else
                {
                    left.push_back(s.top().second);
                }
            }
            s.push({arr[i],i});
        }
        return left;
    }
    vector<long long> NSR(long long arr[],int n)
    {
        vector<long long> right;
        stack<pair<long long,long long>> s;
        int pseudoindex=n;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                right.push_back(pseudoindex);
            }
            else if(s.size()>0 && s.top().first<arr[i])
            {
                right.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=arr[i])
            {
                while(s.size()>0 && s.top().first>=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    right.push_back(pseudoindex);
                }
                else
                {
                    right.push_back(s.top().second);
                }
            }
            s.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> left=NSL(arr,n);
        vector<long long> right=NSR(arr,n);
        vector<long long> width;
        long long area;
      for(int i=0;i<n;i++)
      {
           long long temp = (right[i]-left[i]-1)*arr[i];
           area = max(area, temp);
      }
        return area;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
