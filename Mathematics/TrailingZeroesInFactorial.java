class TrailingZeroesEfficient
{
	int count(int n)
	{
		int res = 0;
		for(int i=5;i<=n;i=i*5)
		{
			res=res+n/i;
		}
		return res;
	}
	public static void main(String args[])
	{
		TrailingZeroesEfficient ob = new TrailingZeroesEfficient();
		int p=ob.count(100);
		System.out.println(p);
	}
}
