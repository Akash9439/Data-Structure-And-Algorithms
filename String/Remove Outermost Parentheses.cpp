/*Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()"*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) 
    {
        // code here
        string ans;
        int opened=0;
        for(char c:s)
        {
            if(c=='(')
            {
                if(opened>0)
                {
                    ans=ans+'(';
                }
                opened++;
            }
            else if(c==')')
            {
                if(opened>1)
                {
                    ans=ans+')';
                }
                opened--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends
