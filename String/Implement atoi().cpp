/*Example 1:

Input:
str = 123
Output: 123
Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.*/
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
        //Your code here
        int n=str.size();
        int sum=0,sign=1,i=0;
        if(str[i]=='-')
        {
            sign=-1;
            i++;
        }
        while(i<n)
        {
            int num=str[i]-'0';
            if(num>=0 && num<=9)
            {
                sum=sum*10+num;
            }
            else
            {
                return -1;
            }
            i++;
        }
        return sum*sign;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
