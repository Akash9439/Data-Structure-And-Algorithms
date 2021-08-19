// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends


// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {
    struct pair minmax;
    int i;
    if(n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }
    
    if(arr[0]>arr[1])
        {
            minmax.min=arr[1];
            minmax.max=arr[0];
        }
    else
        {
            minmax.min=arr[0];
            minmax.max=arr[1];
        }
    
    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min)
        {
            minmax.min=arr[i];
        }
    }
    
 return minmax;
}
