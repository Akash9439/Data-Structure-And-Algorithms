/*Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 
Example 2:

Input: 
S = "abcde"
Output: -1
Explanation: No repeating character present.*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        int n=s.length();
        int i;
        unordered_map<char,int> mp;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]>1)
                {
                    return s[i];
                }
            }
        }
        return '#';
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends
