	
	
	public:
	
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    unordered_set<int> s;
	    vector<long long> ans;
	    for(int i=0;i<M;i++)
	    {
	        s.insert(B[i]);
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(s.find(A[i])==s.end())
	        {
	            ans.push_back(A[i]);
	        }
	    }
	    return ans;
	} 
};
	
