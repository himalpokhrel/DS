#include<stdio.h>
int i=0;
int recur(int a, int n)
{
	if(n==1)
	{
		return a;
	}
	else
	{
		a= a*(recur(a,(n-1)));
	}
}
int exponentMod(int A, int B, int C)
{
	if(A==0)
	{
		return 0;
	}
	if(B==0);
	{
		return 1;
	}
	int y;
	if(B%2==0)
	{
		y= exponentMod(A,B/2,C);
		y= y*y%C;
	}
	else
	{
		y= A%C;
		y= (y*exponentMod(A,B-1,C)%C);
	}
	return (int)((y+C)%C);
}
int linear (int a[], int size, int target)
{
	if(a[i]==target)
	{
		return 100;
	}
	else
	{
		i++;
		linear (a, size-1,target);
	}
	if(size==0)
	{
		return 10;
	}
}
int main ()
{
	int a,n,x,m;
	printf("Enter the base:\n");
	scanf("%d",&a);
	printf("Enter the exponent:\n");
	scanf("%d",&n);
	int k= recur(a,n);
	printf("%d^%d=%d",a,n, k);
	printf("\n");
	printf("For x^n mod m:\n");
	printf("enter x:");
	scanf("%d",&x);
		printf("enter n:");
	scanf("%d",&n);
		printf("enter m:");
	scanf("%d",&m);
	/*
	int q[5]={1,2,3,4,5};
	int p = linear(q,5,9);
	if(p==100)
	{
		printf("\nfound\n");
	}
	else{
		printf("\nnot found\n");
	}
	*/
int mod= exponentMod(x,n,m);
printf("Modular exponent:%d",mod);
return 0;
}
