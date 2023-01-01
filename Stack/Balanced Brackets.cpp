#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        stack<char> st;
        st.push('a');
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{') || (s[i]==')'&& st.top()=='('))
            {
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
        } 
        if(st.top()=='a')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
