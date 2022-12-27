/*Input: s = " ((5+2)(3+4)((6))) "
Output: 3
Explanation: Character '6' is inside three nested parentheses.*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        // code here
        stack<char> st;
        int maxm=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                int temp=st.size();
                maxm=max(maxm,temp);
                //cout<<st.size()<<endl;
            }
            else if(s[i]==')')
            {
                st.pop();
            }
        }
        if(st.size()>0)
        {
            return -1;
        }
        return maxm;
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
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
