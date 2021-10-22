#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> pairsum(vector<int> arr,int S)
{
    unordered_set<int> s;
    vector<int> result;
    for(int i=0;i<arr.size();i++)
    {
        int x=S-arr[i];
        if(s.find(x)!=s.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
    }
}
int main()
{
    vector<int> arr{10,5,2,3,-6,9,11};
    int S=4;
    auto p=pairsum(arr,S);
    if(p.size()==0)
    {
        cout<<"No Such Pairs";
    }
    else
    {
        cout<<p[0]<<","<<p[1]<<endl;
    }
}
