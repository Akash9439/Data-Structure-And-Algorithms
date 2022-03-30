class LCMEuclidean
{
	int gcd(int a,int b)
	{
		if(b==0)
		{
			return a;
		}
		return gcd(b,a%b);
	}
	int lcm(int a,int b)
	{
		int p=gcd(a,b);
		int res=a*b/p;
		return res;
	}
	public static void main(String args[])
	{
		LCMEuclidean ob = new LCMEuclidean();
		int w=ob.lcm(4,6);
		System.out.println(w);
	}
}
