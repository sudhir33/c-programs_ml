
int reverse(int num)//123
{//fun def
	int r,rev=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	return rev;//321
	
}
   
int lcm(int num1,int num2)  
{
	int lcm=1,t=2;
	while(num1>=t && num2>=t)
	{
		if(num1%t==0 && num2%t==0)
		{
			num1=num1/t;
			num2=num2/t;
			lcm=lcm*t;
		}
		else
		{
			t++;
		}
	}
	return lcm*num1*num2;
	
}
   
   
int gcd(int a,int b)
{
	
}
   
   
   
   
   
   
   
   
   
   
   
