#include <stdio.h>
#include <stdlib.h>
int dirgraph();
int undirgraph();
int readgraph(int adjmat[50][50], int n );

intmain()
{
int option;
   do
   {     
	printf("\n A Program to represent a Graph by using an Adjacency Matrix method \n ");
	printf("\n 1. Directed Graph ");
	printf("\n 2. Un-Directed Graph ");
	printf("\n 3. Exit ");
	printf("\n\n Select a proper option : ");
	scanf("%d", &option);
	  switch(option)
	  {
	    case 1 :dirgraph();
	       break;
	    case 2 :undirgraph();
	       break;
	    case 3 : exit(0);
	  } 
}while(1);
}

intdirgraph()
{
int adjmat[50][50];
int n;
int indeg, outdeg, i, j;
printf("\n How Many Vertices ? : ");
scanf("%d", &n);
readgraph(adjmat, n);

printf("\n Vertex \t InDegree \t OutDegree \t TotalDegree ");
    for (i = 1; i<= n ;i++ )
    {
indeg = outdeg = 0;
 for ( j = 1 ; j <= n ; j++ )
 {
            if ( adjmat[j][i] == 1 )
indeg++;
 }
        for ( j = 1 ; j <= n ; j++ )
            if (adjmat[i][j] == 1 )
outdeg++;
printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n",i,indeg,outdeg,indeg+outdeg);
    }
    return 0;
}

intundirgraph()
{
int adjmat[50][50];
int deg, i, j, n;
printf("\n How Many Vertices ? : ");
scanf("%d", &n);
readgraph(adjmat, n);
printf("\n Vertex \t Degree ");
    for ( i = 1 ; i<= n ; i++ )
    {
deg = 0;
        for ( j = 1 ; j <= n ; j++ )
            if ( adjmat[i][j] == 1)
deg++;
printf("\n\n %5d \t\t %d\n\n", i, deg);
    } 
    return 0;
} 

int readgraph( int adjmat[50][50], int n )
{
int i, j;
    char reply;
    for ( i = 1 ; i<= n ; i++ )
    {
        for ( j = 1 ; j <= n ; j++ )
        {
            if ( i == j )
            {
adjmat[i][j] = 0;
  continue;
            } 
printf("\n Vertices %d & %d are Adjacent ? (Y/N) :",i,j);
fflush(stdin);
scanf("%c", &reply);

            if ( reply == 'y' || reply == 'Y' )
adjmat[i][j] = 1;
            else
adjmat[i][j] = 0;
 }
    } 
    return 0;
}
