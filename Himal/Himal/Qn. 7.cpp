#include<stdio.h>
#include<stdlib.h>
int size(int m)
{
	int count =0;
	for(int i=0; m!=0; i++)
	{
		int temp = m%10;
		count++;
		m=m/10;
	}
	return count;
}
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter the second number:");
	scanf("%d", &b);
	int s=size(a);
	if(s==1)
	{
		printf("sum:%d\n",(a+b));
		printf("diff:%d\n",(a-b));
		exit(0);
	}
	int num1[s], num2[s];
	//putting in array
	int c;
	for(int i=0; i<s; i++)
	{
		int temp=a%10;
		num1[i]=temp;
		a=a/10;
	}
	for(int i=0; i<s; i++)
	{
		int temp=b%10;
		num2[i]=temp;
		b=b/10;
	}
	int rev1[s], rev2[s];
	//reverse
	int k=0;
	for(int i=(s-1); i>=0; i--)
	{
		rev1[k]=num1[i];
		rev2[k]=num2[i];
		k++;	
	}
	//finding the  middle number
	int n;
	for(int i=2; i<=s; i++)
	{
		if((s%i==0)&&(s!=i))
		{
			n=i;
			break;
		}
		else
		{
			n=s/2;
		}
	}
	 int k1=1, borrow=0, carry=0, lsum1=0, lsum2=0, usum1=0, usum2=0;
	 for(int i=(s-1); i>=n; i--)
	 {
	 	lsum1=lsum1+((k1*rev1[i]));
	 	lsum2=lsum2+((k1*rev2[i]));
	 	k1=k1*10;
	 }
	 int lsum=lsum1+lsum2;
	 int lborrow= lsum1 - lsum2;
	 if(lsum>=100)
	 {
	 	carry=(lsum/k1)*k1;
	 	lsum=lsum-carry;
	 }
	 int z=k1;
	 for(int i=(n-1); i>=0; i--)
	 {
	 	usum1=usum1+((k1*rev1[i]));
	 	usum2=usum2+((k1*rev2[i]));
	 	k1=k1*10;
	 }
	 printf("These number broken into smaller part:\n%d\t%d\n%d\t%d\n", usum1,lsum1,usum2,lsum2);
	 int sum= usum1+usum2+lsum+carry;
	 int uborrow=usum1-usum2;
	 printf("Sum:%d\n",sum);
	 int diff;
	 diff=uborrow+lborrow;
	 printf("\n");
	 printf("Diff:%d", diff);
	 printf("\n");
}
