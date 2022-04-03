import java.util.*;
class CountInversion
{
	static int CountandMerge(int arr[],int l,int m,int r)
	{
		int n1=m-l+1;
		int n2=r-m;
		int left[]=new int[n1];
		int right[]=new int[n2];
		for(int i=0;i<n1;i++)
		{
			left[i]=arr[l+i];
		}
		for(int i=0;i<n2;i++)
		{
			right[i]=arr[m+1+i];
		}
		int i=0,j=0,res=0,k=l;
		while(i<n1 && j<n2)
		{
			if(left[i]<=right[j])
			{
				arr[k]=left[i];
				i++;
			}
			else
			{
				arr[k]=right[j];
				j++;
				res=res+(n1-i);
			}
			k++;	
		}
		while(i<n1)
		{
			arr[k]=left[i];
			i++;
			k++;
		}
		while(j<n2)
		{
			arr[k]=right[j];
			j++;
			k++;
		}
		return res;
	}
	static int CountInv(int arr[],int l,int r)
	{
		int res=0;
		if(l<r)
		{
			int m=l+(r-l)/2;
			res+=CountInv(arr,l,m);
			res+=CountInv(arr,m+1,r);
			res+=CountandMerge(arr,l,m,r);
		}
		return res;
	}
	public static void main(String args[])
	{
		int n;
		int arr[]=new int[50];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter The Size: ");
		n=sc.nextInt();
		System.out.println("Enter The Elements To The Array: ");
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		int p;
		p=CountInv(arr,0,n);
		System.out.println("The no of Inversion are: "+p);
	}
}
