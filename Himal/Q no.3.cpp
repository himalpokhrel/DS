#include<stdio.h>
struct fuzzy{
	char level;
	float num;
};
int main()
{
	int n,i,j;
	printf("Enter the total element of fuzzy set:");
	scanf("%d", &n);
	struct fuzzy setA[n];
    struct fuzzy setB[n];
    struct fuzzy unions[n];
    struct fuzzy intersection [n];
    printf("\n(level,value)=(X,0.12)\n");
    printf("\n give data of fuzzy set A:\n");
    for(i=0; i<n; i++)
    {
    	fflush(stdin);
    	printf("Enter label:");
    	scanf("%c", &setA[i].level);
    	printf("Enter value:");
    	scanf("%f",&setA[i].num);
	}
	printf("Now, give data of fuzzy set B:\n");
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		printf("Enter level:\n");
		scanf("%c", &setB[i].level);
		printf("Enter value:\n");
		scanf("%f", &setB[i].num);
	}
	for(i=0; i<n; i++){
	for(j=0; j<n; j++){
	if(setA[i].num > setB[i].num)
	{
		unions[i].num=setA[i].num;
		unions[i].level=setA[i].level;
		break;
	}
	else
	{
			unions[i].num=setB[i].num;
			unions[i].level=setB[i].level;
			break;
	}
	}
	}
	for(i=0; i<n; i++){
	for(j=0; j<n; j++){
	if(setA[i].num > setB[i].num)
	{
		intersection[i].num=setB[i].num;
		intersection[i].level=setB[i].level;
		break;
	}
	else
	{
		intersection[i].num=setA[i].num;
		intersection[i].level=setA[i].level;
		break;
	}
	}
	}
	printf("\n union:\n");
	for(i=0; i<n; i++)
	{
		printf("(%c,%.2f)", unions[i].level,unions[i].num);
	}
	printf("\n intersection:\n");
	for(i=0; i<n; i++)
	{
		printf("(%c,%.2f)", intersection[i].level,intersection[i].num);
	}
	printf("\n complement of fuzzy setA:\n");
	for(i=0; i<n; i++)
	{
		printf("(%c,%.2f)", setA[i].level,(1-setA[i].num));
	}
		printf("\n complement of fuzzy setB:\n");
	for(i=0; i<n; i++)
	{
		printf("(%c,%.2f)", setB[i].level,(1-setB[i].num));
	}
	return 0;
}
