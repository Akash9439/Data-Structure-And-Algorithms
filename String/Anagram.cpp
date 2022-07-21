//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int n1=a.length();
        int n2=b.length();
        vector<int> a1(26);
        vector<int> b1(26);
        int i;
        
        for(i=0;i<n1;i++)
        {
            a1[a[i]-97]++;
        }
        for(i=0;i<n2;i++)
        {
            b1[b[i]-97]++;
        }
        
        for(i=0;i<26;i++)
        {
            if(a1[i]!=b1[i])
            {
                return false;
            }
        }
        
      return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
