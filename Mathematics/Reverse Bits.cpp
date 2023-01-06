//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) 
    {
        // code here
        long long v[32]={0};
        long long i=0;
        long long num=X;
        while(num>0)
        {
           v[i]=num%2;
           num=num/2;
           i++;
        }
        for(i=0;i<32;i++)
        {
            num+=v[i]*(pow(2,31-i));
        }
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends
