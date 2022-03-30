class CheckPrime
{
	boolean check(int n)
	{
		int i;
		if(n==1)
		{
			return false;
		}
		if(n==2 || n==3)
		{
			return true;
		}
		if((n%2==0)&&(n%3==0))
		{
			return false;
		}
		for(i=5;i*i<=n;i+=6)
		{
			if(n%i==0 || n%(i+2)==0)
			{
				return false;
			}
		}
		return true;
	}
	public static void main(String args[])
	{
		CheckPrime ob = new CheckPrime();
		boolean p=ob.check(37);
		System.out.println(p);
	}
}
