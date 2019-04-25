//Sir the solution was done in dev c++ so if you run it in ubuntu just use the stdio header file thankyou and it works for both the questions
#include<stdio.h>
using namespace std;
int n;   
 int r;      
 int i,j,k;
 int need[10][10],alloc[10][10],max[10][10];
 int avail[10],p[10];
int flag=0;

int main()
{
 	
  	printf("\nEnter number of process :");
 	scanf("%d",&n);
 	printf("\n Enter  resources available : ");
 	scanf("%d",&r);
 	printf("\nEnter instances for resources :\n");
 	for(i=0;i<r;i++)
 	{
		printf("\nR : %d ",i+1);
  		scanf("%d",&avail[i]);
  	}
 	printf("\n Enter allocation matrix  \n");
 	for(i=0;i<n;i++)
 	{
 		printf("\nP : %d",i+1);
          	p[i]=0;
 		for(j=0;j<r;j++)
 		{
  			scanf("%d",&alloc[i][j]);
 		}
	}
  	printf("\n Enter MAX matrix  \n");
	for(i=0;i<n;i++)
 	{
 		printf("\nP : %d",i+1);
 		for(j=0;j<r;j++)
 		{
  			scanf("%d",&max[i][j]);
 		}
 	}

 	for(i=0;i<n;i++)
 	{
 		printf("\nP : %d\t",i+1);
 		for(j=0;j<r;j++)
 		{
  			need[i][j]=max[i][j]-alloc[i][j];
  			printf("\n\t%d",need[i][j]);
  		}
 	}
 
 	printf("\n\n");
 	for(i=0;i<n;i++) 
	{ 
		for(j=0;j<r;j++) 
		{	 
			if(avail[j]>=need[i][j]) 
				flag=1; 
			else 
				flag=0; 
		} 
	} 
	if(flag==0) 
		printf("\nUnsafe State"); 
	else 
		printf("\nSafe State");
}
