#include <stdio.h>
int main()
{
int i,j,k,p,ch,n1,n2,set1[10],set2[10],set3[20],flag;
    printf("Enter size of set1:");
    scanf("%d",&n1);
    printf("\nEnter elements of set 1:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&set1[i]);
    }
    printf("Enter size of set2:");
    scanf("%d",&n2);
    printf("\nEnter elements of set 2:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&set2[i]);
    }
    while(1)
    {
        printf("\nPress 1 for union:");
        printf("\nPress 2 for intersection:");
        printf("\nPress 3 for difference:");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nThe union is:\n");
            k=0;
            for(i=0;i<n1;i++)
            {
                set3[k]=set1[i];
                k++;
            }
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
                p=k;
                for(k=0;k<p;k++)
                {
                    printf("%d\t",set3[k]);
                }
            break;
        case 2:
            printf("\nThe intersection is:\n");
            k=0;
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
            p=k;
            for(k=0;k<p;k++)
            {
                printf("%d\t",set3[k]);
            }
            break;
        case 3:
            printf("\nThe difference is:\n");
            k=0;
            for(i=0;i<n1;i++)
            {
                flag=1;
                for(j=0;j<n2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set1[i];
                    k++;
                }
            }
                p=k;
                for(k=0;k<p;k++)
                {
                    printf("%d\t",set3[k]);
                }
            break;
            default:
            printf("Invalid choice:");
            }
    }
    return 0;
}
