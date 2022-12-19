/*Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false*/
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<s.size();i++)
        {
            if(m1.count(s[i])==0 && m2.count(t[i])==0)
            {
                m1[s[i]]=t[i];
                m2[t[i]]=s[i];
            }
            else if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i])
            {
                return false;
            }
        }
        return true;
    }
};
