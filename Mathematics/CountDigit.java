class CountDigitRecursive
{
	int countdigit(int n)
	{
		if(n==0)
		{
			return 0;
		}
		return 1+countdigit(n/10);
	}
	public static void main(String args[])
	{
		CountDigitRecursive ob = new CountDigitRecursive();
		int p=ob.countdigit(123);
		System.out.println(p);
	}
}
