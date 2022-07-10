/*n = 7
arr[] = {1, 2, 3, 4, 5, 6, 7}
K = 8
Output:
3
Explanation:
We find 3 such pairs that
sum to 8 (1,7) (2,6) (3,5)*/
// { Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




 // } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        int left=0;
        int right=n-1;
        int counter=0;
        int acsum;
        while(left<right)
        {
            acsum=arr[left]+arr[right];
            if(acsum==sum)
            {
                counter++;
                left++;
                right--;
            }
            else if(acsum<sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        if(counter==0)
        {
            return -1;
        }
        else
        {
            return counter;
        }
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends
