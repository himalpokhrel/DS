#include<stdio.h>
int main()
{
	int i,x,m,c,z,n,a;
	printf("Input the limit of the number:\n");
	scanf("%d",&a);
	printf("Input the module m:\n");
	scanf("%d",&m);
	printf("Input the constant:\n");
	scanf("%d",&c);
	printf("Input how many number you want:\n");
	scanf("%d",&n);
	printf("Input the seed number:\n");
	scanf("%d",&x);
	printf("Random number are:\n");
	for(i=0; i<n; i++)
	{
		z=((x*a)+c)%m;
		printf("%d\t",z);
		x=z;
	}
	printf("\nProbablistic algorithm to check the prime number:\n");
	int k, is_prime=0;
	printf("Input number to check the prime:\n");
	scanf("%d",&k);
	for(i=2; i<=k; i++)
	{
		if(k%i==0)
		{
			is_prime=1;
		}
	}
	if(is_prime)
	{
		printf("%d Input number is not prime", k);
	}
	else
	{
		printf("%d is prime number", k);
	}
	return 0;
}
