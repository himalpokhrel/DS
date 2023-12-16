#include<stdio.h>
int factorial (int n)
{
	if(n==1)
	{
		return n;
	}
	else {
		n=n*factorial(n-1);
	}
}

int main()
{
	int a,b;
	printf("Enter the total no of object:");
	scanf("%d", &a);
	printf("Enter the no of  object selected:");
	scanf("%d", &b);
	int fa=factorial(a);
	int fb=factorial(b);
	printf("Permutation: %d", ((fa)/factorial(a-b)));
	printf("\nCombination: %d", ((fa)/(fb*factorial(a-b))));
	return 0;
}
