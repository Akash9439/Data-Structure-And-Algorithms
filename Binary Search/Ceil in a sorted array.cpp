int Ceil(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    int res2=-1;
    while(low<=high)
    {
        int mid=high+(low-high)/2;
        if(x>=arr[mid])
        {
            low=mid+1;
        }
        else if(x<=arr[mid])
        {
            res2=arr[mid];
            high=mid-1;
        }
    }
    return res2;
}
