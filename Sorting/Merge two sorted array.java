//User function Template for Java

class Solution
{
    //Function to merge the arrays.
    public static void merge(long arr1[], long arr2[], int n, int m) 
    {
        // code here 
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                System.out.println(arr1[i]);
                i++;
            }
            else
            {
                System.out.println(arr2[j]);
                j++;
            }
        }
        while(i<m)
        {
            System.out.println(arr1[i]);
        }
        while(j<n)
        {
            System.out.println(arr2[j]);
        }
    }
}
