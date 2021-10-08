#include<stdio.h>
void main()
{
	int a[6][6];
	int i,j;
	int put;
	put=1;
    int minr,minc,maxr,maxc;

	 
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			a[i][j]=put++;
			
	    }
		
	}
	printf("The given array:\n");

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf(" %2d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe spiral array:\n");
	
	minr=0;
	minc=0;
	maxr=5;
	maxc=5;
	
  	for(i=minr; i<maxr; i++)
	{
		printf(" %d ",a[i][minc]);
	}
	
	for(i=minc; i<maxc; i++)
	{
		printf(" %d ",a[maxc][i]);
	}
    
	for(i=maxr; i>minr; i--)
	{
		printf(" %d ",a[i][maxc]);
	}
	
	for(i=maxc; i>minc; i--)
	{
		printf(" %d ",a[minr][i]);
	}

	minr=1;
	minc=1;
	maxr=4;
	maxc=4;
	
	for(i=minr; i<maxr; i++)
	{
		printf(" %d ",a[i][minc]);
	}

	for(i=minc; i<maxc; i++)
	{
		printf(" %d ",a[maxc][i]);
	}
    
	for(i=maxr; i>minr; i--)
	{
		printf(" %d ",a[i][maxc]);
	}
	
	for(i=maxc; i>minc; i--)
	{
		printf(" %d ",a[minr][i]);
	}
	


	minr=2;
	minc=2;
	maxr=3;
	maxc=3;
	
	for(i=minr; i<maxr; i++)
	{
		printf(" %d ",a[i][minc]);
	}

	for(i=minc; i<maxc; i++)
	{
		printf(" %d ",a[maxc][i]);
	}
    
	for(i=maxr; i>minr; i--)
	{
		printf(" %d ",a[i][maxc]);
	}
	
	for(i=maxc; i>minc; i--)
	{
		printf(" %d ",a[minr][i]);
	}

}
//output 
OUTPUT:

The given array:
  1   2   3   4   5   6
  7   8   9  10  11  12
 13  14  15  16  17  18
 19  20  21  22  23  24
 25  26  27  28  29  30
 31  32  33  34  35  36

The spiral array:   
 1  7  13  19  25  31  32  33  34  35  36  30  24  18  12  6  5  4  3  2  8  14  20  26  27  28  29  23  17  11  10  9  15  21  22  16
