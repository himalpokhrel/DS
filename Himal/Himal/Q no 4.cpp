#include<stdio.h>
int GCD(int a, int b)
{
	int c=a%b;
	if(c!=0)
	{
		a=b;
		b=c;
		GCD(a,b);
	}
	else
	 {
		return b;
	 }
}
int extended_gcd(int a, int b, int*x, int*y)
{
	if(a==0)
	{
		*x=0;
		*y=1;
		return b;
	}
	int _x, _y;
	int gcd = extended_gcd(b%a,a,&_x,&_y);
	*x=_y-(b/a)*_x;
	*y=_x;
	return gcd;
}

int main()
{
	int x,y;
	int a,b;
	printf("Enter first digit:\n");
	scanf("%d", &a);
	printf("Enter second digit:\n");
	scanf("%d", &b);
	if(a>b)
	{
		int temp = GCD(a,b);
		printf("The GCD by Euclidian Algo is %d", temp);
	}
	else
	{
		int temp = GCD(b,a);
		printf("The GCD by eucledian Algo is %d",temp);
	}
	printf("\ngcd=%d\n", extended_gcd(a,b,&x,&y));
	printf("x=%d, y=%d", x,y);
	return 0;
}
