//i/p-: 10 15 20 11 30 and low=0,mid=2,high=4
//o/p-: 10 11 15 20 30
import java.util.*;
class MergeFunction
{
	static void Merge(int a[],int left,int mid,int right)
	{
		int n1=mid-left+1;
		int n2=right-mid;
		int l[]=new int[n1];
		int r[]=new int[n2];
		for(int i=0;i<n1;i++)
		{
			l[i]=a[left+i];
		}
		for(int i=0;i<n2;i++)
		{
			r[i]=a[n1+i];
		}
		int i=0,j=0,k=0;
		while(i<n1 && j<n2)
		{
			if(l[i]<=r[j])
			{
				a[k]=l[i];
				i++;
				k++;
			}
			else
			{
				a[k]=r[j];
				j++;
				k++;
			}
		}
		while(i<n1)
		{
			a[k]=l[i];
			i++;
			k++;
		}
		while(j<n2)
		{
			a[k]=r[j];
			j++;
			k++;
		}
	}
	public static void main(String args[])
	{
		int n;
	    int a[]=new int[50];
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		Merge(a,0,2,4);
		for(int i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
	}
}
