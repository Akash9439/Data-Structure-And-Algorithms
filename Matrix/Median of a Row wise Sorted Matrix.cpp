class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        int rows=matrix.size();
        int cols=matrix[0].size();
        int i,j;
        vector<int> v;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int n=v.size();
        return v[n/2];
    }
};
