import java.util.*;
class IntersectionSorted
{
	static void intersection(int a[],int b[],int m,int n)
	{
		int i=0,j=0;
		while(i<m && j<n)
		{
			if(i>0 && a[i]==a[i-1])
			{
				i++;
				continue;
			}
			if(a[i]<b[j])
			{
				i++;
			}
			else if(a[i]>b[j])
			{
				j++;
			}
			else if(a[i]==b[j])
			{
				System.out.println(a[i]);
				i++;
				j++;
			}
		}
	}
	public static void main(String args[])
	{
		int n,m;
		Scanner sc = new Scanner(System.in);
		int a[]=new int[50];
		int b[]=new int[50];
		System.out.println("Enter The Size of Array a: ");
		m=sc.nextInt();
		System.out.println("Enter The Size of Array b: ");
		n=sc.nextInt();
		System.out.println("Enter Elements of Array a: ");
		for(int i=0;i<m;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println("Enter Elements of Array b: ");
		for(int i=0;i<n;i++)
		{
			b[i]=sc.nextInt();
		}
		intersection(a,b,m,n);
	}
}
