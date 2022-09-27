//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void insert(vector <int> &arr,int temp)
    {
        if(arr.size()==0 || arr[arr.size()-1]<=temp)
        {
            arr.push_back(temp);
            return;
        }
        int val=arr[arr.size()-1];
        arr.pop_back();
        insert(arr,temp);
        arr.push_back(val);
    }
    vector<int> sortArr(vector<int>arr, int n)
    {
    //complete the function here
    if(n==1)
    {
        return arr;
    }
    int temp=arr[n-1];
    arr.pop_back();
    sortArr(arr,n);
    insert(arr,temp);
    return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends
